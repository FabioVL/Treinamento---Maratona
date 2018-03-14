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

ll a[N], dp[N], x, n;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) scanf("%lld",&x), a[x]++;
	dp[0] = 1;
	for(int i=0;i<N;i++) dp[i] = max(dp[i-1], dp[i-2] + i*a[i]);
	cout << dp[N-1] << endl;
}