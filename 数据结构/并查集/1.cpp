/**
 * name:huochairenzhishang
 * time:2025 2.25
 * exercise:牛客 NC235622
 * 并查集维护问题
 * siz数组维护某个积木下面的积木个数,d数组维护某一列的所有的积木个数
 * 合并的时候维护两个数组,find的时候记得更新siz数组,并查集还是不会,呜呜呜
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct DSU{
    std::vector<ll> f, siz,d;
    DSU() {}
    DSU(ll n){
        init(n);
    }
    void init(ll n){
        f.resize(n);
        iota(f.begin(), f.end(), 0);
        siz.assign(n, 0);
        d.assign(n,1);
    }
    ll find(ll x){
        while (x != f[x]){
            x = f[x] = f[f[x]];
        }  
        return x;
    }
    ll _find(ll n){
        if(f[n] != n){
            int t=_find(f[n]);
            siz[n]+=siz[f[n]];
            f[n]=t;
        }
        return f[n];
    }
    bool same(ll x, ll y){
        return find(x) == find(y);
    }
    bool merge(ll x, ll y){
        x = _find(x);
        y = _find(y);
        f[x]=y;
        siz[x]=d[y];
        d[y]+=d[x];
        return true;
    }
    ll size(ll x){
        return siz[find(x)];
    }
};
void solve(){
    ll n;cin>>n;
    DSU ds(300001);
    while(n--){
        char c;cin>>c;
        if(c=='M'){
            ll x,y;cin>>x>>y;
            ds.merge(x-1,y-1);
        }else{
            ll x;cin>>x;
            ll val=ds._find(x-1);
            cout<<ds.siz[x-1]<<'\n';
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    while (t--)
        solve();
    return 0;
}