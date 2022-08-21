# pragma GCC optimize("O3,unroll-loops")
# pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

# include <bits/stdc++.h>
# include <ext/pb_ds/assoc_container.hpp>
# include <ext/pb_ds/tree_policy.hpp>

# define mkp make_pair
# define ff first
# define ss second
# define pll pair <ll, ll>
# define pii pair <int, int>
 
# define vec vector
# define pb push_back
# define pf push_front
# define ppb pop_back
# define ppf pop_front

# define all(x) (x).begin(), (x).end()
# define rall(x) (x).rbegin(), (x).rend()
# define sz(x) ((int)(x).size())
# define lb lower_bound
# define ub upper_bound
# define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

# define br break
# define rt return 
# define cn continue
# define nl "\n"
# define off exit(0)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ll MAXN = 1e5 + 25;
const ll MAXL = 18 + 0;
const ll INF1 = 1e18 + 0;
const ll INF2 = 2e9 + 0;
const ll MOD = 1e9 + 7;
const ll M0D = 998244353;
const ld PI = acos((ld) -1);
const ll P = 67 + 0 + 0;

using namespace std;
using namespace __gnu_pbds;

void qataima ()
{
    ios::sync_with_stdio(false);
    
    cin.tie(0);
}

ll n, m, a[MAXN];
ll c1, c2, pos[MAXN];

void ma1n ()
{
	cin >> n;
	for (ll i = 1; i <= n; ++i)
	{
		cin >> a[i];
		pos[a[i]] = i;
	}
	cin >> m;
	for (ll i = 1, x; i <= m; ++i)
	{
		cin >> x;
		c1 += pos[x];
		c2 += (n - pos[x] + 1);
	}
	cout << c1 << ' ' << c2;
}


int main (/*?*/)
{	
    qataima ();
	int zxc = 1;
//	cin >> zxc;
	while (zxc--)
	{
		ma1n();
	}
    return 0;
}