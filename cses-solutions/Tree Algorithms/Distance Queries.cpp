// D:\Sublime Text\Packages\User
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC optimize ("O3,unroll-loops,no-stack-protector")
// =================================================================================================================
template <typename T> inline void read(T &x){bool nega=0;char c;while((!isdigit(c=getchar()))&&(c!='-'));if(c=='-'){nega=1;c=getchar();}x=c-48;while(isdigit(c=getchar())) x=x*10+c-48;if(nega) x=-x;}
template <typename T> inline void display(T x){if(x>9) display(x/10);putchar(x%10+48);}
template <typename T> inline void write(T x){if(x<0){putchar('-');x=-x;}display(x);}
template <typename T> inline void writeln(T x){write(x);putchar('\n');}
template <typename T> void maximize(T &res, T val) { if (res < val) res = val; }
template <typename T> void minimize(T &res, T val) { if (res > val) res = val; }

/**
 *    author:  cc123
 *    created: 
**/

#define ll long long 
#define str string
#define pb push_back
#define fir first
#define sec second
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define FOR(i,a,b) for(int (i)=(a) ; i<=(b) ; i++)
#define TIME (1.0*clock()/CLOCKS_PER_SEC)
#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define freopen(name) if(fopen(name".inp","r")) {freopen (name".inp","r",stdin); freopen (name".out","w",stdout);}
#define getbit(x , i) (((x) >> i) & 1) 
#define seton(x , i) ((x) | (1ULL << (i)))
#define setoff(x , i) ((x) &~ (1ULL << i))
#define flip(x , i) ((x)^(1ULL << i)) 

const int maxN = 2e5 + 7;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 1e9 + 9 ; 
// ================================================================================================================


vector<int> g[maxN] ; 
int dep[maxN] ; 
int up[maxN][20] ;
int n , q ; 
void dfs(int u , int p = -1) {
	for(auto &v : g[u]) if(v ^ p) {
		dep[v] = dep[u] + 1 ;
		dfs(v , u) ;
		up[v][0] = u ;
	}	
}
void prepare(void) {
	dfs(1) ; 

	int q = __lg(n) ;
	for(int k = 1 ; k <= q ; ++k) for(int i = 1 ; i <= n ; i++) {
		up[i][k] = up[up[i][k - 1]][k - 1] ; 
	}
}

int getLCA(int u , int v) {
	if(dep[u] != dep[v]) {
		if(dep[u] < dep[v]) swap(u , v) ;

		int dif = dep[u] - dep[v] ; 
		for(int i = 0 ; (1 << i) <= dif ; ++i) {
			if(dif >> i & 1) u = up[u][i] ; 
		}
	}

	if(u == v) return u ;

	int k = __lg(dep[u]) ;
	for(int i = k ; i >= 0 ; i--) {
		if(up[u][i] != up[v][i]) 
			u = up[u][i] , 
			v = up[v][i] ;
	}

	return up[u][0] ; 
}
int getLen(int u , int v) {
	int p = getLCA(u , v) ; 
	return dep[u] + dep[v] - 2 * dep[p] ; 
}
void solve() {
	cin >> n >> q ; 
	FOR(i , 2 , n) {
		int u , v ; 
		cin >> u >> v ;
		g[u].emplace_back(v) ;
		g[v].emplace_back(u) ; 
	}

	prepare() ;

	while(q--) {
		int u , v ; cin >> u >> v ;
		cout << getLen(u , v) << '\n' ; 
	}
}
signed main(){
    freopen(""); 
    FastIO;
    int numTest = 1 ;
    // cin >> numTest;
    while(numTest--) {
        solve();
    }

    cerr << '\n' << "Time elapsed " << TIME << "s.\n";
    return 0;
}
