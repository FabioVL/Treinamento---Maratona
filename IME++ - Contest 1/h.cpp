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

int a,b;

int main()
{
	cin >> a >> b;
	if(a==1 and b==1) return cout << 0 << endl, 0;
	cout <<  a+b-2 - ((a-b)%3==0) << endl;
}

