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

string s;
set<char> c;
int a[N], mi;

int main()
{
	cin >> s;
	mi = INF;
	for(int i=0;i<s.length();i++) c.insert(s[i]), a[s[i]-'a']++;
	if(c.size()>4 or s.length()<4) return cout << "No\n", 0;
	for(int i=0;i<26;i++) if(a[i]!=0) mi = min(a[i],mi);
	if(c.size()==2 and mi == 1) return cout << "No\n", 0;
	if(c.size() == 1) return cout << "No\n", 0;
	cout << "Yes\n";

}
