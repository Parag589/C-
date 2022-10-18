#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int test;
    cin>>test;
    while (test--){
        ll n;
        cin>>n;
        ll get=log2(n);
        double ho=log2(n);
        if(n&1 || get==ho){
            cout<<-1<<endl;
        }
        else{
            ll l=1;
            ll a,b,c;
            while(l<32){
                if((n&(1<<l))!=0){
                    a=n&(1<<l);
                    break;
                }
                l++;
            }
            b=((n-a)/2);
            c=n/2;
            a=a/2;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }

    }
}