/*
 * problem: 2086C.cpp
 * author: duchuan
 * date: 2025-07-26 19:35:02
 */
#include<bits/stdc++.h>
#define tests int _;cin>>_;while(_--)solve();
#define test solve();
#define cfs cout<<fixed<<setprecision(2);
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define Auto function<void(int)>
using i64=long long;
using u64=unsigned long long;
using namespace std;
template<class T>
void _dbg(const char* f,T t){cerr<<f<<" = "<<t<<"\n";}
template<class A,class... B>
void _dbg(const char* f,A a,B... b){
    #ifdef ONLINE_JUDGE
    return;
    #endif
    while(*f!=',')cerr<<*f++;
    cerr<<" = "<<a<<", ";
    _dbg(f+1,b...);
}
#define debug(...)_dbg(#__VA_ARGS__,__VA_ARGS__)
constexpr int P=998244353;
constexpr int inf=0x3f3f3f3f;
constexpr int N=2e5+9;

void solve()
{
    int n,ans=0,x;
    cin>>n;
    vi p(n+1),d(n+1);
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        while(!d[x]){
            d[x]=1;
            x=p[x];
            ans++;
        }
        cout<<ans<<' ';
    }
    cout<<'\n';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    tests
    return 0 ^ 0;
}