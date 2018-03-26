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

int n, m[N][N];

int main()
{
	while(cin >> n)
	{
		memset(m,0,sizeof(m));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i+j == n-1) m[i][j]=2;
				else if(i == j) m[i][j]=1;
				else m[i][j] = 3;
			}		
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) printf("%d",m[i][j]);
			printf("\n");
		}
	}
}