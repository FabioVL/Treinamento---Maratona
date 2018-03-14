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
const int N=1e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, x, y, ds[3*N], dd[3*N], sum;


int main()
{
	cin >> n;
	for(int i=0;i<n;i++) 
			cin >> x >> y, ds[x+y]++, dd[1000+y-x]++;

//	for(int i=0;i<20;i++) db(ds[i] _ dd[i]);

	for(int i=0; i<3*N; i++) 
	{
		if(ds[i]>1) sum += ((ds[i]*(ds[i]-1))/2);
		if(dd[i]>1) sum += ((dd[i]*(dd[i]-1))/2);
	}
	cout << sum << endl;
	
	
}

