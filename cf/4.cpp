/**
 * name:huochairenzhishang
 * time 2025 2.27
 * exercise:edu175 div2 c
 * ������ d�ڼ�����ʱ��û�м�Ĥp ������ ��������ӹ�d ������ Ȼ��cҲ���� ������
 * ��һ�� û���뵽���� ��һֱ��˼����ô̰�� �������Ӳ���ʹ ˼�������� ���ǿ����Ƕ��ְ�
 * ok check��ʱ��������һ��� ���ǵ���midС��û��Ӱ�� ���Կ��Ǳ�mid��Ĳ��� ����ÿ����R��ʱ�� ��������һ��tt��������
 * ����bbbbrrr ��������1 brbbrrr �����ؾ���2�� okok ����ѵѵѵ
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