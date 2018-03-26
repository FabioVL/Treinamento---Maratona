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

ll n, a, b, aux, ans;

int main()
{
	cin >> n;
	if(n == 2 or n == 3) return cout << n-1 << endl, 0;
	a = 1, b = 1;
	while(a<=n)
	{
		aux = a;
		a += b;
		b = aux;
		ans++;
	}
	cout << ans-1 << endl;
}

