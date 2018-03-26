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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, ans, val;
map<string, int> m;
int a[10];
string s;

int main()
{
	cin >> n;
	m["red"] = 1;
	m["yellow"] = 2;
	m["green"] = 3;
	m["brown"] = 4;
	m["blue"] = 5;
	m["pink"] = 6;
	m["black"] = 7;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		a[m[s]]++;
	}
	for(int i=1;i<8;i++) if(a[i]>0) val = i;
	if(val == 1) return cout << 1 << endl, 0;
	ans = a[1]*(val!=1)*(val+1);
	for(int i=2;i<8;i++) if(a[i]>0) ans += i;
	cout << ans << endl;
}









