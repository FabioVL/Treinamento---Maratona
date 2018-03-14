#include <bits/stdc++.h>
#include <tuple>
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

int n, cont;
int a[5];
map<tuple<int,int,int,int,int>,int> m;

int main()
{
	cin >> n;
	while(n!=0)
	{
		m.clear();
		cont = 0;
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<5;i++) cin >> a[i];
			sort(a,a+5);
			m[make_tuple(a[0],a[1],a[2],a[3],a[4])]++;
		}
		int ma = 0;
		for(auto e : m) ma = max(ma, e.nd); 
		for(auto e : m) if(e.nd == ma) cont += e.nd ;
		cout << cont << endl;

		cin >> n;
	}
}

