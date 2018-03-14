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

int n,m,x,y,q,o1,o2;
int a[N], sz[N];

void init(int n)
{
	for(int i=1;i<=n;i++) a[i]=i, sz[i]=i;
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
	if(ru > rv) a[rv] = a[ru], sz[ru] += sz[rv];
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
	cin >> q;
	for(int i=0;i<q;i++)
	{
		cin >> o1 >> o2;
		int ro1 = root(o1), ro2 = root(o2);
		if(ro1 == ro2) printf("TIE\n");
		else if(ro1 > ro2) printf("%d\n", o1);
		else printf("%d\n", o2);
	}
}

