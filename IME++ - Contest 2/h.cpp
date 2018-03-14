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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,q,x,pt;
int a[N], resp[N];

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++) scanf("%d",&x), a[i] = a[i-1]+x;
	for(int i=0;i<N;i++)
	{
		if(i>a[pt]) pt++;
		resp[i] = pt;
	}
	cin >> q;
	for(int i=0;i<q;i++)
	{
		scanf("%d",&x);
		printf("%d\n",resp[x]);
	}
}

