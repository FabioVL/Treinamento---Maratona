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

double n, sum;
int x;
double a[] = {32,16,8,0,4,0,0,0,2,0,0,0,0,0,0,0,1};

int main()
{
	
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		sum += a[x];
	}
	printf("%.12lf\n", sum/16);
//	cout << sum/16 << endl;
}

