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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,m;
int vis[N];

int f(int u, int m)
{
	if(n == m) return 0;
	int ans;
	queue<int> bfs;
	bfs.push(u);
	while(!bfs.empty())
	{
		int v = bfs.front();
		int a = 2*v, b = v-1;
		if(!vis[a] and a<2*m) vis[a] = vis[v]+1, bfs.push(a);
		if(!vis[b] and b>0) vis[b] = vis[v]+1, bfs.push(b);		
		if(a==m) return vis[a];
		if(b==m) return vis[b];
		bfs.pop();
	}
}

int main()
{
	cin >> n >> m;
	cout << f(n,m) << endl;
}