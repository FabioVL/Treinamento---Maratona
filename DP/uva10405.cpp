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

string s1, s2;
int dp[N][N];

void lcs(int n, int m)
{
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++)
		{
			if(i==0 or j==0) dp[i][j] = 0;
			else if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
}

int main()
{
	while(cin >> s1 >> s2)
	{
		memset(dp,0,sizeof(dp));
		int n = s1.length(), m = s2.length();
		lcs(n, m);
		cout << dp[n][m] << endl;
	}
}

