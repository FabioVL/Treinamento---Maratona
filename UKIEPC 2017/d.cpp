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

string s, a;
vector<ii> v;

int main()
{
	cin >> s;
	a = s;
	sort(a.begin(), a.end());

	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=s[i])
		{
			for(int j=i;j<s.size();j++)
			{
				if(a[i]==s[j])
				{
					v.pb(mp(i+1,j+1));	
					swap(s[i],s[j]);
					break;
				}
			}
		}
	}
	for(int i=v.size()-1;i>=0;i--) printf("%d %d\n", v[i].nd, v[i].st);
}

