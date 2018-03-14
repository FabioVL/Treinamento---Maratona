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
const int N=5e2+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int grid[N][N];
int n,m,x,y;
int vis[N][N];
string s;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int dist[N][N];

int valido(int i, int j){

	return i>=0 and i<n and j>=0 and j<m;
}

int longest(int x, int y)
{
   queue<ii> bfs;
   bfs.push(mp(x,y));
   while(!bfs.empty())
   {   
      ii v = bfs.front();
      x = v.st;
      y = v.nd;
      int val = grid[x][y];
      if(x == n-1 and y == m-1) return dist[x][y];
      for(int i=0;i<4;i++)
      {   
         int ux = x + val*dx[i];
         int uy = y + val*dy[i];
         if(valido(ux,uy) && dist[x][y]+1 < dist[ux][uy])
         {
            dist[ux][uy] = dist[x][y] + 1;
            bfs.push(mp(ux,uy));
         }
      }   
      bfs.pop();
	}
	return -1;
}

int main()
{
	cin >> n >> m;
	for(int i=0;i<n;i++) 
	{
		cin >> s;
		for(int j=0;j<m;j++) grid[i][j] = s[j]-'0';
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) dist[i][j] = INF;
	
	dist[0][0] = 0;	

	int ans = longest(0,0);
	if(ans == -1) return cout << "IMPOSSIBLE\n", 0;
	cout << ans << endl;	
}
