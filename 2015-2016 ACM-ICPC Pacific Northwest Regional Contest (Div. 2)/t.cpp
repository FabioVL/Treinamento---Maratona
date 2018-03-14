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

int a,b,c,d,e,f,ma,mb,mc,md,me,mf;

int main()
{
	cin >> a >> b >> c;
	ma = max(a,max(b,c));
	mc = min(a,min(b,c));
	mb = a+b+c-ma-mc;
	cin >> d >> e >> f;
	md = max(d,max(e,f));
	mf = min(d,min(e,f));
	me = d+e+f-md-mf;
	
	if(ma!=md or mb!=me or mc!=mf) return cout << "NO\n", 0;
	if(ma*ma != mb*mb + mc*mc) return cout << "NO\n", 0;
	cout << "YES\n";
}

