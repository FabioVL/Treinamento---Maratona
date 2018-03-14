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

ll n,k,a[60];

ll f(ll n, ll k)
{
	if(k == a[n-1]) return n;
	if(k > a[n-1]) return f(n-1,2*a[n-1]-k);
	else return f(n-1,k);
}

int main()
{
	cin >> n >> k;
	a[0] = 1;
	for(int i=1;i<60;i++) a[i] = a[i-1]*2;
	ll ans = f(n,k);
	printf("%lld\n", ans);
}