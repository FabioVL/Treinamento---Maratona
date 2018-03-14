#include <bits/stdc++.h>
// http://codeforces.com/problemset/problem/546/D
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=5e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int t,a,b;
int sieve[N],p[N];

int main()
{

	for(int i=1;i<N;i++) sieve[i] = 1;
	for(int i=2;i*i<N;i++)
	{
		if(sieve[i]==1)
		for(int j=i;j<N;j+=i) if (sieve[j] == 1) sieve[j] = i;
	}	
	for(int i=2;i<N;i++) p[i] = p[i/sieve[i]] + 1;
	for(int i=1;i<N;i++) p[i] += p[i-1];

	cin >> t;
	while(t--)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",p[a]-p[b]);
	}
}