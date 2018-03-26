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

map<ii, string> m;
int n, t, x, y;
string s;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y >> s;
		m[mp(x,y)] = s;
	}
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> x >> y;
		cout << m[mp(x,y)] << endl;
	}
}

