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
const int N=2e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int t;
int n, m, x, y;
//vi adj[N];
int adj[N][N];
int vis[N];

int longest(int u)
{
	queue<int> bfs;
	bfs.push(u);
	vis[u] = 1;
	while(!bfs.empty())
	{
		int v = bfs.front();
		for(int i=1;i<N;i++)
		{
			if(adj[v][i] == 1 and vis[i] == -1)
			{
				vis[i] = 1 - vis[v];
				bfs.push(i);
			}
			else if(adj[v][i] == 1 and vis[i]==vis[v]) return -1;
		}
		bfs.pop();
	}
	return 1;
}

int main()
{
	cin >> t;
	int caso = 1;
	while(t--)
	{
		memset(adj, 0, sizeof(adj));
		memset(vis, -1, sizeof(vis));
		cin >> n >> m;
		for(int i=0;i<m;i++)
		{
			scanf("%d%d",&x,&y);
			adj[x][y] = 1;
			adj[y][x] = 1;
		}
		int res = 0;
		for(int i=0;i<n;i++)
		{
			int ans;
			if(vis[i]==-1)
			{
				ans = longest(i);
				if(ans == -1)
				{
					res = -1;
					break;	
				}
			}
		}
		cout << "Scenario #" << caso << ":\n";
		if(res == -1) cout << "Suspicious bugs found!\n";
		else cout << "No suspicious bugs found!\n";
		caso++;
	}
}

