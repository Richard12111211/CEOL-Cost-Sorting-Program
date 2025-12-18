#include <bits/stdc++.h>
using namespace std;
#define OF(s) freopen(s".in","r",stdin);freopen(s".out","w",stdout);
#define For1(a) for(register tp i(1),i##sc03(a);i<=i##sc03;++i)
#define For2(i,a) for(register tp i(1),i##sc03(a);i<=i##sc03;++i)
#define For3(i,a,b) for(register tp i(a),i##sc03(b);i<=i##sc03;++i)
#define For4(i,a,b,c) for(register tp i(a),i##sc03(b);i<=i##sc03;i+=(c))
#define FoR1(a) for(register tp i(a);i>=1;--i)
#define FoR2(i,a) for(register tp i(a);i>=1;--i)
#define FoR3(i,a,b) for(register tp i(a),i##sc03(b);i>=i##sc03;--i)
#define FoR4(i,a,b,c) for(register tp i(a),i##sc03(b);i>=i##sc03;i-=(c))
#define OverLoad(a,b,c,d,e,...) e
#define For(...) OverLoad(__VA_ARGS__,For4,For3,For2,For1)(__VA_ARGS__)
#define FoR(...) OverLoad(__VA_ARGS__,FoR4,FoR3,FoR2,FoR1)(__VA_ARGS__)
#define pb emplace_back
#define ep emplace
#define fr first
#define sd second
#define gp make_pair
#define gt make_tuple
#define SIZ(G) tp(G.size())
#define ALL(G) G.begin(),G.end()
using tp=long long;
inline tp read(){tp x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9')ch=='-'?f=-1:0,ch=getchar();while(ch>='0'&&ch<='9')x=(x<<1)+(x<<3)+ch-'0',ch=getchar();return x*f;}
inline bool write(tp x,char ch='\n'){return printf("%lld",x),putchar(ch),true;}
template<class T>inline T Max(T a,T b){return a>b?a:b;}
template<class T>inline T Min(T a,T b){return a<b?a:b;}
template<class T,class Q>inline bool Cmax(T&a,Q b){return a<b?a=b,true:false;}
template<class T,class Q>inline bool Cmin(T&a,Q b){return a>b?a=b,true:false;}
template<class T,class Q>int operator += (vector<T>&G,Q x){ return G.pb(x),0;}
constexpr tp N=1000100;
struct Piece{
    string name,type,rare,pack;
    tp level,cost;
    /**
     *  @brief Print the information of one piece.
     *  @param out The name of this piece, the number at the end of the name is
     *  the level of this piece: 0 means 0, 1 means +, 2 means ++, 3 means +++.
     *  @param type The type of this piece. There will be two types of type, Minons and Champions.
     *  @param rare The rarity of this piece. There will be four types of rarity: Common, Rare, Epic, Legendary.
     *  @param pack The pack this piece belongs to. There will be four types of pack: Basic, Clan, Arcane, Forest.
     *  @param cost The cost of this piece.
     **/
    inline void Print(){
        string out=name+to_string(level);
        cout<<out<<' '<<type<<' '<<rare<<' '<<pack<<' '<<cost<<'\n';
    }
}a[N];
tp n=121;// There are 121 pieces in CEOL v0.56, and each piece has 4 levels.
int main(){
    freopen("56CEOLlib.txt","r",stdin);// This is the data base
    For(n)cin>>a[(i-1)*4+1].name,a[(i-1)*4+2].name=a[(i-1)*4+3].name=a[(i-1)*4+4].name=a[(i-1)*4+1].name;
    For(n)cin>>a[(i-1)*4+1].type,a[(i-1)*4+2].type=a[(i-1)*4+3].type=a[(i-1)*4+4].type=a[(i-1)*4+1].type;
    For(n)cin>>a[(i-1)*4+1].rare,a[(i-1)*4+2].rare=a[(i-1)*4+3].rare=a[(i-1)*4+4].rare=a[(i-1)*4+1].rare;
    For(n)cin>>a[(i-1)*4+1].pack,a[(i-1)*4+2].pack=a[(i-1)*4+3].pack=a[(i-1)*4+4].pack=a[(i-1)*4+1].pack;
    For(n)For(j,4)cin>>a[(i-1)*4+j].cost,a[(i-1)*4+j].level=j-1;
    sort(a+1,a+n*4+1,[&](Piece x,Piece y){return x.cost!=y.cost?x.cost<y.cost:x.name!=y.name?x.name<y.name:x.level<y.level;});
    freopen("A CEOL all Pieces cost sort"".txt","w",stdout);For(n*4)a[i].Print();freopen("CON","w",stdout);
    freopen("B CEOL all Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("C CEOL all Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("D CEOL Common Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Common")a[i].Print();freopen("CON","w",stdout);
    freopen("E CEOL Common Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Common"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("F CEOL Common Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Common"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("G CEOL Rare Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Rare")a[i].Print();freopen("CON","w",stdout);
    freopen("H CEOL Rare Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Rare"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("I CEOL Rare Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Rare"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("J CEOL Epic Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Epic")a[i].Print();freopen("CON","w",stdout);
    freopen("K CEOL Epic Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Epic"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("L CEOL Epic Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Epic"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("M CEOL Legendary Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].rare=="Legendary")a[i].Print();freopen("CON","w",stdout);
    freopen("N CEOL Legendary Minions and Champions cost sort"".txt","w",stdout);cout<<"Minions: "<<'\n';For(n*4)if(a[i].rare=="Legendary"&&a[i].type=="Minion")a[i].Print();cout<<"Champions: "<<'\n';For(n*4)if(a[i].rare=="Legendary"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("O CEOL Basic Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Basic")a[i].Print();freopen("CON","w",stdout);
    freopen("P CEOL Basic Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Basic"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("Q CEOL Basic Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Basic"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("R CEOL Clan Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Clan")a[i].Print();freopen("CON","w",stdout);
    freopen("S CEOL Clan Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Clan"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("T CEOL Clan Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Clan"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("U CEOL Arcane Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Arcane")a[i].Print();freopen("CON","w",stdout);
    freopen("V CEOL Arcane Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Arcane"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("W CEOL Arcane Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Arcane"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    freopen("X CEOL Forest Pieces cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Forest")a[i].Print();freopen("CON","w",stdout);
    freopen("Y CEOL Forest Minions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Forest"&&a[i].type=="Minion")a[i].Print();freopen("CON","w",stdout);
    freopen("Z CEOL Forest Champions cost sort"".txt","w",stdout);For(n*4)if(a[i].pack=="Forest"&&a[i].type=="Champion")a[i].Print();freopen("CON","w",stdout);
    return 0;
}
/*
APPRENTICE
ARCHER
AXEMAN
BANSHEE
BAT
BISHOP
BOMBER
DRYAD
DUELIST
FIREBALL
FROG
FROSTMAGE
GHOST
GUARDIAN
HOPLITE
KNIGHT
MILITIA
PAWN
PENGUIN
POISONMAGE
SHIELDSMAN
SKELETON
SLIME
SPEARMAN
SPIDER
SWORDSMAN
TIGER
WARRIOR
WINDMAGE
ALCHEMIST
ARACHNID
BASILISK
BERSERKER
CRUSADER
DOVE
DRAKE
FENCER
FIREMAGE
FROSTMEPHIT
GIANTSLIME
GNOME
HOSTAGE
HYDROMANCER
LEGIONARY
MAGETOWER
NECROMANCER
NEXUS
PALADIN
PHANTASM
PIKEMAN
PORTAL
PRINCE
PRINCESS
PYROMANCER
RANGER
ROOK
SAMURAI
SNAKE
STONEMAGE
SYLPH
TEMPLAR
THUNDERMAGE
TOAD
WISP
AIRELEMENTAL
ARCHBISHOP
BEACON
BEHEMOTH
BUTTERFLY
CHASTITY
DEMON
DRAGON
EARTHELEMENTAL
GHAST
HARPY
HAUNTEDARMOR
LIFESTONE
MEDUSA
MERCENARY
MINOTAUR
NINJA
NULLMAGE
PATIENCE
PHALANX
QUEEN
REAVER
SALAMANDER
SOULFLARE
SUMMONER
TEMPERANCE
TOMBSTONE
UNDINE
VALKYRIE
WIZARD
ANGEL
ANTIMAGE
AQUARIUS
COMET
ENCHANTRESS
ENVY
FIREELEMENTAL
FORTRESS
GEMINI
GLUTTONY
GRAVITYMAGE
GREED
ILLUSIONIST
LICH
LILITH
LUST
MOONFOX
PHOENIX
PRIDE
ROYALGUARD
SIREN
SOULKEEPER
TAURUS
VAMPIRE
VOIDMAGE
WATERELEMENTAL
WRATH
Minion
Minion
Minion
Champion
Minion
Champion
Minion
Champion
Minion
Minion
Minion
Champion
Minion
Champion
Minion
Champion
Minion
Minion
Minion
Champion
Minion
Minion
Minion
Minion
Minion
Minion
Minion
Champion
Champion
Champion
Champion
Minion
Champion
Champion
Minion
Minion
Champion
Champion
Minion
Champion
Minion
Minion
Champion
Champion
Champion
Champion
Minion
Champion
Minion
Minion
Minion
Champion
Minion
Champion
Champion
Champion
Minion
Minion
Champion
Minion
Minion
Champion
Champion
Champion
Champion
Champion
Minion
Champion
Minion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Minion
Champion
Minion
Champion
Champion
Champion
Champion
Champion
Champion
Minion
Minion
Minion
Champion
Champion
Minion
Minion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Minion
Champion
Champion
Champion
Champion
Champion
Champion
Champion
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Common
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Rare
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Epic
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Legendary
Basic
Forest
Clan
Arcane
Basic
Basic
Arcane
Forest
Basic
Arcane
Basic
Arcane
Basic
Forest
Basic
Basic
Basic
Basic
Basic
Arcane
Basic
Basic
Basic
Clan
Forest
Clan
Forest
Clan
Arcane
Basic
Basic
Forest
Clan
Basic
Basic
Forest
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Clan
Basic
Basic
Basic
Clan
Arcane
Basic
Arcane
Basic
Basic
Arcane
Forest
Basic
Clan
Basic
Basic
Basic
Basic
Arcane
Basic
Forest
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Forest
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Clan
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Arcane
Basic
Clan
Basic
Basic
Forest
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Basic
Arcane
Basic
Basic
Basic
Basic
Basic
0	2	5	9
0	1	2	3
1	2	3	4
8	9	10	11
0	1	3	5
10	12	13	14
1	2	3	4
5	6	7	8
0	1	2	4
2	3	4	5
0	1	2	3
5	7	10	14
3	4	6	7
6	7	8	9
0	1	3	6
6	8	10	11
1	1	1	1
0	1	2	3
0	1	2	4
5	8	10	13
0	1	2	3
2	3	4	6
1	2	4	5
1	2	5	6
0	1	2	3
1	2	4	5
1	3	5	7
7	8	10	11
7	8	9	10
8	9	10	15
8	10	12	14
2	3	4	5
8	9	11	14
8	12	16	20
0	1	2	3
4	5	6	7
4	7	10	13
5	6	8	10
2	3	4	5
5	7	9	12
3	4	5	8
0	1	2	3
5	8	9	10
9	11	13	14
9	10	11	12
7	10	12	14
0	2	4	6
9	12	14	15
3	4	5	6
2	4	6	8
0	1	2	3
9	10	12	14
0	0	0	0
10	11	13	16
6	8	13	16
12	13	14	15
3	4	5	6
0	1	2	4
5	9	12	15
0	1	3	5
2	4	6	7
4	7	9	10
4	6	9	12
4	5	6	7
7	9	11	13
15	18	21	24
2	3	4	5
9	11	16	22
0	2	3	5
5	8	10	12
10	12	16	18
15	18	21	24
6	8	11	13
8	9	10	11
12	13	14	16
8	11	13	15
4	5	6	7
9	11	13	17
1	2	4	6
12	14	15	18
13	14	16	18
4	7	9	12
7	10	12	14
13	16	18	21
21	24	28	30
3	4	5	6
0	3	4	5
0	2	3	4
4	5	6	7
10	12	14	16
0	2	4	6
0	1	2	4
8	10	12	14
13	14	15	16
15	17	19	24
7	10	12	13
6	9	12	16
6	7	8	9
4	7	10	12
4	6	8	10
15	18	20	21
16	21	25	28
15	16	17	18
5	6	9	12
4	5	8	9
3	2	1	0
7	10	12	14
4	6	8	10
4	5	6	8
5	8	9	10
12	14	16	20
14	17	20	24
6	10	14	18
2	3	5	6
4	6	7	9
11	14	20	22
5	6	8	10
16	19	22	25
6	9	14	16
6	8	12	15
6	8	9	10
*/