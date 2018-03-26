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

int n, x, sum;
int a[N], b[N];
vector<ii> v;

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++) scanf("%d", &a[i]), sum+=a[i];
	sum *= 2;
	sum /= n;	
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]+a[i]==sum and b[j]==0)
				{
					b[i]=1, b[j]=1;
					v.pb(mp(i,j));
					break;
				}
			}
	}
	for(int i=0;i<v.size();i++) printf("%d %d\n", v[i].st, v[i].nd);
}

