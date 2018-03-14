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
const int N=1e7+1;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,m;
int x[N],l,r,a,sieve[N],qp[N];

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		x[a]++;
	}

	for(int i=2;i<N;i++)
	{
		if(sieve[i]==0)
			for(int j=i;j<N;j+=i)
			{
				sieve[j] = 1;
				qp[i] += x[j];
			}
	}

	for(int i=2;i<N;i++) qp[i] += qp[i-1];
	cin >> m;

	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&l,&r);
		if(l>=N)
	 	{
			printf("0\n");
			continue;
	 	}
	 	if(r>=N) r = N-1;
		printf("%d\n",qp[r]-qp[l-1]);
	}
}