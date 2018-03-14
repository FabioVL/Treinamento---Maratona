#include <bits/stdc++.h>
// http://codeforces.com/problemset/problem/26/A
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=9e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int sieve[N];
int n,j,cont;

int main()
{
	cin >> n;
	for(int i=2;i*i<N;i++)
	{
		if(sieve[i]==0)
			for(int j=2*i;j<N;j+=i) sieve[j]++;
	}
	for(int i=2;i<=n;i++) if(sieve[i]==2) cont++;
	printf("%d\n", cont);
}