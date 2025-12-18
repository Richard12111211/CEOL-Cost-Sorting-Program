# CEOL-Cost-Sorting-Program
This repository contains a CEOL piece database formatted according to specific requirements, along with a C++ program that sorts piece costs based on 26 predefined sorting criteria and generates a .txt file.

Sorted by Author: Richard1211
CEOL ID: richard1211#1654

Original Data Source: Summer
CEOL ID: Aza#8881

Original Data File: https://docs.qq.com/sheet/DS1J6c3RzT2lTTk1G?tab=1s0dch
Original Data Date: 2023.11.26

Current Version: v0.56
Sorting Information: The first parameter is the unit name, with suffixes 0/1/2/3 representing tiers 0/+/++/+++; the second parameter is the unit type, where Minion denotes light units and Champion denotes heavy units; The third parameter indicates rarity: Common, Rare, Epic, Legendary; The fourth parameter indicates card pack: Basic, Clan, Arcane, Forest; The fifth parameter indicates mana cost.

Usage: You can directly download the 26 text files from the `The Result` folder. If you know C++, have a code execution environment, and wish to modify the program or run it on different versions to obtain new results, please refer to the following instructions.  
After cloning this repository locally, if a new version is released in the future, you can simply modify the value of `n` in the code file `56CEOLsort.cpp` to match the new number of pieces. Then, add new piece information following the format specified in `56CEOLlib.txt`. Rerunning the code will generate the new results. Of course, the author will update the data in real-time when new versions are released. Additionally, if you possess older piece data, you can add it to the database following the format and run this code to generate the corresponding 26 results for that version. Contributions of older data to this repository are welcome to complete the sorting for all CEOL versions.

# CEOL 棋子费用排序程序
排序作者：Richard1211  
CEOL ID：richard1211#1654

原始数据来源：夏日  
CEOL ID：Aza#8881

原始数据文件：https://docs.qq.com/sheet/DS1J6c3RzT2lTTk1G?tab=1s0dch  
原始数据时间：2023.11.26

当前版本：v0.56  
排序信息：第一个参数是棋子名字，名字后缀的 0/1/2/3 代表等级 0/+/++/+++；第二个参数是棋子类型，Minion 表示轻子，Champion 表示重子；第三个参数是棋子稀有度，Common 表示普通，Rare 表示稀有，Epic 表示史诗，Legendary 表示传奇；第四个参数是棋子所处卡包，Basic 表示基础，Clan 表示军团，Arcane 表示奥术，Forest 表示自然；第五个参数是棋子的费用。

使用方法：你可以直接从 `The Result` 文件夹中下载 26 种 txt，如果你会 C++ 并且有运行代码的环境并想要修改程序或在不同版本运行程序得到新的结果，请看下文。  
本程序直接 clone 仓库到本地后，若将来有新版本你可以直接将代码 `56CEOLsort.cpp` 中的 `n` 的值改成新的棋子数量，然后按照 `56CEOLlib.txt` 中的格式添加新的棋子信息即可，再次运行代码即可得到新的结果，当然作者在新版本发布是会实时更新新版本数据的。除此之外如果你有老版本的棋子数据也可以按照格式在数据库中添加然后使用本代码跑出相应版本的 26 个结果，也欢迎大家来给本仓库提供老版本数据，完善所有 CEOL 版本的排序。