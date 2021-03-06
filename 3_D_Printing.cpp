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
ll n, m, t;
string s, s1, s2;

/*
    Idea

    3 D's but all have to be in same color
    ith row is i'th printer with 4 catridges
    total ink to print 1 D is exactly 10^6

*/
void solve(){
    vi v1, v2, v3;
    vii vmin;
    vect(v1, 4);
    vect(v2, 4);
    vect(v3, 4);

    ll sum=0;
    rep(i, 0, 4){
        vmin.pb({min(min(v1[i], v2[i]), v3[i]), i});
        sum += vmin[i].ff;
        // cout << vmin[i].ff << " ";
    }

    srt(vmin);

    if(sum<1e6){
        cout << "IMPOSSIBLE\n";
        return;
    }

    ll c=0, m=0, y=0, k=0;
    ll sumleft=1e6;
    rep(i, 0, 4){
        if(vmin[i].ss==0){
            c=min(vmin[i].ff, sumleft);
            sumleft-=c;
            if(sumleft<=0){
                break;
            }
        }
        else if(vmin[i].ss==1){
            m=min(vmin[i].ff, sumleft);
            sumleft-=m;
            if(sumleft<=0){
                break;
            }
        }
        else if(vmin[i].ss==2){
            y=min(vmin[i].ff, sumleft);
            sumleft-=y;
            if(sumleft<=0){
                break;
            }
        }
        else if(vmin[i].ss==3){
            k=min(vmin[i].ff, sumleft);
            sumleft-=k;
            if(sumleft<=0){
                break;
            }
        }
    }

    cout <<c << " "<< m << " " <<y << " " <<k << "\n"; 

}

int32_t main() {
    FAST;

    t=1;
    cin >> t;
    ll cases=1;
    while (t--) {
        cout << "Case #" << cases <<": ";
        cases++;
        solve();
    }

    return 0;
}