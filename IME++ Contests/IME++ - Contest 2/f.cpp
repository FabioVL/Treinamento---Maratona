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

int n,m,k,ans,i,l,r,a;

int main()
{
	cin >> n >> m >> k;
	m -= n, ans = 1, a=1;
	r = k, l = k;
	while(m>0) 
	{
		if(l>1) l--, a++;
		if(r<n) r++, a++;
		m -= a;
		ans++;
	}
	cout << ans << endl;
}

