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
const ll LN=1e18+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll q, l, r;
vector<ll> p;
set<ll> s;

ll raiz(ll x)
{
	ll l = 0, r = INF, m;
	while(l < r)
	{
		m = (l+r+1)/2;
		if(m*m>x) r = m-1;
		else l = m;
	}
	return l;
}

ll fastexp(ll b, ll e)
{
	ll ans = 1;
	while(e)
	{
		if(e&1) 
		{
			if(ans > LN/b) return -1;
			ans = ans*b;
		}
		if(e==1) return ans;
		if(b > LN/b) return -1;
		b = b*b;
		e /= 2;
	}
	return ans;
}


int main()
{
	for(int i=2;i<=N;i++)
	{
		for(int j=3; ;j++)
		{
			ll x = fastexp(i, j);
			if(x == -1) break;
			ll y = raiz(x);
			if(y*y!=x) s.insert(x); // não é quadrado perfeito
		}
	}
	for(auto it : s) p.pb(it); //usar set para não repetir ps
	cin >> q;
	while(q--)
	{
		cin >> l >> r;
		ll resp = upper_bound(p.begin(), p.end(), r) -
				upper_bound(p.begin(), p.end(), l-1);
		resp += (raiz(r) - raiz(l-1));
		cout << resp << endl;
	}
}
























