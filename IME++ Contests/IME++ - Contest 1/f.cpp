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

int n,x;
int d0[] = {1, 2, 2, 1, 0, 0};
int d1[] = {0, 0, 1, 2, 2, 1};
int d2[] = {2, 1, 0, 0, 1, 2};

int main()
{
	cin >> n >> x;
	if(d0[(n-1)%6] == x) return cout << "0\n", 0;
	if(d1[(n-1)%6] == x) return cout << "1\n", 0;
	cout << "2\n";
}

