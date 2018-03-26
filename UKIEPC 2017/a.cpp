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
const int N=5e4+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int a[22][N];
int n, l, r, t[22];

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> t[i] >> l >> r;
		for(int j=0;j<t[i];j++) 
		{
			if(l<r) 
			{
				if(j<=l or j>=r) a[i][j] = 1;
			}
			else 
			{
				if(j>=r and j<=l) a[i][j] = 1;
			}
		}
	}
/*
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t[i];j++) printf("%d ", a[i][j]);
		printf("\n");
	}
*/

	for(int i=0;i<=182500;i++)
	{
		int sum = 0;

		for(int j=0;j<n;j++)
			sum += a[j][i%t[j]];

		if(sum == n) return cout << i << endl, 0;
	}
	cout << "impossible" << endl;
}
















