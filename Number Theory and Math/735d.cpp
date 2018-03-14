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

int n;
int sieve[N];

int primo(int n)
{
	for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
	return 1;
}

int main()
{
	cin >> n;
	int ans = primo(n);
	if(ans==1) return cout << 1 << endl, 0;
	if(n%2==0) return cout << 2 << endl, 0;
	ans = primo(n-2);
	if(ans==1) return cout << 2 << endl, 0;
	cout << 3 << endl;
}