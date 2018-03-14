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

int main()
{
	cin >> n;
	if(n%2 == 0) return cout << 4 << " " << n-4 << endl, 0;
	if(n%3 == 0) return cout << 6 << " " << n-6 << endl, 0;
	cout << 9 << " " << n-9 << endl;
}

