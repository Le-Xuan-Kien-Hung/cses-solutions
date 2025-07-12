// D:\Sublime Text\Packages\User
#pragma GCC optimize("O2")
//~ while (clock()<=69*CLOCKS_PER_SEC)
//~ #pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("O3")
//~ #pragma GCC target ("avx2")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")

// 有可能或不可能 - 油漆的決心 
/*
我们之间有太多回忆
可不可以 和你在一起
爱上了你 没什么道理
*/ 
// =================================================================================================================
#include<bits/stdc++.h>
#define ll long long 
#define str string
#define pb push_back
#define fir first
#define sec second
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ford(i,r,l) for (int (i) = (int)(r) ; i >= l ; --i)
#define FOR(i,a,b) for(int (i)=(a) ; i<=(b) ; i++)
#define qery ll q ; cin>>q; while(q--)
#define TIME (1.0*clock()/CLOCKS_PER_SEC)
#define prag___  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define freopen(name) if(fopen(name".inp","r")) {freopen (name".inp","r",stdin); freopen (name".out","w",stdout);}
using namespace std;
const int maxN = 1e5 + 7;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
#define ALL(x) (x).begin(),(x).end()
/**

 *    author:  cc123
 *    created: 21/07/2024 2:12:54 CH (GMT+7)
**/
// ================================================================================================================

bool cheo1[50] , cheo2[50] , vtRow[50] ; 
ll res = 0 ;
bool vt[9][9] ; 
//vector< vector<char>(8) > a ;
char a[12][12]; 
void recursion(int currColum)
{
    if(currColum == 8)
    {
        res++;
        return ;
    }

    for(int row = 0 ; row < 8 ; row++)
    {
        if(a[row][currColum] == '.' && cheo1[row - currColum + 7] == false
            && cheo2[row + currColum] == false && vtRow[row] == false)
        {
            vt[row][currColum] = true ;
            cheo1[row - currColum + 7] = cheo2[row + currColum] = vtRow[row] = true ; 
            recursion(currColum + 1);
            cheo1[row - currColum + 7] = cheo2[row + currColum] = vtRow[row] = false ; 
        }
    }
}
void solve()
{
    for(int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
            cin >> a[i][j];
    }
    recursion(0);
    cout << res << '\n' ; 
}
int main(){
    freopen(""); 
    prag___;
    int q = 1 ;
    //cin >> q;
    while(q--)
    {
        solve();
    }

    cerr << '\n' << "Time elapsed " << TIME << "s.\n";
    return 0;
}
// 馃帥馃懆鈥嶐煉烩渽
// ⚀ ⚁ ⚂ ⚃ ⚄ ⚅
// luv u ❤
