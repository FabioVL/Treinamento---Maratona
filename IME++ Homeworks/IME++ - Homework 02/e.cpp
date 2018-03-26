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

int t;

int main()
{
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		string a = s;
		string b = s;
		transform(b.begin(), b.end(), b.begin(), ::toupper);
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		sort(s.begin(),s.end());
		if(s == b) cout << a << ": O\n";
		else cout << a << ": N\n";
	}
}

