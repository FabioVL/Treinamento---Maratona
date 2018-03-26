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

int n, mi, dig, x;

int main()
{
	mi = INF;
	cin >> n;
	for(int i=1;i<10;i++) 
	{
		cin >> x;
		if(n/x>=n/mi) mi = x, dig = i;
	}
	if(n < mi) return cout << -1 << endl, 0;
	int s = n - (n/mi)*mi;
	
	for(int i=0;i<n/mi;i++) printf("%d",dig);
	printf("\n");
}
