/**
 * name:huochairenzhishang
 * time 2025 2.27
 * exercise:div3 e
 * e�� һ�������� �������Ҫ����ԵĻ�һ������һ��ֱ���� �۲쵽n=500 ����̰�ĵķ��� ������һ�Ű�����������
 * 1 3 6 10 15 16 ...... �� ������ ��ʼwa5�� ����Ϊֻ������һ�� Ȼ��ᳬ�����ݷ�Χ ����
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