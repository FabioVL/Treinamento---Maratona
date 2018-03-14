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

int a,m,in,f,cont;

int main()
{
	cin >> a >> m;
	in = a;
	while(a%m!=0 and a!=f and cont<30)
	{
		a = (a*2)%m;
		if(a==in) return cout << "No\n", 0; 
		cont++;
	}
	if(cont == 30) return cout << "No\n", 0;
	cout << "Yes\n";
}

