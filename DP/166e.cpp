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
const int N=1e7+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n;
ll d[N],p[N];

int main()
{
	cin >> n;
	d[0]=1, p[0]=1;
	for(int i=1;i<=n;i++)
	{
		p[i]=(p[i-1]*3)%MOD;
		d[i]=(p[i-1] - d[i-1] + MOD)%MOD;
	}
	db(p[n-1] _ d[n-1]);
	cout << d[n] << endl;
}

