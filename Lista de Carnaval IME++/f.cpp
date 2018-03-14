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

int n,a,b,aux;

int main()
{
	cin >> n;
	a = 0, b = 1;
	if(n==0) return cout << endl, 0;
	if(n==1) return cout << 0 << endl, 0;
	printf("0 1");
	for(int i=1;i<n-1;i++)
	{
		aux = b;
		b = a+b;
		a = aux;
		printf("% d",b);
	}
	printf("\n");
}