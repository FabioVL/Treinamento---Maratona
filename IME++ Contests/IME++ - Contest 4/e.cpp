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

vi fact;
int n, k;

int main()
{
	cin >> n >> k;
	for(int i=2;i*i<=n;i++)
		while(n%i==0)	fact.pb(i), n/=i;

	if(n>1) fact.pb(n);
	int ans = 1;
	if(fact.size() < k) return cout << -1 << endl, 0;
	for(int i=0;i<k-1;i++) printf("%d ", fact[i]);
	for(int i=k-1;i<fact.size();i++) ans*=fact[i];
	printf("%d\n",ans);

}

