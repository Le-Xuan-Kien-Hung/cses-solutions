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
 *    created: 
**/
// ================================================================================================================
int n ; 
vector < pair<int , int> > v ; 
void rcs(int n , int from , int usingg , int to)
{
    if(n > 0)
    {
        rcs(n - 1 , from , to , usingg);
        v.pb({from , to});
        rcs(n - 1 , usingg , from , to) ; 
    }
}
void solve()
{
    cin >> n ;
    rcs(n , 1 , 2 ,3);
    cout << v.size() << '\n' ; 
    for(auto x : v)
    {
        cout << x.fir << ' ' << x.sec << '\n' ;  
    }
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
