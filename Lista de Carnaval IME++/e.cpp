#include <bits/stdc++.h>
using namespace std;

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

double a,b,c,d;

int main()
{
	cin >> a >> b >> c >> d;
	printf("%.4f\n",sqrt((c-a)*(c-a)+(d-b)*(d-b)));
}