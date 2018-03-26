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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n, x, sieve[N];
set<ll> s;

int main()
{
	for(ll i=2;i<N;i++)
		if(sieve[i]==0) for(ll j=i*i;j<N;j+=i) sieve[j] = 1;
	for(ll i=2;i<N;i++)
		if(sieve[i]==0) s.insert(i*i);
	cin >> n;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		if(s.count(x)>0) printf("YES\n");
		else printf("NO\n");
	}
}

