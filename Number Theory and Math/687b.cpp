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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, k, x, y, c;
int sieve[N],p[N];


int main()
{
	cin >> n >> k;
	for(int i=2;i<N;i++)
	{
		if(sieve[i]==0)
			for(int j=i;j<N;j+=i) sieve[j] = i;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		while(x>1)
		{
			y = sieve[x];
			c = 0;
			while(x%y==0) c++, x/=p;
		}
		p[y] = max(p[y],c);
	}
	
}