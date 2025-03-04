/**
 * name:huochairenzhishang
 * time 2025 3.4
 * exercise:牛客 NC235948
 * 最大字段和的题目 维护dp就可以 用到了贪心的思想 就是判断是否要加dp[i-1]
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve() {  
    int n;cin>>n;
    vector<ll> nn(n);
    for(int i=0;i<n;++i) cin>>nn[i];
    vector<ll> dp(n);
    ll ans=dp[0];
    dp[0]=nn[0];
    for(int i=1;i<n;++i){
        dp[i]=max(dp[i-1]+nn[i],nn[i]);
        ans=max(dp[i],ans);
    }
    cout<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}