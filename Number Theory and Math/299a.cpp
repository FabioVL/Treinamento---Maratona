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

int n,x;
vi a;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) scanf("%d",&x), a.pb(x);
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
		if(a[i]%a[0]!=0) return cout << -1 << endl, 0;
	
	cout << a[0] << endl;
}