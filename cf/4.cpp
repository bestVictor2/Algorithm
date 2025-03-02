/**
 * name:huochairenzhishang
 * time 2025 2.27
 * exercise:edu175 div2 c
 * 坤坤蛋 d在减法的时候没有加膜p 坤坤蛋 赛后五分钟过d 呜呜呜 然后c也不会 嘤嘤嘤
 * 补一下 没有想到二分 我一直在思考怎么贪心 发现脑子不好使 思考不出来 还是看他们二分叭
 * ok check的时候还是想了一会的 考虑到比mid小的没有影响 所以考虑比mid大的部分 发现每当有R的时候 我利用了一个tt进行重置
 * 比如bbbbrrr 这样就是1 brbbrrr 这样呢就是2了 okok 加油训训训
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {  
    int n,k;cin>>n>>k;
    string ch;cin>>ch;
    vector<ll> nn(n);
    for(int i=0;i<n;++i) cin>>nn[i];
    int l=0,r=1e9+1;
    auto check=[&](int mid)->bool{
        int val=0;
        int tt=0;
        for(int i=0;i<n;++i){
            if(ch[i]=='B'){
                if(nn[i]>mid){
                    if(tt==0){
                        val++;
                        tt=1;    
                    }
                }
            }else{
                if(nn[i]>mid) tt=0;
            }
        }
        if(val>k) return false;
        else return true;
    };
    while(l<r){
        int mid=((r-l)>>1)+l;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    cout<<l<<'\n';
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