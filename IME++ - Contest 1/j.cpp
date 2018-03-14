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

int n,a,b,ce,cd;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b;
		if(a > 0) cd++;
		if(a < 0) ce++;
	}
	if(cd == 0 or cd == 1 or ce == 0 or ce ==1)
		return cout << "Yes\n", 0;
	cout << "No\n";
}

