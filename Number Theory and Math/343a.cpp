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

ll a,b,ans;

ll f(ll a,ll b)
{
	if(a==1) return b;
	if(b==1) return a;
	if(a > b) return f(a%b,b) + a/b;
	return f(a,b%a) + b/a;
}

int main()
{
	cin >> a >> b;
	ans = f(a,b);
	cout << ans << endl;
}