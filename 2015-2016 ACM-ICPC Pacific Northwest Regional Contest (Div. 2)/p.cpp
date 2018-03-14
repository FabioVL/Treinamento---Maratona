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
int a[N];

int main()
{
	cin >> s;
	for(int i=0;i<s.length();i++) a[s[i]-'a']++;
	sort(a,a+26);
	cout << s.length()-a[25]-a[24] << endl;
}

