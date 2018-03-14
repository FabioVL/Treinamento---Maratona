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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, sieve[N];
vi v,p;

int main()
{
	cin >> n;

	sieve[0]=sieve[1]=-1;
	for(int i=2;i*i<N;i++)
	{
		if(sieve[i]==0)
			for(int j=2*i;j<N;j+=i) sieve[j]=1;
	}
	
	for(int i=2;i<n;i++) if(sieve[i]==0) p.pb(i);
	// for(int i=0;i<p.size();i++) printf("%d ", p[i]);
	// printf("\n");
	for(int i=0;i<p.size();i++)
	{
		int a = p[i];
		while(a<=n)
		{
			v.pb(a);
			a *= p[i];
		}
	}

	cout << v.size() + (sieve[n]==0) << endl;
	for(int i=0;i<v.size();i++) printf("%d ",v[i]);
	if(sieve[n]==0) printf("%d ",n);
	printf("\n");
}