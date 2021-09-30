#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;


using namespace std;

#define int         long long
#define ld          double
#define vi          vector <int>
#define vp          vector <pair<int,int>>
#define vvi         vector <vector <int>>
#define pb          push_back
#define mp          make_pair
#define pi          pair<int,int>
#define all(a)      a.begin(),a.end()
#define sz(a)       a.size()
#define sl(a)       a.length()
#define rev(a)      sort(all(a),greater<int>())
#define ff          first
#define ss          second
#define minel(a)	*min_element(all(a))
#define maxel(a)	*max_element(all(a))
#define Mod         1000000007
#define deb(x)      cout << x << endl;
#define o(x)        for(auto a:x)cout << a <<" ";cout << endl;
#define o2(x,n,m)   for(int i =0;i<n;i++){for(int j=0;j<m;j++)cout << x[i][j] << " ";cout << endl; } 
#define i(x,n)      for(int i=0;i<n;i++)cin >> x[i];
#define i2(x,n,m)   for(int i =0;i<n;i++){for(int j=0;j<m;j++)cin >> x[i][j]; }
int inf = 1e18;


#define ordered_set                            \
    tree<int, null_type, less<int>, rb_tree_tag, \
         tree_order_statistics_node_update>

//vvi a(n, vi(10));

int power(int a,int b, int m);
int gcd(int a,int b);
int lcm(int a,int b);
vi prime_factors(int n);
vi SieveOfEratosthenes(int n);


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "My template";

    
}

//utility function

int power(int a,int b,int m)
{
    int ans = 1;
    while(b > 0)
    {
        if(b&1){ans *= a;ans %= m;}
        a *= a;
        a %= m;
        b >>= 1;
    }
    return ans;
}
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}
int lcm(int a,int b)
{
    int g = gcd(a,b);
    return(a*b/g);
}

vi prime_factors(int n)
{
    vi a;
    while (n % 2 == 0)  { a.pb(2); n = n/2;}  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {while (n % i == 0) {a.pb(i); n = n/i;}}  
    if (n > 2)  a.pb(n); 
    return a;
}

vi SieveOfEratosthenes(int n)
{
    vi a;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
       if (prime[p])
           a.pb(p);

    return a;
}

