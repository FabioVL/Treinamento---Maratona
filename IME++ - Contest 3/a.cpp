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

ll n;

ll fastexp(ll b, ll e)
{
	int ans = 1;
	while(e>0)
	{
		if(e%2==1) ans = (ans*b)%MOD;
		b = (b*b)%MOD;
		e /= 2;
	}
	return ans;
}

int main()
{
	cin >> n;
	if(n==0) return cout << 1 << endl, 0;
	int r1 = fastexp(2,2*n-1);
	int r2 = fastexp(2,n-1);
	int re = (r1+r2)%MOD;
	cout << re << endl;
}

