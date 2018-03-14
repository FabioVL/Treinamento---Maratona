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
	cin.ignore();
	while(t--)
	{
		stack<char> p;
		string s;
		getline(cin, s);
		if(s.length()==0) printf("Yes\n");
		else
		{
			int n = s.length();
			for(int i=0;i<n;i++)
			{
				if(s[i] == '(' or s[i] == '[') p.push(s[i]);
				if(s[i] == ')')
				{
					if(p.size()!=0)
					{	
						if(p.top() == '(') p.pop();
						else p.push(s[i]);
					}
					else p.push(s[i]);
				}
				if(s[i] == ']')
				{
					if(p.size()!=0)
					{	
						if(p.top() == '[') p.pop();
						else p.push(s[i]);
					}
					else p.push(s[i]);
				}
			}
			if(p.size()==0) printf("Yes\n");
			else printf("No\n");
		}
	}
}

