/**
 * name:huochairenzhishang
 * time 2025 2.27
 * exercise:div3 e
 * e题 一个构造题 发现如果要有配对的话一定是在一条直线上 观察到n=500 利用贪心的方法 尽力在一排安置最多的棋子
 * 1 3 6 10 15 16 ...... 对 就这样 开始wa5了 是因为只构造了一次 然后会超出数据范围 哎哎
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;cin>>n;
    int val=0;
    for(int i=0;i<=500;++i){
        if(i*(i+1)/2<=n&&(i+1)*(i+2)/2>n){
            val=i;
            break;
        }
    }
    ll x=0;
    ll y=0;
    ll nv=n;
    ll vl=0;
    while(nv!=0){
        for(int i=1;i<=val+1;++i){
            vl++;
            y++;
        }
        nv-=val*(val+1)/2;
        for(int i=0;i<=500;++i){
            if(i*(i+1)/2<=nv&&(i+1)*(i+2)/2>nv){
                val=i;
                break;
            }
        }
        x++;
    }
    cout<<vl<<'\n';
    x=y=0;
    nv=n;
    for(int i=0;i<=500;++i){
        if(i*(i+1)/2<=n&&(i+1)*(i+2)/2>n){
            val=i;
            break;
        }
    }
    while(nv!=0){
        for(int i=1;i<=val+1;++i){
            cout<<x<<' '<<y<<'\n';
            y++;
        }
        nv-=val*(val+1)/2;
        for(int i=0;i<=500;++i){
            if(i*(i+1)/2<=nv&&(i+1)*(i+2)/2>nv){
                val=i;
                break;
            }
        }
        x++;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}