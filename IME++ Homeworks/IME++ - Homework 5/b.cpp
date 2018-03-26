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
const int N=1e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ii a[N][N];
int sz[N][N];
int n;
int x, y;
int m[N][N];
set<ii> s;
vector<ii> vec;

void init()
{
	for(int i=1;i<N;i++)
		for(int j=1;j<N;j++) a[i][j] = mp(i,j);
}

ii root(ii u)           //(int i, int j)
{
	int v = u.st;
	int w = u.nd;
	if(u == a[v][w]) return u;
	return a[v][w] = root(a[v][w]);
//	if(mp(i,j) == a[i][j]) return a[i][j];
//	return a[i][j] = root(a[i][j].st, a[i][j].nd);
}

void unite(ii u, ii v)
{
	ii ru = root(u);
	int rux = ru.st, ruy = ru.nd;
	ii rv = root(v);
	int rvx = rv.st, rvy = rv.nd;
	if(sz[rux][ruy]>sz[rvx][rvy]) 
		a[rvx][rvy] = a[rux][ruy], sz[rux][ruy] += sz[rvx][rvy];
	else
		a[rux][ruy] = a[rvx][rvy], sz[rvx][rvy] += sz[rux][ruy];
}

int main()
{
	cin >> n;
	init();
	ii p;
	for(int i=0;i<n;i++) cin >> x >> y, m[x][y] = 1;
	for(int i=1;i<=n;i++)
	{
		int j=1;
		while(m[i][j]==0 and j!=N) j++;
		if(j!=N)
		{
			ii p = mp(i, j);
			for(int k=1;k<N;k++) if(m[i][k]==1) unite(p, mp(i,k));
		}
	}

	for(int i=1;i<=n;i++)
	{
		int j = 1;
		while(m[j][i]==0 and j!=N) j++;
		if(j!=N)
		{
			p = mp(i, j);
			for(int k=1;k<N;k++) if(m[k][i]==1) unite(p, mp(k,i));
		}
	}
	
	for(int i=1;i<N;i++)
		for(int j=1;j<N;j++)
			if(m[i][j]==1) s.insert(root(mp(i,j))), vec.pb(root(mp(i,j)));
	for(int i=1;i<vec.size();i++) printf("(%d %d), ",vec[i].st, vec[i].nd);
	printf("\n");
	cout << s.size() << endl;
}














