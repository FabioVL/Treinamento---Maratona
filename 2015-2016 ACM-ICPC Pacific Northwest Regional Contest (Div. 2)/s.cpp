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
const int N=3e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int f[N],w[N];
int n,ma,x,a,b;

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d",&x, &a, &b);
		f[x] = a, w[x] = b;
	}	

//	for(int i=N;i>=1;i--) f[i] += f[i+max(w[i],1)];
	for(int i=N-1;i>=1;i--) f[i] = max(f[i+w[i]]+f[i],f[i+1]);
//	for(int i=1;i<=N;i++) ma = max(ma,f[i]);
	cout << f[1] << endl;
}

