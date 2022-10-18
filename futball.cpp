#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
        int A,B,C,D;
        cin>>A>>B;
        cin>>C>>D;
        if(A<=C & B<=D){
        cout<<"PSIBLE"<<endl;
        }else{
            cout<<"IMPSIBLE"<<endl;
        }

    }
    
    return 0;
}