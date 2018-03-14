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

ll n;
vector<ll> a, ps;

int f(int m, int k)
{
	for (int i=0; i<m; i++) if (ps[m] - a[i] == k/2) return 1;
	return 0;
}

int main()
{
	cin >> n;
	ll p;
	for (int i=0; i<n; i++) scanf("%lld",&p), a.pb(p);
	
	ps.pb(a[0]);
	for (int i=1; i<n; i++) ps.pb(ps[i-1] + a[i]);
	
	int sum = ps[n-1];

	if (sum%2==1) return cout << "NO\n", 0;
	for(int i=0;i<n;i++) if(ps[i] == sum/2 or a[i]==sum/2) return cout << "YES\n", 0; 
	
	int l=0, r=n-1, m;
	while (r>=l)
	{
		m = (l+r)/2;
		if (ps[m] == ps[n-1]/2) return cout << "YES\n", 0;
		int ans = f(m,ps[n-1]);
		if (ans == 1) return cout << "YES\n", 0;
		// if (ans > )
		l = m+1;
	}
	printf("NO\n");
}