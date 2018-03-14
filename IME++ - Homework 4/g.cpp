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

int n, k, ac;
vi p;

int main()
{
	cin >> n >> k;
	ac = 1;
	for(int i=2;i*i<=n;i++)
		while(n%i==0) p.pb(i), n/=i;
	if(n>1) p.pb(n);
	if(k>p.size()) return cout << -1 << endl, 0;
	for(int i=0;i<k-1;i++) printf("%d ",p[i]);
	for(int i=k-1;i<p.size();i++) ac *= p[i];
	printf("%d\n", ac);
}

