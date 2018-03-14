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

int n,a,b,c;
int f[N];

int main()
{
	cin >> n >> a >> b >> c;
	f[a] = f[b] = f[c] = 1;
	for(int i = 1; i <= n; i++)
	{
		int i1 = max(i-a,0);
		if(f[i1]==0) f[i1] = -1;
		int i2 = max(i-b,0);
		if(f[i2]==0) f[i2] = -1;
		int i3 = max(i-c,0);
		if(f[i3]==0) f[i3] = -1;
		f[i] = max(max(max(f[i1],f[i2]), f[i3])+1, f[i]);
	}
	cout << f[n] << endl;

}

