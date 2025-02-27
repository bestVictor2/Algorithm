/**
 * name:huochairenzhishang
 * time:2025 2.27
 * exercise:div3 e
 * 破防div3 卡c一直写不好case 导致没时间写d 以后卡30min绝对跳题
 * d是个n方的题 不是很难 枚举每个位置即可，注意变化的即使后面比当前枚举数小的减去后面比当前枚举数大的 枚举最大值即可
 * 下面用xv yv 来表示
 * 加训 加训 加训！！！
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;cin>>n;
    vector<int> nn(n+1);
    for(int i=1;i<=n;++i) cin>>nn[i];
    int l1,r1;
    l1=r1=0;
    int ans=-1;
    for(int i=1;i<=n;++i){
        //int mx=0;
        int xv=0,yv=0;
        for(int j=i;j<=n;++j){
            if(nn[j]<nn[i]) xv++;
            else if(nn[j]>nn[i]) yv++;
            if(xv-yv>ans){
                l1=i;
                r1=j;
                ans=max(xv-yv,ans);
            }   
        }
    }
    cout<<l1<<' '<<r1<<'\n';
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