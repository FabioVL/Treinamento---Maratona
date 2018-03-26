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

int n, m;
int a[N], vis[N];

int main()
{
	cin >> n >> m;
	for(int i=1;i<n;i++) cin >> a[i];
	int p = 1;
	vis[1] = 1;
	while(p<n)
	{
		p += a[p];
		vis[p] = 1;
	}
	if(vis[m] == 1) return cout << "YES\n", 0;
	cout << "NO\n";
}

