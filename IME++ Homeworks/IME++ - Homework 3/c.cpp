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

string s;
ll ma, k, x;
ll a[N];

int main()
{
	cin >> s;
	int n = s.size();
	cin >> k;
	for(int i=0;i<26;i++) scanf("%lld", &a[i]), ma = max(ma,a[i]);
	int ans = 0;
	for(int i=0;i<n;i++) ans += (a[s[i]-'a'])*(i+1);
	for(int i=n+1;i<=k+n;i++) ans += i*ma;
	cout << ans << endl;
}

