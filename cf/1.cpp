/**
 * name:huochairenzhishang
 * time:2025 2.27
 * exercise:div3 e
 * �Ʒ�div3 ��cһֱд����case ����ûʱ��дd �Ժ�30min��������
 * d�Ǹ�n������ ���Ǻ��� ö��ÿ��λ�ü��ɣ�ע��仯�ļ�ʹ����ȵ�ǰö����С�ļ�ȥ����ȵ�ǰö������� ö�����ֵ����
 * ������xv yv ����ʾ
 * ��ѵ ��ѵ ��ѵ������
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