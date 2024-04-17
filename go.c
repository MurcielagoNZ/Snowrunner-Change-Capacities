#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *path;

#define trucksCount 150
#define namesCount 6
#define pathLen 512
#define MaxL 1280 //max string length

int i, count, capas[trucksCount], weights[trucksCount], types[trucksCount];
char paths[trucksCount][pathLen] = { 0 }, buf[pathLen] = "";

const char names[namesCount][32] =
{
	"FuelCapacity=",
	"<TruckData WaterCapacity=",
	"<TruckData FuelCapacity=",
	"<FuelMass>",
	"<WaterMass>",
	"<Body Mass="
};

void replaceNumber(char dst[], int newValue)
{
	char num[8] = "", tail[MaxL / 2] = "", *x;

	x = strchr(dst, '\"');
	strcpy(tail, x + 1);
	_itoa(newValue, num, 10);
	strcpy(x + 1, num);
	strcat(x + strlen(num), strchr(tail, '\"'));
}

int findStr(char src[], int searchType)
{
	int len = strlen(src), i;
	if (!len) return(0);

	char str[MaxL] = "";

	for (i = 0; i < len && (32 == src[i] || '\t' == src[i]); i++);

	memset(str, 0, sizeof(str));
	strcpy(str, src + i);

	if (searchType)
		for (i = 0; i < namesCount; i++)
		{
			if (!strncmp(str, names[i], strlen(names[i])))
				return(i + 1);
		}
	else
		for (i = 0; i < 3; i++)
		{
			if (!strncmp(str, names[i], strlen(names[i])))
				return(i + 1);
		}

	return(0);
}

int getInfo(char filePath[], int type)
{
	FILE *inf;

	char cache[MaxL] = "";
	int x;

	inf = fopen(filePath, "r");
	if (NULL == inf)
	{
		printf("%s\n", filePath);
		return(1);
	}

	while (fgets(cache, sizeof(cache), inf) != NULL)
	{
		x = findStr(cache, 1);
		if (1 == type && 1 == x)
		{
			printf("%d\t%d\t%s\t%s", type, x, filePath, cache);
			fclose(inf);
			return(0);
		}
		if (4 == x || 5 == x)
		{
			cache[strlen(cache) - 2] = 0;
			printf("%d\t%d\t%s\t%s", type, x, filePath, cache);
			fgets(cache, sizeof(cache), inf);
			printf("%s", cache);
			fclose(inf);
			return(0);
		}
		if (x && x != 6)
			printf("%d\t%d\t%s\t%s", type, x, filePath, cache);
	}

	fclose(inf);
	return(0);
}

void findAndChangeData(char filePath[], int type, int newCapa, int newweights)
{
	FILE *inf, *ouf;

	char cache[MaxL] = "", num[MaxL] = "";
	char bakFile[MaxL] = "", command[MaxL] = "";
	int flag = 0, x;

	//make backup (read from backup file after so it's necessary)
	strncpy(bakFile, filePath, strlen(filePath) - 3);
	strcat(bakFile, "bak");
	strcat(command, "copy ");
	strcat(command, filePath);
	strcat(command, " ");
	strcat(command, bakFile);
	strcat(command, " > nul");
	system(command);

	inf = fopen(bakFile, "r");
	ouf = fopen(filePath, "w");
	if (NULL == inf)
	{
		printf("0=0\n");
		return;
	}
	else
		puts(filePath);

	switch (type)
	{
	case 1:
	case 2:
		while (fgets(cache, sizeof(cache), inf) != NULL)
		{
			if (findStr(cache, 0))
				replaceNumber(cache, newCapa);
			fputs(cache, ouf);
		}
		break;
	case 3:
	case 5:
		while (fgets(cache, sizeof(cache), inf) != NULL)
		{
			x = findStr(cache, 1);
			if (4 == x || 5 == x)
				flag = 1;
			if (1 == x || 2 == x || 3 == x)
				replaceNumber(cache, newCapa);
			if (6 == x && flag)
			{
				flag = 0;
				replaceNumber(cache, newweights);
			}
			fputs(cache, ouf);
		}
		break;
	}

	fclose(inf);
	fclose(ouf);
}

int main()
{
	path = fopen("path.txt", "r");

	count = 0;
	while (fscanf(path, "%d", &types[count]) != EOF && types[count] != 0)
	{
		fscanf(path, "%s", paths[count]);
		fscanf(path, "%d", &capas[count]);
		if (3 == types[count] || 5 == types[count])
			fscanf(path, "%d", &weights[count]);
		count++;
	}
	fclose(path);

	for (i = 0; i < count; i++)
		getInfo(paths[i], types[i]);
		//findAndChangeData(paths[i], types[i], capas[i], weights[i]);

	//system("del /s *.bak > nul");
	//printf("All done. Changed %d files.\n", count);
	//system("pause");

	return 0;
}