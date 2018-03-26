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

int n,m,x,y,cont,ma;
int d[N],l[N];

int main()
{
	cin >> n >> m;
	memset(l,63,sizeof(l));
	for(int i=1;i<=n;i++) scanf("%d",&d[i]);
	x = m;
	for(int i=0;i<m;i++) scanf("%d",&y), x += y;
	for(int i=1;i<=n;i++) if(d[i]!=0) l[d[i]] = min(i,l[d[i]]);
	for(int i=1;i<=m;i++) ma = max(l[i], ma);
	for(int i=x;i<=n;i++)
		if(d[i]!=0 and i>=ma) return cout << i << endl, 0;
	cout << -1 << endl;
}

