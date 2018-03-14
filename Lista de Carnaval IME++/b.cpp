#include <bits/stdc++.h>
using namespace std;

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

int n,p1,p2,a,b;

int main()
{
	scanf("%d",&n);
	while(n!=0)
	{
		p1=0, p2=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			if(a>b) p1++;
			if(b>a) p2++;
		}
		printf("%d %d\n",p1,p2);
		scanf("%d",&n);
	}
}