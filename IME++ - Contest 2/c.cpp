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
int a[N];

int main()
{
	cin >> n;
	while(n!=0)
	{	
		stack<int> p1, p2;
		p2.push(0);
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) 
		{
			if(a[i] == p2.top()+1) p2.push(a[i]);
			if(a[i] > p2.top()+1) p1.push(a[i]);
			while(p1.size()>0 and p1.top() == p2.top()+1)
				p2.push(p1.top()), p1.pop();			
		}
		for(int i=0;i<n;i++)
			if(p1.size()!=0) 
				if(p1.top() == p2.top()+1) p2.push(p1.top()), p1.pop();

		if(p1.size()!=0) printf("no\n");
		else printf("yes\n");
		cin >> n;
	}
}

