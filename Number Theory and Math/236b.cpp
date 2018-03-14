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
const int MOD=1073741824;
const int INF=0x3f3f3f3f;

int a, b, c;
int di[N];
int ans;

int main()
{
	cin >> a >> b >> c;
	for(int i=1;i<=N;i++) for(int j=i;j<N;j+=i)	di[j]++;
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
			for(int k=1;k<=c;k++) ans += (di[i*j*k]);
	printf("%d\n",ans);
}