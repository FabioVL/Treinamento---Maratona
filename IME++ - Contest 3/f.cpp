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
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int t, n;
int a[N], L[N], R[N];
ll cont;

void merge(ll l, ll m, ll r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	for(int i=0; i<n1; i++) L[i] = a[l+i];
	for(int i=0; i<n2; i++) R[i] = a[m+1+i];
	int i = 0, j = 0, k = l;
	while(i < n1 and j < n2)
	{
		if(L[i] <= R[j]) a[k] = L[i], i++;
		else a[k] = R[j], j++, cont+=n1-i;
		k++;
	}
	while(i < n1) a[k] = L[i], i++, k++;
	while(j < n2) a[k] = R[j], j++, k++;
}

void mergesort(int l, int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
		mergesort(l, m);
		mergesort(m+1, r);
		merge(l, m, r);
	}
}

int main()
{
	cin >> t;
	while(t--)
	{
		cont = 0;
		memset(a,0,sizeof(a));
		cin >> n;
		for(int i=0;i<n;i++)	scanf("%d",&a[i]);
		mergesort(0, n-1);
		cout << cont << endl;
	}
}

