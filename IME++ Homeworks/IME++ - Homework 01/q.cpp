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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll f[N], a, b, ma;

int build(ll n)
{
	if(n==1) return 1;
	if(n%2==0) return build(n/2)+1;	
	return build(3*n+1)+1;
}


int main()
{
	for(int i=1;i<N;i++) f[i] = build(i);
	while(cin >> a >> b)
	{
		printf("%lld %lld ",a,b);
		if(a>b) swap(a,b);
		ma = 0;
		for(int i=a;i<=b;i++) ma = max(ma,f[i]);
		printf("%lld\n",ma);
	}	
}

