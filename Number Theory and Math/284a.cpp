#include <bits/stdc++.h>
// http://codeforces.com/problemset/problem/284/A
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=2e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n;

int phi(int n)
{
	int ans = n;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
		{
			while(n%i==0) n/=i;
			ans -= ans/i;
		}
	if(n>1) ans -= ans/n;
	return ans;
}

int main()
{
	cin >> n;
	printf("%d\n",phi(n-1));
}