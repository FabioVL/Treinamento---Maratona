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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, k;

int main()
{
	cin >> n >> k;
	if (n==k) return cout << -1 << endl, 0;
	printf("%d ", n-k);
	for(int i=1;i<=n-k-1;i++) printf("%d ",i);
	for(int i=n-k+1;i<=n;i++) printf("%d ", i);
	printf("\n");
}