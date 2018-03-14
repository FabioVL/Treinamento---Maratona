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
const int N=3e4+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,t, a[N];
int vis[N];
vi adj[N];

void dfs(int u)
{
	vis[u]=1;
	for(int v:adj[u]) if(!vis[v]) dfs(v);
}

int main()
{
	cin >> n >> t;
	string ans;
	for(int i=1;i<n;i++) scanf("%d",&a[i]);
	for(int i=1;i<n;i++) adj[i].pb(i+a[i]);
	dfs(1);
	vis[t] == 0 ? ans = "NO" : ans = "YES";
	cout << ans << endl; 
}