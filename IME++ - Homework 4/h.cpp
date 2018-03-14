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
int sieve[N];

int main()
{
	cin >> n;
	cout << n/2 << endl;
	if(n%2==0) printf("2 "), n-=2;
	else printf("3 "), n-=3;
	while(n!=0) printf("2 "), n-=2;
	printf("\n");
}

