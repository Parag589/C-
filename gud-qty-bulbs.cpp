#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
        int N,K;
        cin>>N>>K;
        int A=0;
        for(int i=0;i<N-1;i++){
            int a;
            cin>>a;
            A +=a;
        }
        int ans=N*K-A;
        if(A>=N*K){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    
    return 0;
}