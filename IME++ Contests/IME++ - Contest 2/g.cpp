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
const int N=1e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int a[N], b[N], n, ma;
int fa[N][N], fb[N][N];

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	for(int i=0;i<n;i++) scanf("%d", &b[i]);
	
	for(int i=0;i<n;i++) fa[i][i] = a[i], fb[i][i] = b[i];

	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			fa[i][j] = fa[i][j-1]|a[j];
			fb[i][j] = fb[i][j-1]|b[j];
		}

	for(int i=0;i<n;i++) for(int j=i;j<n;j++) ma = max(ma,fa[i][j]+fb[i][j]);
	cout << ma << endl;
}

