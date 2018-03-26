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

int n, q, m[N];
vi x;

int main()
{
	int p;
	cin >> n;
	for(int i=0;i<n;i++) scanf("%d",&p), x.pb(p);
	cin >> q;
	for(int i=0;i<q;i++) scanf("%d",&m[i]);
	sort(x.begin(),x.end());
	for(int i=0;i<q;i++)
	{
		vi::iterator it = upper_bound(x.begin(),x.end(),m[i]);
		printf("%ld\n",it-x.begin());
	}

}