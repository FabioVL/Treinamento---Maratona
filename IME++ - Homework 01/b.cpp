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

int a, b, c;

int main()
{
	while(cin >> a >> b >> c)
	{
		if(a==b and b==c) printf("*\n");
		if(a==b and a!=c) printf("C\n");
		if(a==c and a!=b) printf("B\n");		
		if(b==c and b!=a) printf("A\n");	
	}
}
