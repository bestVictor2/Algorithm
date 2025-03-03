/**
 * name:huochairenzhishang
 * time 2025 3.3
 * exercise:����������� 
 * ok o(n2)��Ҫ��ʱ�� ��ôֻ�ܲ��õ�������ά����
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve1() {  
    int n;cin>>n;
    vector<int> nn(n);
    for(int i=0;i<n;++i) cin>>nn[i];
    vector<int> dp(n,1);
    int ans=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<i;++j){
            if(nn[j]<nn[i]) dp[i]=max(dp[i],dp[j]+1);
        }
        ans=max(ans,nn[i]);
    }
    cout<<ans<<'\n';
}
void solve() {  
    int n;cin>>n;
    vector<int> nn(n);
    for(int i=0;i<n;++i) cin>>nn[i];
    vector<int> dp;
    dp.push_back(nn[0]);
    for(int i=1;i<n;++i){
        if(nn[i]>dp[dp.size()-1]) dp.push_back(nn[i]);
        else{
            auto p=lower_bound(dp.begin(),dp.end(),nn[i]);
            *p=nn[i];
        }
    }
    cout<<dp.size()<<'\n';
    
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