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
const int N=1e6+10;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int s[N],n;
ll a[N];
set<ll> t;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);

	s[1]=1;
	for(int i=2;i*i<N;i++)
	{
		if(s[i]==0)
		for(int j=2*i;j<N;j+=i) s[j]=1; 
	}
	for(ll i=0;i<N;i++) if(s[i]==0) t.insert(i*i);
	for(ll i=0;i<n;i++)
	{
		if(t.count(a[i])>0) printf("YES\n");
		else printf("NO\n");
	}
}