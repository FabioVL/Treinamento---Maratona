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

ll n;

int main()
{
	cin >> n;
	for(ll i=0;i<3000;i++)
		for(ll j=0;j<20000;j++)
		{
			ll a = 1234567*i+123456*j;
			if(a > n) break;
 			if((n-a)%1234 == 0) return  cout << "YES\n", 0;
		}
	cout << "NO\n"; 
}

