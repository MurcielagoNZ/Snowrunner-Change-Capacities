# 《雪地奔驰》容量修改工具 SnowRunner Change Capacities Tool

<br>这是一个半自动的小工具，帮助修改《雪地奔驰》的游戏文件。这个小工具可以帮你修改（大多数的）卡车油箱、卡车选装配件（油箱、水箱）、挂车（半挂、全挂，油箱、水箱）容量。</br>
This is a semi-automatic tool that helps modify the game files for "SnowRunner." This tool can help you modify the capacities of (most) truck fuel tanks, truck optional accessories (fuel tanks, water tanks), and trailers (semi-trailers, full trailers, fuel tanks, water tanks).<br>
<br>
将initial.pak中的[media]文件夹拷贝到项目文件夹中，并且运行（F5）代码，或者将编译好的程序和解压出来的[media]文件夹放在同一目录下运行。这将修改[media]文件夹下的对应文件。完成后，将[media]文件夹更新到initial.pak中即可。<br>
Copy the [media] folder in the initial.pak to the project folder, and run (F5) the code. Or just use the exe, put the exe and unziped [media] folder into same directory. It will modify the corresponding files under the [media] folder. After completion, update the [media] folder to initial.pak.<br>
<br>
path.txt文件内存储的是将要被修改的文件的信息。<br>
其格式为：<br>
> 类型	相对路径	容量	重量（如果需要）
<br>
可以在capacities.xlsx中方便地管理数据，并且在需要的时候拷贝到path.txt中。<br>
类型：<br>
1 - 卡车自带油箱<br>
2 - 维护装置和没有“重量”参数的选装油箱<br>
3 - 有“重量”参数的选装油箱和燃油挂车<br>
4 - 空<br>
5 - 选装水箱和运水挂车<br>
<br>
The "path.txt" file stores information about the files that are to be modified.<br>
The format is:<br>

> Type	Relative-Path	Capacity	Weight(if needed)
<br>
Data can be conveniently managed in "capacities.xlsx", and copied into "path.txt" when needed.<br>
Types:<br>
1 - Truck's own fuel tank<br>
2 - Maintenance devices and add-on fuel tanks without a "weight" parameter<br>
3 - Add-on fuel tanks and fuel trailers with a "weight" parameter<br>
4 - Empty<br>
5 - Add-on water tanks and water trailers<br>
<br>

* 车辆的油箱数据尽量基于原型车款调整。个别车辆的数据可能和实际有出入。<br>
* 选装配件和挂车的容量尽量调节成了（看起来）合理的数值。<br>
* 柴油的密度按0.82计算。<br>
* 因为，尤其是运输燃油的容器，容量变大之后变重了。因此虽然可以一次运输更多的液体，但更重的运载量也使得车辆的通过能力大幅下降。因此个人认为这部分的更改对游戏平衡性的破坏不大。<br>
* 但，有些短板仅为油箱容量的车型，在更改之后会变成“完美”车型，破坏游戏的平衡性。敬请注意。<br>
* The fuel tank data of vehicles are adjusted based on the original models. Data for some individual vehicles might differ from the actual specs.<br>
* Capacities for add-on equipment and trailers have been adjusted to (what appears to be) reasonable values.<br>
* The density of diesel is calculated at 0.82.<br>
* As the capacity of containers - especially those transporting fuel - increases, they become heavier. Therefore, although more liquid can be transported at once, the increased load significantly reduces the vehicle's traversal capability. Hence, I believe these changes do not greatly disrupt game balance.<br>
* However, some truck models, especially those limited only by fuel tank capacity, could become "perfect" trucks after modification, disrupting the game's balance. Please be aware.<br>
<br>
Have fun!
<br>
<br>
<br>

## 《雪地奔驰》卡车数据 SnowRunner Trucks Data

| type | filePath | fileName | newCapacity | newLiquidWeight | oldCapa | oldLiquidWeight | ....................truckName.................... | truckType | awd | diffLock | country | price | unlockByRank |
| ---- | ---- | -------- | ------- | --------- | ------- | --------- | ---- | --------- | --- | -------- | ------- | ----- | -------- | 
| 1 | [media]\_dlc\dlc_1_1\classes\trucks\ford_f750.xml | ford_f750.xml | 265 |  | 140 |  | Ford F 750 (DLC) | Scout | Uninstalled | Always | US,NE | 43600 | -1 |
| 1 | [media]\_dlc\dlc_1_1\classes\trucks\tuz_16_actaeon.xml | tuz_16_actaeon.xml | 210 |  | 110 |  | TUZ 16 "Actaeon" (DLC) | Offroad | Switchable | Installed | RU,CAS | 54400 | -1 |
| 1 | [media]\_dlc\dlc_1_2\classes\trucks\chevy_apache.xml | chevy_apache.xml | 95 |  | 95 |  | Chevrolet Apache (DLC) | Scout | Switchable | Always | US,NE | 29300 | 1 |
| 1 | [media]\_dlc\dlc_1_2\classes\trucks\tuz_108_warthog.xml | tuz_108_warthog.xml | 210 |  | 200 |  | TUZ 108 "Warthog" (DLC) | Offroad | Switchable | Installed | RU,CAS | 19900 | -1 |
| 1 | [media]\_dlc\dlc_10\classes\trucks\kenworth_963.xml | kenworth_963.xml | 794 |  | 510 |  | Kenworth 963 (DLC) | Heavy | Switchable | Always | US,NE | 121200 | -1 |
| 1 | [media]\_dlc\dlc_10\classes\trucks\kenworth_w990.xml | kenworth_w990.xml | 757 |  | 380 |  | Kenworth W990 (DLC) | Highway | None | Always | US,NE | 100800 | 1 |
| 1 | [media]\_dlc\dlc_10\classes\trucks\mack_defense_m917.xml | mack_defense_m917.xml | 350 |  | 350 |  | Mack Defense M917 (DLC) | Offroad | Always | Installed | US,NE | 95500 | -1 |
| 1 | [media]\_dlc\dlc_11\classes\trucks\burlak_6x6.xml | burlak_6x6.xml | 400 |  | 280 |  | Burlak 6x6 (DLC) | Scout | Switchable | Installed | RU,CAS,NE | 97500 | -1 |
| 1 | [media]\_dlc\dlc_11\classes\trucks\neo_falcon_2000.xml | neo_falcon_2000.xml | 90 |  | 90 |  | Neo Falcon 2000 (DLC) | Scout | Switchable | Installed | US,NE | 2600 | -1 |
| 1 | [media]\_dlc\dlc_12_5\classes\trucks\azov_670963n.xml | azov_670963n.xml | 500 |  | 350 |  | Azov 67096 "Atom" (DLC) | Heavy | Always | Always | RU,CAS | 137850 | 1 |
| 1 | [media]\_dlc\dlc_12\classes\trucks\femm_37at.xml | femm_37at.xml | 600 |  | 340 |  | FEMM 37-AT (DLC) | Heavy | Always | Installed | RU,CAS | 181300 | -1 |
| 1 | [media]\_dlc\dlc_12\classes\trucks\mtb_8106.xml | mtb_8106.xml | 80 |  | 80 |  | MTB 8106 (Rock Grinder) (DLC) | Scout | Always | Installed | US,NE | 4100 | -1 |
| 1 | [media]\_dlc\dlc_2_1\classes\trucks\cat_770g.xml | cat_770g.xml | 530 |  | 530 |  | Caterpillar 770G (DLC) | Heavy | None | Always | US,NE | 143500 | -1 |
| 1 | [media]\_dlc\dlc_2_1\classes\trucks\cat_th357.xml | cat_th357.xml | 148 |  | 110 |  | Caterpillar TH357 (DLC) | Scout | Always | Always | US,NE | 85200 | -1 |
| 1 | [media]\_dlc\dlc_2_1\classes\trucks\western_star_49x.xml | western_star_49x.xml | 454 |  | 290 |  | Western Star 49X (DLC) | Heavy | Uninstalled | Installed | US,NE | 121500 | 1 |
| 1 | [media]\_dlc\dlc_2_2\classes\trucks\krs_58_bandit.xml | krs_58_bandit.xml | 500 |  | 150 |  | KRS 58 "Bandit" (DLC) | Offroad | Always | Always | RU,CAS | 98500 | 1 |
| 1 | [media]\_dlc\dlc_3\classes\trucks\boar_45318.xml | boar_45318.xml | 1220 |  | 300 |  | BOAR 45318 (DLC) | Heavy | Switchable | Installed | RU,CAS | 155800 | 1 |
| 1 | [media]\_dlc\dlc_3\classes\trucks\pacific_p512.xml | pacific_p512.xml | 600 |  | 200 |  | Pacific P512 PF (DLC) | Heavy | None | Installed | US,NE | 108300 | -1 |
| 1 | [media]\_dlc\dlc_3\classes\trucks\paystar_5600ts.xml | paystar_5600ts.xml | 379 |  | 280 |  | International Paystar 5600TS (DLC) | Heavy | Uninstalled | Installed | US,NE | 102600 | -1 |
| 1 | [media]\_dlc\dlc_4_1\classes\trucks\cat_ct681.xml | cat_ct681.xml | 454 |  | 260 |  | Caterpillar CT681 (DLC) | Heavy | Uninstalled | Installed | US,NE | 59800 | 1 |
| 1 | [media]\_dlc\dlc_4_1\classes\trucks\international_hx_520.xml | international_hx_520.xml | 454 |  | 280 |  | International HX 520 (DLC) | Heavy | Uninstalled | Installed | US,NE | 151900 | 1 |
| 1 | [media]\_dlc\dlc_4\classes\trucks\khan_317_sentinel.xml | khan_317_sentinel.xml | 80 |  | 80 |  | KHAN 317 Sentinel (DLC) | Scout | Switchable | Uninstalled | RU,CAS | 28200 | 1 |
| 1 | [media]\_dlc\dlc_4\classes\trucks\tatra_805.xml | tatra_805.xml | 190 |  | 190 |  | Tatra 805 (DLC) | Offroad | Switchable | Installed | RU,CAS,NE | 22500 | 1 |
| 1 | [media]\_dlc\dlc_4\classes\trucks\tatra_t813.xml | tatra_t813.xml | 520 |  | 380 |  | Tatra T813 (DLC) | Heavy | Switchable | Installed | RU,CAS,NE | 177100 | 1 |
| 1 | [media]\_dlc\dlc_4\classes\trucks\zikz_605r.xml | zikz_605r.xml | 840 |  | 380 |  | ZiKZ 605R (DLC) | Heavy | Always | Always | RU,CAS | 165300 | -1 |
| 1 | [media]\_dlc\dlc_5\classes\trucks\jeep_cj7_renegade.xml | jeep_cj7_renegade.xml | 76 |  | 75 |  | Jeep CJ7 Renegade (DLC) | Scout | Switchable | Uninstalled | US,NE | 2500 | 1 |
| 1 | [media]\_dlc\dlc_5\classes\trucks\jeep_wrangler.xml | jeep_wrangler.xml | 80 |  | 80 |  | Jeep Wrangler (DLC) | Scout | Switchable | Uninstalled | US,NE | 2900 | 1 |
| 1 | [media]\_dlc\dlc_5\classes\trucks\tatra_force_t815_7.xml | tatra_force_t815_7.xml | 460 |  | 380 |  | Tatra FORCE T815-7 (DLC) | Heavy | Switchable | Installed | RU,CAS,NE | 182600 | -1 |
| 1 | [media]\_dlc\dlc_5\classes\trucks\tatra_phoenix.xml | tatra_phoenix.xml | 345 |  | 345 |  | Tatra PHOENIX (DLC) | Offroad | Switchable | Installed | RU,CAS,NE | 72800 | -1 |
| 1 | [media]\_dlc\dlc_6\classes\trucks\ank_mk38_ht.xml | ank_mk38_ht.xml | 613 |  | 200 |  | ANK MK38 CIVILIAN | Offroad | Always | Always | US,NE | 51100 | 1 |
| 1 | [media]\_dlc\dlc_6\classes\trucks\aramatsu_forester.xml | aramatsu_forester.xml | 420 |  | 340 |  | Aramatsu Forester (DLC) | Heavy | Always | Installed | US,NE | 3500 | -1 |
| 1 | [media]\_dlc\dlc_6\classes\trucks\land_rover_defender_110.xml | land_rover_defender_110.xml | 80 |  | 80 |  | Land Rover Defender 110 (DLC) | Scout | Switchable | Uninstalled | US,NE | 2500 | 1 |
| 1 | [media]\_dlc\dlc_6\classes\trucks\land_rover_defender_90.xml | land_rover_defender_90.xml | 90 |  | 80 |  | Land Rover Defender 90 (DLC) | Scout | Switchable | Uninstalled | US,NE | 2500 | 1 |
| 1 | [media]\_dlc\dlc_6\classes\trucks\step_3364_crocodile.xml | step_3364_crocodile.xml | 150 |  | 150 |  | Step 33-64 "Crocodile" (DLC) | Offroad | Always | Always | RU,CAS | 63000 | -1 |
| 1 | [media]\_dlc\dlc_6\classes\trucks\tayga_6455b.xml | tayga_6455b.xml | 330 |  | 330 |  | Tayga 6455B (DLC) | Offroad | Always | Always | RU,CAS | 70200 | 1 |
| 1 | [media]\_dlc\dlc_7\classes\trucks\azov_43_191_sprinter.xml | azov_43_191_sprinter.xml | 1000 |  | 350 |  | Azov 43-191 "Sprinter" (DLC) | Offroad | Always | Always | RU,CAS | 58500 | -1 |
| 1 | [media]\_dlc\dlc_7\classes\trucks\gor_by4.xml | gor_by4.xml | 50 |  | 50 |  | Gor BY-4 (DLC) | Scout | Switchable | Installed | RU,CAS | 3600 | -1 |
| 1 | [media]\_dlc\dlc_7\classes\trucks\western_star_57x.xml | western_star_57x.xml | 1134 |  | 290 |  | Western Star 57X (DLC) | Highway | Uninstalled | Uninstalled | US,NE | 115700 | 1 |
| 1 | [media]\_dlc\dlc_8\classes\trucks\kirovets_k700.xml | kirovets_k700.xml | 450 |  | 340 |  | Kirovets K-700 (DLC) | Heavy | Always | Always | RU,CAS | 126100 | -1 |
| 1 | [media]\_dlc\dlc_8\classes\trucks\kirovets_k7m.xml | kirovets_k7m.xml | 800 |  | 340 |  | Kirovets K-7M (DLC) | Heavy | Always | Always | RU,CAS | 172300 | -1 |
| 1 | [media]\_dlc\dlc_8\classes\trucks\rezvani_hercules_6x6.xml | rezvani_hercules_6x6.xml | 318 |  | 80 |  | Rezvani Hercules 6x6 (DLC) | Scout | Switchable | Always | US,NE | 25800 | 1 |
| 1 | [media]\_dlc\dlc_8\classes\trucks\step_39331_pike.xml | step_39331_pike.xml | 340 |  | 250 |  | Step 39331 "Pike" (DLC) | Offroad | Always | Always | RU,CAS | 12000 | 1 |
| 1 | [media]\_dlc\dlc_8\classes\trucks\western_star_nf1424.xml | western_star_nf1424.xml | 1134 |  | 290 |  | Western Star 47X NF 1424 (DLC) | Heavy | Uninstalled | Uninstalled | US,NE | 113500 | 1 |
| 1 | [media]\_dlc\dlc_8\classes\trucks\western_star_nf1430.xml | western_star_nf1430.xml | 567 |  | 290 |  | Western Star 47X NF 1430 (DLC) | Heavy | Uninstalled | Installed | US,NE | 120600 | 1 |
| 1 | [media]\_dlc\dlc_9\classes\trucks\derry_special_15c177.xml | derry_special_15c177.xml | 587 |  | 380 |  | Derry Special 15C-177 (DLC) | Heavy | Always | Installed | US,NE | 150000 | -1 |
| 1 | [media]\_dlc\dlc_9\classes\trucks\zikz_566a.xml | zikz_566a.xml | 450 |  | 150 |  | ZiKZ 566A (DLC) | Offroad | Always | Installed | RU,CAS | 80900 | -1 |
| 1 | [media]\_dlc\dlc_9\classes\trucks\zikz_612h_mastodont.xml | zikz_612h_mastodont.xml | 840 |  | 500 |  | ZiKZ 612H (DLC) | Heavy | Always | Always | RU,CAS | 191300 | 1 |
| 1 | [media]\_dlc\DLC_trial_6\classes\trucks\gmc_8000.xml | gmc_8000.xml | 663 |  | 285 |  | GMC Brigadier 8000 (DLC) | Heavy | Uninstalled | None | US,NE | 90000 | 1 |
| 1 | [media]\classes\trucks\ank_mk38.xml | ank_mk38.xml | 613 |  | 200 |  | ANK MK38 | Offroad | Always | Always | US,NE | 51100 | -1 |
| 1 | [media]\classes\trucks\azov_4220_antarctic.xml | azov_4220_antarctic.xml | 700 |  | 340 |  | Azov 42-20 Antarctic | Heavy | Always | Installed | RU,CAS | 111600 | 26 |
| 1 | [media]\classes\trucks\azov_5319.xml | azov_5319.xml | 700 |  | 200 |  | Azov 5319 | Offroad | Always | Always | RU,CAS | 64600 | 14 |
| 1 | [media]\classes\trucks\azov_64131.xml | azov_64131.xml | 500 |  | 350 |  | Azov 64131 | Offroad | Always | Always | RU,CAS | 69000 | 1 |
| 1 | [media]\classes\trucks\azov_73210.xml | azov_73210.xml | 420 |  | 350 |  | Azov 73210 | Heavy | Always | Always | RU,CAS | 66000 | 20 |
| 1 | [media]\classes\trucks\cat_745c.xml | cat_745c.xml | 550 |  | 340 |  | Caterpillar 745C | Heavy | Switchable | Uninstalled | US,NE | 100500 | -1 |
| 1 | [media]\classes\trucks\cat_ct680.xml | cat_ct680.xml | 454 |  | 280 |  | Caterpillar CT680 | Heavy | Uninstalled | Installed | US,NE | 37000 | 12 |
| 1 | [media]\classes\trucks\chevrolet_ck1500.xml | chevrolet_ck1500.xml | 95 |  | 80 |  | Chevrolet CK1500 | Scout | Switchable | Uninstalled | US,NE | 3000 | 1 |
| 1 | [media]\classes\trucks\chevrolet_kodiakc70.xml | chevrolet_kodiakc70.xml | 379 |  | 200 |  | Chevrolet Kodiak C70 | Heavy | Uninstalled | Installed | US,NE | 19500 | 1 |
| 1 | [media]\classes\trucks\dan_96320.xml | dan_96320.xml | 800 |  | 350 |  | DAN 96320 | Heavy | Always | Always | RU,CAS | 106800 | -1 |
| 1 | [media]\classes\trucks\derry_longhorn_3194.xml | derry_longhorn_3194.xml | 757 |  | 370 |  | Derry Longhorn 3194 | Heavy | Always | Always | US,NE | 110700 | -1 |
| 1 | [media]\classes\trucks\derry_longhorn_4520.xml | derry_longhorn_4520.xml | 974 |  | 400 |  | Derry Longhorn 4520 | Heavy | Switchable | Installed | US,NE | 125500 | 24 |
| 1 | [media]\classes\trucks\don_71.xml | don_71.xml | 42 |  | 42 |  | DON 71 | Scout | Switchable | Installed | RU,CAS | 3600 | 1 |
| 1 | [media]\classes\trucks\ford_clt9000.xml | ford_clt9000.xml | 1135 |  | 280 |  | Ford CLT9000 | Highway | None | None | US,NE | 26300 | 1 |
| 1 | [media]\classes\trucks\freightliner_114sd.xml | freightliner_114sd.xml | 454 |  | 300 |  | Freightliner 114SD | Offroad | Uninstalled | Installed | US,NE | 76600 | 20 |
| 1 | [media]\classes\trucks\freightliner_m916a1.xml | freightliner_m916a1.xml | 379 |  | 200 |  | Freightliner M916A1 | Offroad | Switchable | Always | US,NE | 74200 | 17 |
| 1 | [media]\classes\trucks\gmc_9500.xml | gmc_9500.xml | 756 |  | 240 |  | GMC MH9500 | Highway | Uninstalled | None | US,NE | 10600 | -1 |
| 1 | [media]\classes\trucks\hummer_h2.xml | hummer_h2.xml | 121 |  | 80 |  | Hummer H2 | Scout | Switchable | Uninstalled | US,NE | 5100 | -1 |
| 1 | [media]\classes\trucks\international_fleetstar_f2070a.xml | international_fleetstar_f2070a.xml | 379 |  | 240 |  | International Fleetstar F2070A | Heavy | Uninstalled | Installed | US,NE | 13800 | 1 |
| 1 | [media]\classes\trucks\international_loadstar_1700.xml | international_loadstar_1700.xml | 379 |  | 130 |  | International Loadstar 1700 | Scout | Always | Always | US,NE | 28200 | 1 |
| 1 | [media]\classes\trucks\international_paystar_5070.xml | international_paystar_5070.xml | 240 |  | 240 |  | International Paystar 5070 | Offroad | Switchable | Installed | US,NE | 63400 | 1 |
| 1 | [media]\classes\trucks\international_scout_800.xml | international_scout_800.xml | 79 |  | 72 |  | International Scout 800 | Scout | Switchable | Always | US,NE | 4800 | -1 |
| 1 | [media]\classes\trucks\international_transtar_4070a.xml | international_transtar_4070a.xml | 454 |  | 265 |  | International Transtar 4070A | Highway | None | None | US,NE | 17900 | 6 |
| 1 | [media]\classes\trucks\khan_39_marshall.xml | khan_39_marshall.xml | 78 |  | 40 |  | KHAN 39 Marshall (DLC) | Scout | Always | Installed | RU,CAS | 2700 | 1 |
| 1 | [media]\classes\trucks\khan_lo4f.xml | khan_lo4f.xml | 80 |  | 80 |  | KHAN Lo4F | Scout | Always | Always | RU,CAS | 3400 | 1 |
| 1 | [media]\classes\trucks\kolob_74760.xml | kolob_74760.xml | 1590 |  | 380 |  | KOLOB 74760 | Heavy | Always | Always | RU,CAS | 107700 | 22 |
| 1 | [media]\classes\trucks\kolob_74941.xml | kolob_74941.xml | 1210 |  | 340 |  | KOLOB 74941 | Heavy | Switchable | Installed | RU,CAS | 92300 | 1 |
| 1 | [media]\classes\trucks\navistar_5000mv.xml | navistar_5000mv.xml | 530 |  | 340 |  | Navistar 5000-MV (PRE) | Heavy | Always | Installed | US,NE | 113600 | 1 |
| 1 | [media]\classes\trucks\pacific_p12w.xml | pacific_p12w.xml | 1364 |  | 350 |  | Pacific P12 | Heavy | Switchable | Always | US,NE | 104400 | 1 |
| 1 | [media]\classes\trucks\pacific_p16.xml | pacific_p16.xml | 800 |  | 300 |  | Pacific P16 | Heavy | None | Always | US,NE | 116000 | -1 |
| 1 | [media]\classes\trucks\royal_bm17.xml | royal_bm17.xml | 817 |  | 280 |  | Royal BM17 | Offroad | Switchable | Installed | US,NE | 104500 | -1 |
| 1 | [media]\classes\trucks\step_310e.xml | step_310e.xml | 650 |  | 220 |  | Step 310E | Offroad | Switchable | Installed | RU,CAS | 75500 | -1 |
| 1 | [media]\classes\trucks\tayga_6436.xml | tayga_6436.xml | 500 |  | 330 |  | Tayga 6436 | Offroad | Always | Always | RU,CAS | 57100 | -1 |
| 1 | [media]\classes\trucks\tuz_166.xml | tuz_166.xml | 75 |  | 60 |  | TUZ 166 | Scout | Always | Always | RU,CAS | 7200 | -1 |
| 1 | [media]\classes\trucks\tuz_420_tatarin.xml | tuz_420_tatarin.xml | 300 |  | 300 |  | TUZ 420 "Tatarin" | Scout | Always | Always | RU,CAS | 106700 | -1 |
| 1 | [media]\classes\trucks\voron_ae4380.xml | voron_ae4380.xml | 300 |  | 250 |  | Voron AE-4380 | Offroad | Always | Always | RU,CAS | 64900 | 1 |
| 1 | [media]\classes\trucks\voron_d53233.xml | voron_d53233.xml | 360 |  | 270 |  | Voron D-53233 | Offroad | Always | Always | RU,CAS | 62600 | 1 |
| 1 | [media]\classes\trucks\voron_grad.xml | voron_grad.xml | 450 |  | 330 |  | Voron Grad | Offroad | Switchable | Installed | RU,CAS | 65700 | 18 |
| 1 | [media]\classes\trucks\ws_4964_white.xml | ws_4964_white.xml | 568 |  | 300 |  | White Western Star 4964 | Heavy | Uninstalled | Installed | US,NE | 32200 | -1 |
| 1 | [media]\classes\trucks\ws_6900xd_twin.xml | ws_6900xd_twin.xml | 1514 |  | 360 |  | Western Star 6900 TwinSteer | Heavy | Uninstalled | Installed | US,NE | 90300 | 1 |
| 1 | [media]\classes\trucks\yar_87.xml | yar_87.xml | 110 |  | 110 |  | YAR 87 | Scout | Switchable | Always | RU,CAS | 15100 | 10 |
| 1 | [media]\classes\trucks\zikz_5368.xml | zikz_5368.xml | 200 |  | 190 |  | ZiKZ 5368 | Offroad | Switchable | Installed | RU,CAS | 17800 | 1 |
| 1 |  |  |  |  |  |  | AAC-580W (DLC) | Scout |  |  |  |  |  |
| 1 |  |  |  |  |  |  | PLAD 450 (DLC) | Heavy |  |  |  |  |  |
| 2 | [media]\_dlc\dlc_10\classes\trucks\addons\frame_addon_maintainer_big_kenworth_963.xml |  | 20000 |  | 2000 |  |  |  |  |  |  | 6800 | 1 |
| 2 | [media]\_dlc\dlc_2_1\classes\trucks\addons\cat_770g_tank.xml |  | 20000 |  | 2000 |  |  |  |  |  |  | 8500 | 13 |
| 2 | [media]\classes\trucks\addons\cat_745c_fuel_tank.xml |  | 16000 |  | 1600 |  |  |  |  |  |  | 8500 | 13 |
| 2 | [media]\classes\trucks\addons\frame_addon_maintainer.xml |  | 6000 |  | 1400 |  |  |  |  |  |  | 5300 | 1 |
| 2 | [media]\classes\trucks\addons\frame_addon_maintainer_big.xml |  | 7000 |  | 2000 |  |  |  |  |  |  | 6800 | 1 |
| 2 | [media]\classes\trucks\trailers\trailer_addon_maintainer.xml |  | 8000 |  | 2000 |  |  |  |  |  |  | 7500 | 1 |
| 3 | [media]\_dlc\dlc_1_1\classes\trucks\addons\frame_addon_tank_small.xml |  | 2000 | 1640 | 900 | 4000 |  |  |  |  |  | 4200 | 4 |
| 3 | [media]\_dlc\dlc_1_2\classes\trucks\addons\frame_addon_tank_small_short.xml |  | 1200 | 984 | 600 | 3000 |  |  |  |  |  | 4200 | 4 |
| 3 | [media]\_dlc\dlc_3\classes\trucks\addons\frame_addon_tank_long.xml |  | 16000 | 13120 | 2800 | 18000 |  |  |  |  |  | 6600 | 10 |
| 3 | [media]\_dlc\dlc_4\classes\trucks\addons\frame_tank_zikz_605r.xml |  | 18000 | 14760 | 1800 | 12000 |  |  |  |  |  | 5300 | 4 |
| 3 | [media]\_dlc\dlc_4\classes\trucks\addons\tatra_805_tank.xml |  | 9000 | 7380 | 900 | 4000 |  |  |  |  |  | 5300 | 1 |
| 3 | [media]\_dlc\dlc_5\classes\trucks\addons\tatra_frame_addon_tank.xml |  | 15500 | 12710 | 2000 | 12000 |  |  |  |  |  | 5300 | 4 |
| 3 | [media]\_dlc\dlc_6\classes\trucks\addons\step_3364_crocodile_tank.xml |  | 8000 | 6560 | 900 | 4000 |  |  |  |  |  | 4200 | 4 |
| 3 | [media]\_dlc\dlc_9\classes\trucks\zikz_612h_mastodont_tuning\frame_addon_tank_zikz_612h_mastodon.xml |  | 20000 | 16400 | 1800 | 12000 |  |  |  |  |  | 5300 | 4 |
| 3 | [media]\classes\trucks\addons\frame_addon_tank.xml |  | 18000 | 14760 | 1800 | 12000 |  |  |  |  |  | 5300 | 4 |
| 3 | [media]\classes\trucks\trailers\scout_trailer_oiltank.xml |  | 900 | 738 | 900 | 900 |  |  |  |  |  | 3800 | 1 |
| 3 | [media]\classes\trucks\trailers\semitrailer_heavy_oiltank.xml |  | 42000 | 34440 | 5000 | 5000 |  |  |  |  |  | -1 | 1 |
| 3 | [media]\classes\trucks\trailers\semitrailer_oiltank.xml |  | 36000 | 29520 | 3700 | 3700 |  |  |  |  |  | 6000 | 1 |
| 3 | [media]\classes\trucks\trailers\trailer_oiltank.xml |  | 20000 | 16400 | 2000 | 3700 |  |  |  |  |  | 4900 | 1 |
| 5 | [media]\_dlc\dlc_9\classes\trucks\addons\frame_addon_watertank.xml |  | 18000 | 18000 | 1800 | 1800 |  |  |  |  |  | 5300 | 4 |
| 5 | [media]\_dlc\dlc_9\classes\trucks\trailers\semitrailer_watertank.xml |  | 36000 | 36000 | 3700 | 3700 |  |  |  |  |  | 6000 | 1 |
| 5 | [media]\_dlc\dlc_9\classes\trucks\trailers\trailer_watertank.xml |  | 20000 | 20000 | 2000 | 2000 |  |  |  |  |  | 4900 | 1 |
| 5 | [media]\_dlc\dlc_9\classes\trucks\zikz_612h_mastodont_tuning\zikz_612h_mastodont_watertank.xml |  | 25000 | 25000 | 2500 | 2500 |  |  |  |  |  | 5600 | 1 |
