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

ll m[N][N];
ll a,b,c,ans;

void fill()
{
	for(int i=0;i<N;i++) m[i][0] = 1;
	for(int i=0;i<N;i++) m[0][i] = 1;
	for(int i=1;i<N;i++)
		for(int j=1;j<N;j++) 
			m[i][j] = (j*m[i-1][j-1]%MOD + m[i-1][j]%MOD)%MOD;
}

int main()
{
	cin >> a >> b >> c;
	fill();
	ans = (((m[a][b]*m[a][c])%MOD)*m[b][c])%MOD;
	cout << ans << endl;
}













