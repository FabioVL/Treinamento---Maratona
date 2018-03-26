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

vi p;
ll sieve[N];
ll n;

map<ll, ll> factorize(ll n)
{
	map<ll,ll> fact;
	for(int i=0; p[i]*p[i] <= n; i++)
	{
		if(n % p[i]) continue;
		while(n%p[i] == 0) fact[p[i]]++, n /= p[i];
	}
	if(n>1) fact[n]++;
	return fact;
}

bool isPrime(ll n)
{
	for(int i=0;i<p.size();i++)
		if(n % p[i] == 0) return false;
	return true;
}

ll phi(ll n)
{
	map<ll, ll> fact = factorize(n);
	for(auto p : fact) n -= n/p.st;
	return n;
}

int main()
{
	for(int i=2;i<N;i++)
	{
		if(sieve[i] == 0)
			for(int j = 2*i; j<N; j+=i) sieve[j] = 1;
	}

	for(int i=2;i<N;i++) if(sieve[i] == 0) p.pb(i);
	while(cin >> n)
	{
		if(isPrime(n)) cout << (n-1)/2 << endl;
		else	cout << phi(n)/2 << endl;
	}
}

