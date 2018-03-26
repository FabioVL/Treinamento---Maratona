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

int n, x, ma;
vi adj[N];
int vis[N], p[N];

void longest(int u)
{
	queue<int> bfs;
	bfs.push(u);
	vis[u] = 1;
	while(!bfs.empty())
	{
		int v = bfs.front();
		for(int w : adj[v]) 
			if(!vis[w])	
				{
					vis[w]=vis[v]+1;
					ma = max(ma, vis[w]);
					bfs.push(w);
				}
		bfs.pop();
	}
}

int main()
{
	ma = 1;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&p[i]);
		if(p[i]!=-1)
		{
			adj[i].pb(p[i]);
			adj[p[i]].pb(i);
		}
	}
	for(int i=1;i<=n;i++) if(p[i]==-1) longest(i);
	cout << ma << endl;
}

