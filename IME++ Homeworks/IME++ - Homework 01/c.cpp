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

int m[10][10];
int n;

int main()
{
	cin >> n;
	while(n--)
	{
		memset(m,0,sizeof(m));
		for(int i=1;i<=9;i+=2)
			for(int j=1;j<=i;j+=2) scanf("%d",&m[i][j]);

		for(int i=3;i<=9;i+=2)
			for(int j=2;j<=i;j+=2) m[i][j] = (m[i-2][j-1] - m[i][j+1] - m[i][j-1])/2;

		for(int i=2;i<=9;i+=2)
			for(int j=1;j<=i;j++) m[i][j] = m[i+1][j] + m[i+1][j+1];

		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<i;j++) printf("%d ",m[i][j]);
			printf("%d\n",m[i][i]);
		}
	}

}