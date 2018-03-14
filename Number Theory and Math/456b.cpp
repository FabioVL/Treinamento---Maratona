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

int r[4] = {4,0,0,0};
string s;

int main()
{
	cin >> s;
	int n=s.length();
	char c1 = s[n-1];
	int ans = (c1-'0');
	if(n>1) ans += (s[n-2] - '0')*10;
	ans = ans % 4;
	printf("%d\n",r[ans]);
	
}