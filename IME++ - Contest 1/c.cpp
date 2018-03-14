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

int n,a,b,ma;
string s;
int dm[500],df[500];

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> s >> a >> b;
		for(int i=a;i<=b;i++) s == "M" ? dm[i]++ : df[i]++;
	}
	for(int i=0;i<500;i++) ma = max(ma,min(dm[i],df[i]));
	cout << ma*2 << endl;
}

