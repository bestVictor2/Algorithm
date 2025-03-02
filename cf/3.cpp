/**
 * name:huochairenzhishang
 * time 2025 2.27
 * exercise:1006 div3 f
 * lucas定理 我不会呜呜呜 这个题巧妙地结合了杨辉三角 而杨辉三角还有通项公式
 * 这就更加巧妙了 只用判断奇偶性就可以了 于是把lucas模数p=2 再算组合数的时候 
 * 要注意 c00是1 而c0x是0 这个要特判一下 okokok
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int p=2;
ll C(ll a,ll b,ll c){
    if(a==0){
        if(b==0) return 1;
        else return 0;
    }
    return 1;
}
long long Lucas(long long n, long long m, long long p) {
  if (m == 0) return 1;
  return (C(n % p, m % p, p) * Lucas(n / p, m / p, p)) % p;
}
void solve() {  
    ll n,k;cin>>n>>k;
    for(int i=1;i<=n;++i){
        if(Lucas(n-1,i-1,p)==1) cout<<k<<' ';
        else cout<<0<<' ';
        
    }
    cout<<'\n';
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