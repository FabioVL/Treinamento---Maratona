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

ll l,r;

int main()
{
	cin >> l >> r;
	if(r-l < 2) return cout << -1 << endl, 0;
	if(l%2==0)
		 return printf("%lld %lld %lld\n",l,l+1,l+2), 0;
	if(r-l>=3)
		return printf("%lld %lld %lld\n",l+1,l+2,l+3), 0;
	cout << -1 << endl;
}

