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
int n, a[30], cont;

int main()
{
	cin >> s;
	while(!cin.eof())
	{
		cont = 0;
		memset(a,0,sizeof(a));
		n = s.length();
		for(int i=0;i<n;i++) a[s[i]-'a']++;
		for(int i=0;i<30;i++) if(a[i]%2==1) cont++;
		printf("%d\n",max(0,cont-1));
		cin >> s;
	}
}