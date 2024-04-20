#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *path;

#define trucksCount 150
#define namesCount 7
#define pathLen 512
#define MaxL 1280 // max string length

int i, count, findType, val[2][trucksCount], types[trucksCount];
char paths[trucksCount][pathLen] = { 0 };

const char names[namesCount][32] =
{
	"FuelCapacity=",
	"<TruckData WaterCapacity=",
	"<TruckData FuelCapacity=",
	"<FuelMass>",
	"<WaterMass>",
	"<Body Mass=",
	"RepairsCapacity="//,
	//"DiffLockType=",
	//"Country=",
	//"Price=",
	//"UnlockByExploration=",
	//"UnlockByRank="
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

int findStr(char src[], int searchType) // type: 0 - short; 1 - full
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
		/*
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
		*/
		if (x == findType)
			printf("%d\t%d\t%s\t%s", type, x, filePath, cache);
	}

	fclose(inf);
	return(0);
}

void findAndChangeData(char filePath[], int type, int newVal1, int newVal2)
{
	FILE *inf, *ouf;

	char cache[MaxL] = "", num[MaxL] = "";
	char bakFile[MaxL] = "", command[MaxL] = "";
	int flag = 0, x;

	// make backup (read from backup file after so it's necessary)
	strncpy(bakFile, filePath, strlen(filePath) - 3);
	strcat(bakFile, "bak");
	strcat(command, "copy ");
	strcat(command, filePath);
	strcat(command, " ");
	strcat(command, bakFile);
	strcat(command, " > nul");
	system(command);

	inf = fopen(bakFile, "r");
	if (NULL == inf)
	{
		printf("File not found: ");
		puts(filePath);
		return;
	}
	else
	{
		printf("Working: ");
		puts(filePath);
		ouf = fopen(filePath, "w");
	}

	while (fgets(cache, sizeof(cache), inf) != NULL)
	{
		x = findStr(cache, 1);
		if (x && x != 6)
		{
			if (4 == x || 5 == x)
			{
				fputs(cache, ouf);
				fgets(cache, sizeof(cache), inf);
			}

			printf("Hit: type %d\nstr %d\nval1: %d\nval2: %d\nold str: %s\n", type, x, newVal1, newVal2, cache);

			if (1 <= x && x <= 3)
				replaceNumber(cache, newVal1);
			if (4 == x || 5 == x)
				replaceNumber(cache, newVal2);
			if (7 == x)
				if (5 == type)
					replaceNumber(cache, newVal2);
				else
					replaceNumber(cache, newVal1);

			printf("new str: %s\n\n", cache);
		}
		fputs(cache, ouf);
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
		fscanf(path, "%d", &val[0][count]);
		if (2 <= types[count] && types[count] <= 5)
			fscanf(path, "%d", &val[1][count]);
		count++;
	}
	fclose(path);

	//scanf("%d", &findType);

	for (i = 0; i < count; i++)
		//getInfo(paths[i], types[i], findType);
		findAndChangeData(paths[i], types[i], val[0][i], val[1][i]);

	system("del /s *.bak > nul");
	printf("All done. Changed %d files.\n", count);
	system("pause");

	return 0;
}