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

char s;
int m[N][N];
int t,n,C,R,a,b;
int vis[N][N];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};


ii longest(int x, int y)
{
	ii ans;
	queue<ii> bfs;
	bfs.push(mp(x,y));
	while(!bfs.empty())
	{
		ii v = bfs.front();
		x = v.st;
		y = v.nd;
		for(int i=0; i<4; i++) 
			if(m[x + dx[i]][y + dy[i]] == 1 and !vis[x + dx[i]][y + dy[i]])
				vis[x + dx[i]][y + dy[i]] = vis[x][y]+1, bfs.push(mp(x + dx[i],y + dy[i]));
		ans = bfs.back();
		bfs.pop();	
	}
	// db(ans.st _ ans.nd);
	return ans;
}

int main()
{
	cin >> t;
	while(t--)
	{
		memset(m,0,sizeof(m));
		memset(vis,0,sizeof(vis));
		cin >> C >> R;
		for(int i=1;i<=R;i++)
		{
			for(int j=1;j<=C;j++) 
			{
				cin >> s;
				if(s == '#') m[i][j] = 0;
				else m[i][j] = 1, a=i, b=j;
			}
		}

		ii last = longest(a,b);
		for(int i=1;i<=R;i++)
		{
			for(int j=1;j<=C;j++) printf("%d ",vis[i][j]);
			printf("\n");
		}

		memset(vis,0,sizeof(vis));
		last = longest(last.st,last.nd);
		for(int i=1;i<=R;i++)
		{
			for(int j=1;j<=C;j++) printf("%d ",vis[i][j]);
			printf("\n");
		}

		printf("Maximum rope length is %d.\n",vis[last.st][last.nd]);
	}	
}