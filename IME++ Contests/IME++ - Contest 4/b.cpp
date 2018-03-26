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
const int N=1e6+5, B=1e9+1;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n, l, r;
ll sieve[N];
vector<ll> p;

bool isPrime(int n)
{
	for(int i=0; p[i]*p[i]<=n;i++)
		if(n%p[i]==0) return false;
	return true;
}

int main()
{
	for(ll i=2;i<N;i++) if(sieve[i]==0)
		for(ll j=i*i;j<N;j+=i) sieve[j] = 1;
	for(ll i=2;i<N;i++) if(sieve[i]==0) p.pb(i);
	ll last = p[p.size()-1];
	cin >> n;
	while(n--)
	{
		scanf("%lld %lld",&l, &r);
		ll lb = lower_bound(p.begin(), p.end(),l) - p.begin();
		ll ub = upper_bound(p.begin(), p.end(),r) - p.begin();
		for(int i=lb;i<ub;i++) printf("%lld\n", p[i]);
		for(int i=max(last+1,l);i<=r;i++)
			if(isPrime(i)) printf("%d\n",i);

		printf("\n");
	}
}

