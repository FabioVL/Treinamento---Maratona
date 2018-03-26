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

string s, ans;
int a[5];
int b[5];
int cont;
string name[] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};

int main()
{
	cin >> s;
	for(int i=0;i<5;i++) a[i] = s.find(name[i]), b[i] = s.rfind(name[i]);
	for(int i=0;i<5;i++) if(a[i]!=b[i]) return cout << "NO\n", 0;
	for(int i=0;i<5;i++) if(a[i]!=-1) cont++;
	if(cont == 1) return cout << "YES\n", 0;
	cout << "NO" << endl;
}

