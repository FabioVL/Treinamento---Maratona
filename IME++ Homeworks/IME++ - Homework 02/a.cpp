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

vector<ii> v;
int n,x,y;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{	
		cin >> x >> y;
		v.pb(mp(x,y));
	}
	if(n == 1) return cout << "Poor Alex\n", 0;
	sort(v.begin(), v.end());
	for(int i=0;i<n-1;i++) if(v[i].nd>v[i+1].nd) return cout << "Happy Alex\n", 0;
	cout << "Poor Alex\n";
}

