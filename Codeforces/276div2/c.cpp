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

ll n,l,r;
ll a[70], b[70], pd[70];

ll numberl(ll n)
{
	ll ans = 0;
	for(int i=0;i<n;i++) ans += a[i]*pd[i];
	return ans;
}

ll numberr(ll n)
{
	ll ans = 0;
	for(int i=0;i<n;i++) ans += b[i]*pd[i];
	return ans;
}

int main()
{
	pd[0]=1;
	for(int i=1;i<70;i++) pd[i] = pd[i-1]*2;
	cin >> n;
	while(n--)
	{
		cin >> l >> r;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		ll contl = 0;
		while(l!=0) a[contl]=l%2, l/=2, contl++;
		ll contr = 0;
		while(r!=0) b[contr]=r%2, r/=2, contr++;
		ll u = 0;
		ll pz = 0;
		ll nul = numberl(contr), nur = numberr(contr);
		while(nul + pd[u] <= nur and u < contr)
		{
			if(a[u]==0) pz = u;
			a[u]=1;
			nul = numberl(contr);
			u++;
		}
		cout << nul << endl;
	}
	
}















