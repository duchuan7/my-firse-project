 /* 
 * problem: 2090C.cpp
 * author: duchuan
 * date: 2025-08-04 15:12:25
 */ 
#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
    int n;
    std::cin>>n;

    std::vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }

    std::vector<std::pair<int,int>>v;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            v.emplace_back(j,i-j);
            if(v.size()==n)break;
        }
        if(v.size()==n)break;
    }

    struct st{
        int x,y,dis;
        bool operator<(const st &o)const{
            if(dis!=o.dis)return dis>o.dis;
            else if(x!=o.x)return x>o.x;
            else return y>o.y;
        }
    };

    int cnt=0;
    std::priority_queue<st>q;
    
    for(int i=1;i<=n;i++){
        auto [x,y]=v[cnt];
        if(a[i]!=0&&q.size()&&q.top().dis<=(x+y)*3+2){
            auto t=q.top();
            q.pop();
            std::cout<<t.x<<' '<<t.y<<'\n';
        }
        else{
            cnt++;
            std::cout<<x*3+1<<' '<<y*3+1<<'\n';
            q.push({x*3+1,y*3+2,(x+y)*3+3});
            q.push({x*3+2,y*3+1,(x+y)*3+3});
            q.push({x*3+2,y*3+2,(x+y)*3+6});
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
