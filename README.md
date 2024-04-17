# 《雪地奔驰》容量修改工具 SnowRunner Change Capacities Tool

这是一个半自动的小工具，帮助修改《雪地奔驰》的游戏文件。这个小工具可以帮你修改（大多数的）卡车油箱、卡车选装配件（油箱、水箱）、挂车（半挂、全挂，油箱、水箱）容量。
This is a semi-automatic tool that helps modify the game files for "SnowRunner." This tool can help you modify the capacities of (most) truck fuel tanks, truck optional accessories (fuel tanks, water tanks), and trailers (semi-trailers, full trailers, fuel tanks, water tanks).


新建一个Visual Studio项目，导入代码，将initial.pak中的[media]文件夹拷贝到项目文件夹中，并且运行（F5）代码。这将修改[media]文件夹下的对应文件，并删除不需要修改的文件。完成后，将[media]文件夹更新到initial.pak中即可。
Create a new Visual Studio project, import the code, copy the [media] folder in the initial.pak to the project folder, and run (F5) the code. This will modify the corresponding files under the [media] folder and delete the files that do not need to be modified. After completion, update the [media] folder to initial.pak.

path.txt文件内存储的是将要被修改的文件的信息。
其格式为：
类型	相对路径	容量	重量（如果需要）
可以在capacities.xlsx中方便地管理数据，并且在需要的时候拷贝到path.txt中。
类型：
1 – 卡车自带油箱
2 – 维护装置和没有“重量”参数的选装油箱
3 – 有“重量”参数的选装油箱和燃油挂车
4 – 空
5 – 选装水箱和运水挂车
The "path.txt" file stores information about the files that are to be modified.
The format is:
Type	Relative Path	Capacity	Weight (if needed)
Data can be conveniently managed in "capacities.xlsx", and copied into "path.txt" when needed.
Types:
1 – Truck's own fuel tank
2 – Maintenance devices and add-on fuel tanks without a "weight" parameter
3 – Add-on fuel tanks and fuel trailers with a "weight" parameter
4 – Empty
5 – Add-on water tanks and water trailers

车辆的油箱数据尽量基于原型车款调整。个别车辆的数据可能和实际有出入。
选装配件和挂车的容量尽量调节成了（看起来）合理的数值。
柴油的密度按0.82计算。
因为，尤其是运输燃油的容器，容量变大之后变重了。因此虽然可以一次运输更多的液体，但更重的运载量也使得车辆的通过能力大幅下降。因此个人认为这部分的更改对游戏平衡性的破坏不大。
但，有些短板仅为油箱容量的车型，在更改之后会变成“完美”车型，破坏游戏的平衡性。敬请注意。
The fuel tank data of vehicles are adjusted based on the original models. Data for some individual vehicles might differ from the actual specs.
Capacities for add-on equipment and trailers have been adjusted to (what appears to be) reasonable values.
The density of diesel is calculated at 0.82.
As the capacity of containers - especially those transporting fuel - increases, they become heavier. Therefore, although more liquid can be transported at once, the increased load significantly reduces the vehicle's traversal capability. Hence, I believe these changes do not greatly disrupt game balance.
However, some truck models, especially those limited only by fuel tank capacity, could become "perfect" trucks after modification, disrupting the game's balance. Please be aware.

Have fun!
