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

int n, x;
vi v;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) scanf("%d",&x), v.pb(x);
	sort(v.begin(), v.end());
	for(int i=0;i<v.size()-2;i++)
	{
		int a = v[i], b = v[i+1], c = v[i+2];
		if(a + b > c) return cout << "YES\n", 0;
	}
	cout << "NO\n";
}

