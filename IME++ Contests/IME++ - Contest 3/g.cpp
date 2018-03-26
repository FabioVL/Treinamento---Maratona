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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, x, mi, qdig, sobra, dig;
int vo[N], ans[N];

int main()
{
	cin >> n;
	dig = -1;
	mi = INF;
	for(int i=1;i<10;i++)
	{
		scanf("%d",&vo[i]);
		if(vo[i] <= mi) mi = vo[i], dig = i;
	}
	qdig = n/mi;
	for(int i=0;i<qdig;i++) ans[i] = dig;
	sobra = n - qdig*mi;
	int j = 9, p = 0;
	while(j > 0 and p < qdig){
		while(sobra - (vo[j] - vo[dig]) >= 0 and j > dig)
		{
			ans[p] = j;
			p++;
			sobra -= (vo[j] - vo[dig]);
		}
		j--;
	}
	if(qdig == 0) return cout << -1 << endl, 0;
	for(int i=0; i<qdig; i++) printf("%d",ans[i]);
	printf("\n");
	
}

