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
const int N=1e2+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int grid[N][N], aux[N][N];
int w,h,b;
int dx[9] = {-1,-1,-1,0,0,0,1,1,1};
int dy[9] = {-1,0,1,-1,0,1,-1,0,1};
set<int> s;

void copy()
{
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++) grid[i][j]=aux[i][j];
	memset(aux,0,sizeof(aux));
}

int main()
{
	cin >> w >> h >> b;
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++) scanf("%d",&grid[i][j]);
	
	while(b--)
	{

		grid[0][0] = grid[h][w];
		for(int i=1;i<=h;i++) grid[i][0] = grid[i][w];
		for(int i=1;i<=w;i++) grid[0][i] = grid[h][i];
		grid[h+1][0] = grid[1][w];
		grid[0][w+1] = grid[h][1];
		grid[h+1][w+1] = grid[1][1];
		for(int i=1;i<=h;i++) grid[i][w+1] = grid[i][1];
		for(int i=1;i<=w;i++) grid[h+1][i] = grid[1][i];
		
		for(int i=1;i<=h;i++)
			for(int j=1;j<=w;j++)
				for(int k=0;k<9;k++) aux[i][j] += grid[i+dx[k]][j+dy[k]];
		
		copy();
	}
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++) s.insert(grid[i][j]);
	
	cout << s.size() << endl;

}



















