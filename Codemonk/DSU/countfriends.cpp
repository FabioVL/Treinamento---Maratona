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

int n,m,x,y;
int a[N],sz[N],c[N];

void init(int n)
{
	for(int i=1;i<=n;i++) a[i]=i, sz[i]=1;
}

int root(int u)
{
	if(u == a[u]) return u;
	return a[u] = root(a[u]);
}

void unite(int u, int v)
{
	int ru = root(u);
	int rv = root(v);
	if(sz[ru] < sz[rv]) a[ru] = a[rv], sz[rv]+=sz[ru];
	else a[rv] = a[ru], sz[ru]+=sz[rv];
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
	for(int i=1;i<=n;i++) c[root(i)]++;
	for(int i=1;i<=n;i++) printf("%d ",c[root(i)]-1);
	printf("\n");
}

