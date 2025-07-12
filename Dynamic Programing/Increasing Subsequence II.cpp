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
const int MOD = 1e9 + 7 ; 
// ================================================================================================================

#define int long long 
int n ; 
int a[maxN] ;
vector<int> sortedA ; 
int bit[maxN] , f[maxN] ; 
void add(int &a , int b) {
	a += b ;
	if(a >= MOD) a -= MOD ; 
}
void up(int i , int val) {
	for(; i <= sortedA.size() + 1 ; i += i & -i) 
		add(bit[i] , val) ; 
}
int get(int i) {
	int ans = 0 ; 
	for(; i > 0 ; i -= i & -i) ans += bit[i] ; 
	return ans ; 
}
int getIdx(int x) {
	return lower_bound(ALL(sortedA) , x) - sortedA.begin() + 1 ; 
}
void solve() {
	cin >> n ;
	FOR(i , 1 , n) {
		cin >> a[i] ;
		sortedA.emplace_back(a[i]) ; 
	}

	sort(ALL(sortedA)) ; 
	auto it = unique(ALL(sortedA)) ; 

	sortedA.erase(it , sortedA.end()) ; 

	FOR(i , 1 , n) {
		++f[i] ; 

		f[i] = f[i] + get(getIdx(a[i]) - 1) ; 
		f[i] %= MOD ; 

		up(getIdx(a[i]) , f[i]) ; 
	}

	int ans = 0 ;
	FOR(i , 1 , n) add(ans , f[i]) ; 
	cout << ans << '\n' ; 
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