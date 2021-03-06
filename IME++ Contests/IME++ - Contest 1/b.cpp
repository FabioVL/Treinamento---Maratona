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

ll f(ll n)
{
	if(n < 0) return -1;
	if(n < 10) return n;
	return f(f(n/10) + n%10);
}

int main()
{
	ll n;
	cin >> n;
	while(n != 0)
	{
		int ans = f(n);
		cout << ans << endl;
		cin >> n;
	}
}

