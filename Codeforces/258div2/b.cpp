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

int n, a[N], aux[N], cont, l, r, i;

int main()
{
	cin >> n;
	for(i=1; i<=n; i++) cin >> a[i];

	for(i=1;i<n;i++){
	
		if(a[i]>a[i+1]) 
		{
			l=i;
			break;
		}	
	}
	
	for(i=l;i<n;i++){

		if(a[i]<a[i+1])
		{
			r=i;
			break;
		}
	}	
	if(i==n) r=n;
	reverse(a+l,a+r+1);
	for(i=1; i<=n; i++) if(a[i] > a[i+1]) break;
	if(i==n) return printf("yes\n%d %d\n", l+(l==0), r+(r==0)), 0;	
	cout << "no" << endl;
}
















