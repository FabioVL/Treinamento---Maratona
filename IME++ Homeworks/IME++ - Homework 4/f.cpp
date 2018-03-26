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

ll n,l,r,p;

int main()
{
	cin >> n;
	p=1;
	if(n<=2) return cout << -1 << endl, 0;
	if(n%2==1) return cout << (n*n)/2 << " " << (n*n)/2+1 << endl, 0;
	while(n%2==0) p*=2, n/=2;
	if(n==1) return printf("%lld %lld\n",(p/4)*3,(p/4)*5), 0;
	l = n*n/2, r = n*n/2+1;
	printf("%lld %lld\n", l*p, r*p);
}

