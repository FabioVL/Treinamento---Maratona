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

int n,ans,s;
int a[N];
unordered_map<int,int> m;


int main()
{
	cin >> n;
	for (int i=0; i<n; i++) scanf("%d",&a[i]);
	while (n--)
	{
		s = a[n];
		for (int i=2; i*i<=s; i++)
		{
			if (s%i==0) m[i]++;
			while (s%i==0) s/=i;
		}
		if (s>1) m[s]++;
	}
	ans = 1;
	for (auto it=m.begin(); it!=m.end(); it++)
		ans = max(ans,(*it).second);
	cout << ans << endl;
}