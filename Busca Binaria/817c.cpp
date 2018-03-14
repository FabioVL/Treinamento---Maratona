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

ll n,s,mi;

ll somaalg(ll x)
{
	ll soma = 0;
	while(x>0) soma += x%10, x/=10;
	return soma; 
}

int main()
{
	cin >> n >> s;
	ll l=1,r=n+1;
	ll m;
	while(r>l) 
	{
		m = (l+r)/2;
		if(m - somaalg(m) < s) l = m+1;
		else r = m;
	}
	cout << n+1-(l+r)/2 << endl;
}