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
int a[N];

bool comp(int i, int j) { return i > j; }

int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++) scanf("%d", &a[i]);
	sort(a+1,a+n+1,comp);
	for(int i=1;i<=n;i++) a[i] += a[i-1];
	int i;
	for(i=1;a[i]<m;i++);
	cout << i << endl;
}

