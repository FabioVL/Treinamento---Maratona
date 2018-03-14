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
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

string t, p;
int a[N],x;

int main()
{
	cin >> t >> p;
	int n = t.length(), m = p.length();
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x-1] = i;
	}
	int l=0, r=n;
	while(r-l>1)
	{
		int mid = (l+r)/2;
		int j = 0;
		for(int i=0;i<n;i++)
			if(t[i] == p[j] and mid <= a[i]) j++;
		if(j==m) l = mid;
		else r = mid;
	}
	cout << l << endl;
}








