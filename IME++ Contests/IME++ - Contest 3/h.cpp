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

int n;
stack<string> p;
string s, name;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		if(s == "Sleep")
		{
			cin >> name;
			p.push(name);
		}
		if(s == "Test")
		{
			if(p.size()==0) cout << "Not in a dream\n";
			else cout << p.top() << endl;
		}
		if(s == "Kick")
			if(p.size() != 0)	p.pop();
	}
}

