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

int t,n,m,w[N];

int main()
{
	cin >> t;
	while(t--)
	{
		memset(w,0,sizeof(w));
		cin >> n >> m;
		int cont=0;
		for(int i=0;i<n;i++) scanf("%d",&w[i]);
		sort(w,w+n);
		for(int i=0;i<n;i++) if(m-w[i]>0) cont++, m -= w[i];
		cout << cont << "\n";
	}
}

