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

double sum;
int x, n;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		if(x == 0) sum += 2;
		if(x == 1) sum += 1;
		if(x == 2) sum += 0.5;
		if(x == 4) sum += 0.25;
		if(x == 8) sum += 0.125;
		if(x == 16) sum += 0.0625;
	}
	cout << sum << endl;
}

