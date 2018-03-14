#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n,m,x,y,ans;
ll a[N], sz[N], c[N];

void init(ll n)
{
	for(int i=1;i<=n;i++) a[i]=i, sz[i]=1;
}

ll root(ll u)
{
	if(u == a[u]) return u;
	return a[u] = root(a[u]);
}

ll unite(ll u, ll v)
{
	ll ru = root(u);
	ll rv = root(v);
	if(sz[ru]>sz[rv]) a[rv] = a[ru], sz[ru] += sz[rv];
	else a[ru] = a[rv], sz[rv] += sz[ru];
}

int main()
{
	cin >> n >> m;
	init(n);
	for(int i=0;i<m;i++)
	{
		cin >> x >> y;
		unite(x,y);
	}
	ans = 1;
	for(int i=1;i<=n;i++) c[root(i)]++;
	for(int i=1;i<=n;i++) if(c[i]!=0) ans = (ans*c[i])%MOD;
	cout << ans << endl;
}
