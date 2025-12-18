# CEOL-Cost-Sorting-Program
This repository contains a CEOL piece database formatted according to specific requirements, along with a C++ program that sorts piece costs based on 26 predefined sorting criteria and generates a .txt file.

CEOL version: v0.56

# CEOL 棋子费用排序程序
排序作者：Richard1211  
CEOL id：richard1211#1654

原始数据来源：夏日  
CEOL id：Aza#8881

原始数据文件：https://docs.qq.com/sheet/DS1J6c3RzT2lTTk1G?tab=1s0dch  
原始数据时间：2023.11.26

当前版本：v0.56  
排序信息：第一个参数是棋子名字，名字后缀的 0/1/2/3 代表等级 0/+/++/+++；第二个参数是棋子类型，Minion 表示轻子，Champion 表示重子；第三个参数是棋子稀有度，Common 表示普通，Rare 表示稀有，Epic 表示史诗，Legendary 表示传奇；第四个参数是棋子所处卡包，Basic 表示基础，Clan 表示军团，Arcane 表示奥术，Forest 表示自然；第五个参数是棋子的费用。

使用方法：本程序直接 clone 仓库到本地后运行代码就可以一键生成 26 个 txt 文件，若将来有新版本你可以直接将代码中的 n 的值改成新的棋子数量，然后按照 56CEOLlib.txt 中的格式添加新的棋子信息即可，再次运行代码即可得到新的结果，当然作者在新版本发布是会实时更新新版本数据的。除此之外如果你有老版本的棋子数据也可以按照格式在数据库中添加然后使用本代码跑出相应版本的 26 个结果，也欢迎大家来给本仓库提供老版本数据，完善所有 CEOL 版本的排序。