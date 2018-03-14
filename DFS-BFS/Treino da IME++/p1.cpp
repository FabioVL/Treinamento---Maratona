#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e4+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,a,b;
int vis[N];
vi adj[N];

int longest(int u)
{
	int ans;
	queue<int> bfs;
	bfs.push(u);
	vis[u]=1;
	while(!bfs.empty())
	{
		int v = bfs.front();
		for(int w : adj[v]) if(!vis[w]) vis[w] = vis[v]+1, bfs.push(w);
		ans = bfs.back();
		bfs.pop(); 
	}
	return ans;
}


int main()
{
	cin >> n;
	for(int i=0;i<n-1;i++) 
	{
		scanf("%d%d",&a,&b);
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int last = longest(a);
	memset(vis,0,sizeof(vis));
	last = longest(last);
	printf("%d\n",vis[last]-1);
}