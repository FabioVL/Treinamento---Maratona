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
const int N=4e2+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, k;
double sum;
double a[N][N];
// a[i][j]: {quantidade de caras, quantas jogadas faltam}

int main()
{
	cin >> n >> k;
	for(int i=0;i<k;i++) a[i][0] = i;
	for(int i=1;i<n;i++)
		for(int j=1;j<=k;j++)
			a[i][j] = 0.5*a[i+1][j-1] + 0.5*a[i][j-1];
	
	for(int i=0;i<=k;i++)
	{	
		for(int j=0;j<n;j++) printf("%lf ", a[i][j]);
		printf("\n");
	}
}

