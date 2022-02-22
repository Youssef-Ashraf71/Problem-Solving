/*
       ____            ___________
      /\   \          |
     /  \   \         |
    /    \   \        |___________
   /______\   \                  |
  /        \   \                 |
 /          \  /       __________|
/            \/

 ___  ___              F
|\  \|\   \            F
\ \  \_\   \           F
 \ \ ___    \          F
  \  \ \\ \  \         F
   \  \__\\ \_\        F
    \ |__| \|__|       F

 */
#include <bits/stdc++.h>
#include <map>
#include<unordered_set>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
using namespace std;
#define REPi(a,b) for (int i = a; i <= b; i++)
#define REPj(a,b) for (int j = a; j <= b; j++)
#define genMod(x,Mod) (x<0)?(x % Mod + Mod) : (x % Mod)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(v) v.begin(),v.end()
#define sz(v) (int) v.size()
#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) {cout << i << " " ; cout << "\n";}
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
const int N = 1e5+11,NN = 100000, mod = 1e9 + 7;
ll REMINDER = 1000000007;
/*
int n, m;
char grid[1001][1001];
int vis[1001][1001];
1
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
*/

// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
vector<ll> numprimes(N); vector<ll> divs(N);    bool chk[N];
ll  divis( ll  n)
{
    ll i,j,cnt=0;
    if(chk[n])
        return 2;
    for(i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            if(n/i == i)
                cnt++;
            else
                cnt+=2;
        }
    }
    return cnt;
}
void solve() {
    ll n ,i = 0, j = 0, cnt = 0;
    cin>>n;  ll mx=1;
    memset(chk, true,sizeof(chk));
    chk[0]=0 ; chk[1]=0;
    numprimes[0]=0; numprimes[1]=0;
    for(i=2;i<=100000; i++)
    {
        numprimes[i]=numprimes[i-1];
        if(chk[i]==1)
        {
            numprimes[i]++;
            for(j=i*i;j<=100000;j+=i)
                chk[j]=0;
        }
    }
    for(i=2;i<=100000;i++)
    {
        if(chk[i])
            divs[i]=2;
        else
            divs[i]=divis(i);
    }
    for(i=1;i<=100000; i++)
    {
        if(divs[i]>mx && numprimes[i]>=divs[i]){
            n--;
        }
        mx = max(mx, divs[i]);
        if(!n)
        {
            cout<<i<<endl;
            return;
        }
    }

}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;  //   cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}