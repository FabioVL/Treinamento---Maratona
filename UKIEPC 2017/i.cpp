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

int a[20];
int n, t, mi, dig;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	cin >> t;
	dig = a[0];
	for(int i=1;i<n;i++) if(t%a[i] < t%dig) dig = a[i];
	cout << dig << endl;
}

