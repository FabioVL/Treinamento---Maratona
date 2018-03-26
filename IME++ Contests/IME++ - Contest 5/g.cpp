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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll a[2][2], c[2][2], p2[N], n, m;

void multiply(ll a[2][2], ll b[2][2], ll c[2][2], ll mod)
{
	ll temp[2][2] = {{},{}};

	temp[0][0] = a[0][0]*b[0][0]%mod + a[0][1]*b[1][0]%mod;
	temp[0][1] = a[0][0]*b[0][1]%mod + a[0][1]*b[1][1]%mod;
	temp[1][0] = a[1][0]*b[0][0]%mod + a[1][1]*b[1][0]%mod;
	temp[1][1] = a[1][0]*b[0][1]%mod + a[1][1]*b[1][1]%mod;
	
	for(int i=0;i<2;i++) for(int j=0;j<2;j++)
		c[i][j] = temp[i][j]%mod;
}

void fastexp(ll a[2][2], ll e, ll c[2][2], ll mod)
{
	c[0][0] = c[1][1]	= 1;
	c[0][1] = c[1][0] = 0;
	
	while(e)
	{
		if(e&1) multiply(c, a, c, mod);
		multiply(a,a,a,mod);
		e /= 2;
	}
}

int main()
{
	p2[0] = 1;
	for(int i=1;i<25;i++) p2[i] = p2[i-1]*2;
	while(cin >> n >> m)
	{
		if(n==0) cout << 0 << endl;
		else
		{
			a[0][0] = a[0][1] = a[1][0] = 1, a[1][1] = 0;
			c[0][0] = c[0][0] = c[0][0] = c[0][0] = 0;
			fastexp(a,n-1,c,p2[m]);
			cout << c[0][0] << endl;
		}
	}
}













