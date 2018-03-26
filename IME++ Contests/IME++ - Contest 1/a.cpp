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

string s1,s2,w;
int a[15], e[15], c[15], ld[15], le[15], hd;
int n;

int main()
{
	cin >> n;
	while(n--)
	{
		int c = 3;
		while(c--)
		{
			cin >> s1 >> s2 >> w;
			if(w == "even")
				for(int i=0;i<4;i++) e[s1[i]-'a']=1, e[s2[i]-'a']=1, c[s1[i]-'a']=0, c[s2[i]-'a']=0;
			if(w == "up")
				for(int i=0;i<4;i++) a[s1[i]-'a']--, a[s2[i]-'a']++, c[s2[i]-'a']=1, c[s1[i]-'a']=1;
			if(w == "down")
				for(int i=0;i<4;i++) a[s1[i]]++, a[s2[i]]--;
		}
		int cz = 0;
		char c;
		for(int i=0;i<12;i++)
			if(e[i]==0) cz++, c = 'a'+i;

		if(cz == 1) cout << c << " is the counterfeit coin and "

		for(int i=0;i<12;i++)
		if(e[i]==0)
		{
			if(a[i] > 0) cout << 'a'+i << " is the counterfeit coin and it is light.\n";
			else if(a[i] < 0) cout << 'a'+i << " is the counterfeit coin and it is heavy\n";
		}
	}
}


/*

   A  B  C  D  E  F  G  H  I  J  K  L
a -1 -1 -1  0  1  1  0  0 -1  1  1  0
e  1  1  1  1  1  1  1  1  1  1  0  0

caso: 
ABCD EFGH even
ABCI EFJK up
ABIK EFGJ down

a  0  0 -1  0  0  0 -1  0  0  0  2  0
e  1  1  1  1  1  1  1  1  0  0  0  0


*/
















