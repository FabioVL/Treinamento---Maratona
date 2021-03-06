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

int c, x, y, n;

ll fastexp(ll x, ll y, ll n)
{
	ll ans = 1;
	while(y>0)
	{
		if(y%2==1) ans = (ans*x) % n;
		x = (x*x) % n;
		y /= 2;
	}
	return ans;
}


int main()
{
	cin >> c;
	while(c != 0)
	{
		for(int i=0;i<c;i++)
		{
			cin >> x >> y >> n;
			cout << fastexp(x, y, n) << "\n";
		}
		cin >> c;
	}
}

