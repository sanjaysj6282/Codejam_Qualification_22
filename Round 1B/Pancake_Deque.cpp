#include <bits/stdc++.h>
using namespace std;

#define FAST {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

#define ll long long int
#define ld long double

#define pb push_back 
#define pi pair<ll, ll>
#define ff first
#define ss second
#define vi vector<ll> 
#define vb vector<bool>
#define vii vector<pi>
#define vvi vector<vi> 
#define mii map<ll, ll>
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define srt(v) sort(v.begin(), v.end())
#define setcnt(n) __builtin_popcount(n) // no of one’s(set bits)
#define bitcnt(n) (int)log2(n) // no of bits

#define yy cout<<"YES\n"
#define nn cout<<"NO\n"
#define pre(a) {cout << fixed << setprecision(a);}
#define vect(v, n) {rep(i, 0, n){ll x; cin>>x; v.pb(x);}}

const int M=1e4+3, MOD=1e9+7;

ll gcd(ll a,ll b) {if(b==0) return a; return gcd(b,a%b); }
ll lcm(ll a,ll b) {return a/gcd(a,b)*b; }

// Declaring variables
ll n, m, k, t;
string s, s1, s2;


void solve(){
    cin >> n;
    vi v; vect(v, n);

    // deque<ll> dq;
    ll i=0; ll j=n-1;
    ll mx=-1;
    ll cnt=0;
    while(i<j){
        if(mx>v[i] && mx>v[j]){
            break;
        }
        if(v[i]<=v[j] && v[i]>=mx){
            mx=max(mx, v[i]);
            i++;
        }
        else if(v[i]>=v[j] && v[j]>=mx){
            mx=max(mx, v[j]);
            j--;
        }
        else{
            break;
        }
        cnt++;

    }

    cout << cnt+1 <<endl;
}

int32_t main() {
    FAST;

    t=1;
    cin >> t;
    ll cnt=1;
    while (t--) {
        cout << "Case #"<<cnt++<<": ";
        solve();
    }

    return 0;
}
