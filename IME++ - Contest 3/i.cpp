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

int n,x,ma;
map<string,int> m;
string s;

int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s;
		m[s]++;
	}
	for(auto u : m) ma = max(u.nd,ma);
	cout << ma << endl;
}

