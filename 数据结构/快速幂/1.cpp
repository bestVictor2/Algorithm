/**
 * name:huochairenzhishang
 * time:2025 3.4
 * exercise:ţ�� 
 * ���� �����ݶ��ᱬ���ݷ�Χ�� ����Ҳ��ѧ���˵��¶��� ����������ôʵ�ֵ� ʵ���Ͼ���b��a���
 * ��ô�Դ����� Ϊ�˷�ֹ��ll ��ô��a*a��ʱ��ת����a��a��� ��ô���տ����ݵ�˼·Ҳ����ʵ�� ������Ȼʱ�临�Ӷȶ���
 * ���Ƿ�ֹ��ll���
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll mul(ll a,ll b,ll p){
    ll ans=0;
    for(;b;b/=2ll,a=(a+a)%p){
        if(b&1){
            ans=(ans+a)%p;
        }
    }
    return ans;
}
ll power(ll a, ll b, ll p){
    ll res = 1;
    for (; b; b /= 2ll, a=mul(a,a,p)){
        if (b % 2ll){
            res =  mul(res,a,p);}
    }
    return res;
}
void solve(){
    ll a,p;
    ll b;
    cin>>a>>b>>p;
    cout<<power(a,b,p)%p<<'\n';
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}