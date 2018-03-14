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

int n,ans,len,x;

int main()
{
	cin >> n;
	while(!cin.eof())
	{
		vi a;
		ans = 0;
		for(int i=0;i<n;i++) scanf("%d",&x), a.pb(x);
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++) ans += abs(a[i]-a[n-1-i]);
		ans /= 2;
		printf("%d\n", ans);
		cin >> n;
	}
}