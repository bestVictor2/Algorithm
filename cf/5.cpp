/**
 * name:huochairenzhishang
 * time 2025 3.2
 * exercise:1007 div2 b
 * ��ʱ�������ȫƽ�������ж� ������ ����������������
 * �ǵ�һ����ll �������ǾͿ�ull
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve() {  
    ll n;cin>>n;
    ll sum=n*(n+1)/2;
    ll val=sqrtl(sum);
    if(val*val==sum){
        cout<<-1<<'\n';
        return;
    }
    for(ll i=1;i<=n;++i){
        ll sum1=i*(i+1)/2;
        ll val1=sqrtl(sum1);
        if(val1*val1==sum1){
            cout<<i+1<<' '<<i<<' ';
            i++;
            continue;
        }
        cout<<i<<' ';
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