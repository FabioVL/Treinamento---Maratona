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

ll n, a[N], sum, mi;


int main()
{
	cin >> n;
	mi = INF;
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++) 
	{	
		sum += a[i];
		if(a[i]%2==1) mi = min(mi,a[i]);
	}
	if(sum%2==0) return cout << sum << endl, 0;
	cout << sum - mi << endl;
}

