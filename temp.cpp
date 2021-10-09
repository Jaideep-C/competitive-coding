#include <bits/stdc++.h>
using namespace std;

// MACROS
#define int 			long long
#define FAST        	ios_base::sync_with_stdio(false);cin.tie(NULL)
#define FILE        	freopen("inp.txt", "r", stdin);freopen("out.txt", "w", stdout)
#define inf 			LLONG_MAX;
#define F 				first
#define S 				second
#define MAX(x, y) 		(((x) > (y)) ? (x) : (y))
#define MIN(x, y) 		(((x) < (y)) ? (x) : (y))
#define mod(x) 			(((x) >= 0) ? (x) : (-x))
#define deb(x)			cout<< #x <<" "<< x <<"\n";
#define all(x) 			(x).begin(), (x).end() 
#define rall(x) 		(x).rbegin, (x).rend()
#define tr(c,i) 		for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define cpresent(c,x) 	(find(all(c),x) != (c).end())
#define pb(a)			push_back(a)
#define pf(a)			push_front(a)
#define mp(a,b)			make_pair(a,b)

// Kind of Macros
typedef vector<int>	 			vi;
typedef vector<vector<int>> 	vvi;
typedef vector<bool>			vb;
typedef vector<pair<int,int>>	vp;
typedef set<int>				si;

// TEMP_FUNCTION`S
template<typename... T>
void read(T&... args);
template<typename... T>
void write(T&&... args);
void __testCase(int t);
int mpow(int base, int exp);
int gcd(int a, int b);
/*
 * 
 * CodeStarts here
 * 
 */
const int mod = 1'000'000'007;
const bool isTestCase=true;
void solve(){

}

int32_t main() {
	FAST;
	int t = 1;
	if(isTestCase)
		cin >> t;
	
	__testCase(t);
	
	return 0;
}

int mpow(int base, int exp) {
	base %= mod;
	int result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((int)result * base) % mod;
		base = ((int)base * base) % mod;
		exp >>= 1;
	}
	return result;
}

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void write(T&&... args) { 
	((cout << args << " "), ...);
	cout<<"\n";
}

void __clock() {
	#ifdef ONPC
		cout << "__________________________";
		cerr << endl
			 << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
	#endif
}

void __testCase(int t) {
	#ifdef ONPC
		cout << "__________________________\n";
	#endif
	while (t--)
		solve();
	__clock();
}
