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

void solve()
{
    ll a , b ;
    cin >> a >> b ; 
    ll p1 = a * 2 - b , p2 = b * 2 - a ;
    if((a + b) % 3 == 0 && p1 >= 0 && p2 >= 0 && (p1 / 3) + (p2 / 3) == (a + b) / 3) cout << "YES\n";
    else cout << "NO\n";  
}
int main(){
    freopen(""); 
    prag___;
    int q = 1 ;
    cin >> q;
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
