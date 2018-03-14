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
const int N=1e2+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,m,k,l,ans,ck;
vi emp[N], lan[N];
int vis[N];

void dfs(int u)
{
	vis[u] = 1;
	for(int v : emp[u])
		for(int w : lan[v]) if(!vis[w]) dfs(w);

}

int main()
{
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		if(k==0) ck++;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&l);
			emp[i].pb(l),lan[l].pb(i);
		}
	}
	for(int i=0;i<n;i++)
		if(!vis[i])
		{
			dfs(i);
			ans++;
		}
	ans--;
	if(ck==n) ans++;
	cout << ans << endl;
}