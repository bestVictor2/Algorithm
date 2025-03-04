/**
 * name:huochairenzhishang
 * time:2025 3.4
 * exercise:牛客 
 * 离谱 快速幂都会爆数据范围的 不过也是学到了点新东西 快速幂是怎么实现的 实际上就是b个a相乘
 * 那么以此类推 为了防止爆ll 那么在a*a的时候转换成a个a相加 那么按照快速幂的思路也可以实现 这样虽然时间复杂度多了
 * 但是防止了ll溢出
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll mul(ll a,ll b,ll p){
    ll ans=0;
    for(;b;b/=2ll,a=(a+a)%p){
        if(b&1){
            ans=(ans+a)%p;
        }
    }
    return ans;
}
ll power(ll a, ll b, ll p){
    ll res = 1;
    for (; b; b /= 2ll, a=mul(a,a,p)){
        if (b % 2ll){
            res =  mul(res,a,p);}
    }
    return res;
}
void solve(){
    ll a,p;
    ll b;
    cin>>a>>b>>p;
    cout<<power(a,b,p)%p<<'\n';
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}