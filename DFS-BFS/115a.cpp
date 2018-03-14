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
const int N=2e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,x,ma;
int vis[N],a[N];
vi adj[N];

void dfs(int u)
{
	if(vis[u]==0) vis[u]=1;
	for(int v : adj[u]) 
		if(!vis[v])	vis[v] = vis[u]+1, dfs(v);
}

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++) 
	{
		scanf("%d",&a[i]);
		if(a[i]>0)	adj[i].pb(a[i]), adj[a[i]].pb(i);
	}
	if(n==1) return cout << 1 << endl, 0;
	for(int i=1;i<=n;i++) if(vis[i]==0 and a[i]==-1) dfs(i);
	for(int i=1;i<=n;i++) ma = max(ma,vis[i]);
	cout << ma << endl;
}