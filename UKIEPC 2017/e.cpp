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

int n,m,x;
map<ii, int> ma;
int p[N], r[N];
vector<ii> s;
int v[N];

bool comp(ii a, ii b)
{
	return a.st > b.st;
}

int main()
{
	cin >> n >> m;
	for(int i=0;i<n;i++) scanf("%d", &x), s.pb(mp(x,i));
	sort(s.begin(), s.end(), comp);
	for(int i=0;i<m;i++) scanf("%d", &p[i]);
	for(int i=0;i<m;i++) scanf("%d", &r[i]);
	for(int i=0;i<m;i++) ma[(mp(r[i], i))] = p[i];
	for(int i=0;i<n;i++)
		for(auto it : ma)
		{
			if(s[i].st <= it.nd) 
			{
				v[s[i].nd] = (it.st.nd+1);
				ma.erase(mp(it.st.st,it.st.nd));
				break;
			}
		}
	for(int i=0;i<n;i++) 
		if(v[i]==0) return cout << "impossible" << endl, 0;
	for(int i=0;i<n;i++) printf("%d ", v[i]);
	printf("\n");
}

