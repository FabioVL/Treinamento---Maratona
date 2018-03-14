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

int n,p,a;

int isPrime(int n)
{
	if(n<=1) return 0;
	if(n==2 or n==3) return 1;
	for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
	return 1;
}

int main()
{
	cin >> n;
	if(isPrime(n)==1) return printf("1\n%d\n",n), 0;
	if(isPrime(n-2)==1) return printf("2\n%d %d\n",n-2,2), 0;

	a = n;
	while(p==0)
	{
		p = isPrime(n);
		n--;
	}
	n++;
	printf("3\n");
	printf("%d ",n);
	a -= n;
	for(int i=2;i<=a;i++)
	{
		if(isPrime(i)==1 and isPrime(a-i)==1)
			return printf("%d %d\n",i,a-i), 0;
	}
}