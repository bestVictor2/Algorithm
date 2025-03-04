/**
 * name:huochairenzhishang
 * time 2025 3.3
 * exercise:ţ�ͺ���6 b
 * �����������n������ okҲ�ǸողŲ��������������
 * һֱ����dp[i][1]
 * 1.������һ��ʼ��dp[i][1]+=c2,��ô����dp[i][1]=min(dp[i][1],dp[j][0]+c1*(i-j-1))ʱ���min����Ļᵼ��c2��ʧ
 * 2.������dp[i][1]=min(dp[i][1],dp[j][0]+c1*(i-j-1))�м�c2 ��Ϊǰ��ӵĻ������ ���Ӿͻᶪʧ
 * 3.���ֻ��������c2
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve() {  
    ll n,c1,c2;cin>>n>>c1>>c2;
    vector<array<ll,2>> nn(n);
    for(ll i=0;i<n;++i){
        cin>>nn[i][0]>>nn[i][1];
    }
    vector<vector<ll>> dp(n,vector<ll>(2,0));
    dp[0][0]=0,dp[0][1]=c2;
    for(ll i=1;i<n;++i){
        dp[i][0] = dp[i][1] = i*c1;
        //dp[i][1]+=c2;
        for(ll j=0;j<i;++j){
            if(nn[i][0]>=nn[j][0]&&nn[i][1]>=nn[j][1]) dp[i][0]=min(dp[i][0],dp[j][0]+c1*(i-j-1));
            if(nn[i][0]>=nn[j][1]&&nn[i][1]>=nn[j][0]) dp[i][0]=min(dp[i][0],dp[j][1]+c1*(i-j-1));
            if(nn[i][1]>=nn[j][0]&&nn[i][0]>=nn[j][1]) dp[i][1]=min(dp[i][1],dp[j][0]+c1*(i-j-1));
            if(nn[i][1]>=nn[j][1]&&nn[i][0]>=nn[j][0]) dp[i][1]=min(dp[i][1],dp[j][1]+c1*(i-j-1));
        }
        dp[i][1]+=c2;
    }
    ll ans=1e19+1;
    for(ll i=0;i<n;++i){
        ans=min(ans,dp[i][0]+c1*(n-i-1));
        ans=min(ans,dp[i][1]+c1*(n-i-1));
    }
    cout<<ans<<'\n';
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