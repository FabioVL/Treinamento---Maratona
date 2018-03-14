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
const int N=5e3+5;
const int MOD=998244353;
const int INF=0x3f3f3f3f;

ll m[N][N], f[N];
ll a,b,c,u,v,w,m1,m2,m3,ans;

void fill()
{
	for(int i=0;i<N;i++) m[i][0] = 1;
	for(int i=0;i<N;i++) m[i][i] = 1;
	for(int i=1;i<N;i++)
		for(int j=1;j<i;j++) m[i][j] = (m[i-1][j-1]+m[i-1][j])%MOD;
}

int main()
{
	cin >> a >> b >> c;
	f[0]=1;
	for(int i=1;i<N;i++) f[i] = (f[i-1]*i)%MOD;
	fill();
	m1 = min(a,b);
	for(int i=0;i<=m1;i++) u += ((m[a][i]*m[b][i]*f[i])%MOD);
	m2 = min(a,c);
	for(int i=0;i<=m2;i++) v += ((m[a][i]*m[c][i]*f[i])%MOD);
	m3 = min(b,c);
	for(int i=0;i<=m3;i++) w += ((m[b][i]*m[c][i]*f[i])%MOD);
	ans = (((u*v)%MOD)*w)%MOD;
	cout << ans << endl;
}
