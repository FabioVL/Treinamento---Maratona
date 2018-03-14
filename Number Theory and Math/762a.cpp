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

ll n,k;
set<ll> s;

int main()
{
	cin >> n >> k;
	for(ll i=1;i*i<=n;i++)
		if(n%i==0) s.insert(i), s.insert(n/i);
	for(auto it = s.begin();it!=s.end();it++)
	{
		k--;
		if(k==0) return cout << *it << endl, 0;
	}
	cout << -1 << endl;
}