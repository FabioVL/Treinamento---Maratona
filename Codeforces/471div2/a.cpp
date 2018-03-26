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

double hh, mm, h20;
int d,c,res;
int h,n;

int main()
{
	cin >> hh >> mm;
	cin >> h >> d >> c >> n;

	mm += hh*60;
	h20 = 20*60;
	if(mm >= h20)
	{
		res = (h*c*4)/(5*n);
		res = h/n + (h%n!=0);
		res *= c;
		return printf("%.6f\n",res*.8), 0;
	}
	int b = h/n + (h%n!=0);
	b *= c;
	int a = h + (h20 - mm)*d;
	a = a/n + (a%n!=0);
	a *= c;
	double a1 = (a*4)/5;
	double res1 = min(a1,(double)b);
	printf("%.6f\n", res1);
}
















