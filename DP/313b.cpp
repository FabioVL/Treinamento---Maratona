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

string s;
int n,l,r;
int a[N];

int main()
{
	cin >> s;
	for(int i=s.length();i>=0;i--) a[i] = a[i+1] + (s[i]==s[i+1]);
	cin >> n;
	while(n--)
	{
		scanf("%d%d", &l, &r);
		printf("%d\n", a[l-1]-a[r-1]);
	}
}