#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-6;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

double n,a,soma,l,r;
vi c;
int x;

double f(double val)
{
	double ans = 0;
	for(int i=0;i<n;i++) ans += max((double)0,c[i]-val);
	return ans;
}


int main()
{
	cin >> n >> a;
	while(n!=0 or a!=0)
	{
		int fl = 0;
		soma = 0;
		c.clear();
		for(int i=0;i<n;i++) scanf("%d",&x), c.pb(x), soma += c[i];
		sort(c.rbegin(),c.rend());
		if(a > soma) cout << "-.-" << endl;
		else if(a == soma or a == 0) cout << ":D" << endl;
		else
		{
			l = 0, r = c[0];
			double m;
			while(r-l>EPS and fl != 1)
			{
				m = (l+r)/2;
				if(fabs(f(m)-a) < EPS) fl = 1;
				else if(f(m)-a < -EPS) r = m;
				else l = m;
			}
			printf("%.4f\n",m);
		}
		cin >> n >> a;
	}
}