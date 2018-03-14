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

int n, k1, k2, v, cont, x, t1, t2;
queue<int> q1, q2;

int main()
{
	cin >> n;
	cin >> k1;
	for(int i=0;i<k1;i++) 
	{
		cin >> x, q1.push(x);
		if(x == n) v = 1;
	}
	cin >> k2;
	for(int i=0;i<k2;i++) 
	{
		cin >> x, q2.push(x);
		if(x == n) v = 2;
	}
	while(cont<1000)
	{
		if(q1.empty() or q2.empty())
			return cout << cont << " " << v << endl, 0;
		t1 = q1.front();
		t2 = q2.front();
		if(t1 > t2) q1.pop(), q2.pop(), q1.push(t2), q1.push(t1);
		else q1.pop(), q2.pop(), q2.push(t1), q2.push(t2);
		cont++;
	}
	cout << -1 << endl;
}

