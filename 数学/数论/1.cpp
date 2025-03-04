/**
 * name:huochairenzhishang
 * time:2025 3.4
 * exercise:牛客 NC14399
 * 分解质因数的做法 板子题
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int tt;cin>>tt;
    while(tt--){
        ll n;cin>>n;
        bool is=true;
        vector<int> ans;
        for(int i=2;i<=n/i;++i){
            if(n%i==0){
                ans.push_back(i);
                while(n%i==0) n/=i;
                is=false;
            }
        }
        if(n>1) ans.push_back(n);
        sort(ans.begin(),ans.end());
        if(is){ cout<<"isprime"<<'\n';
                cout<<n<<'\n';       
        }else{
            cout<<"noprime"<<'\n';
            for(int i=0;i<ans.size();++i){
                cout<<ans[i]<<' ';
            }
                cout<<'\n';  
        }
    }
    return 0;
}