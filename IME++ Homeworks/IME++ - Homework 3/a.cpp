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

int x,y,a,b;
vi v1, v2;

int main()
{
	cin >> x >> y >> a >> b;
	for(int i=a;i<=x;i++)
		for(int j=b;j<=min(i-1,y);j++)
			v1.pb(i), v2.pb(j);

	cout << v1.size() << "\n";
	for(int i=0;i<v1.size();i++)
		cout << v1[i] << " " << v2[i] << "\n";
}

