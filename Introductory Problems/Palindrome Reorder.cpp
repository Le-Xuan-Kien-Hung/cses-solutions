///🎛👨‍💻✅
#pragma GCC optimize("O2")
#include <bits/stdc++.h>
#define ll long long
#define str string
#define pb push_back
#define fir first
#define sec second
#define MOD 1000000007
#define FOR(i,a,b) for(int (i)=(a) ; i<=(b) ; i++)
#define freopen(name) if(fopen(name".inp","r")) {freopen (name".inp","r",stdin); freopen (name".out","w",stdout);}
using namespace std;
const int inf  = 1e9 + 7;
const int maxN = 1e6 + 7;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
#define ALL(x) (x).begin(),(x).end()
//cccccccc
str s;
ll d = 0 , b ,k;
int main(){
    freopen("a");
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s,res="";
    ll cnt[500]={0},i,sum=0,j;
    cin >> s;
    for (i=0;i<s.size();i++)
        cnt[s[i]-'A']++;
    for (i=0;i<26;i++)
        sum+=cnt[i]%2;
    if (sum>1){
        cout << "NO SOLUTION";
        return 0;
    }
    for (i=0;i<26;i++)
        if (!(cnt[i]%2))
            for (j=0;j<cnt[i]/2;j++)
                res.pb(i+'A');
    for (i=0;i<=25;i++)
        if ((cnt[i]%2))
            for (j=0;j<cnt[i];j++)
                res.pb(i+'A');
    for (i=25;i>=0;i--)
        if (!(cnt[i]%2))
            for (j=0;j<cnt[i]/2;j++)
                res.pb(i+'A');
    cout << res;
    return 0;
}
//⚀ ⚁ ⚂ ⚃ ⚄ ⚅
