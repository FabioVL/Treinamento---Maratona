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

ll n,ans;

int main()
{
	cin >> n;
	if(n==1 or n==2) return cout << n << endl, 0;
	if(n==4) return cout << 12 << endl, 0;
	if(n%2==1) return cout << n*(n-1)*(n-2) << endl, 0;
	if(n%3!=0) return cout << n*(n-1)*(n-3) << endl, 0;
	cout << (n-1)*(n-2)*(n-3) << endl;
}