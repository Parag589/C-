//to solve (0.143⋅4)power4=0.107





#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
        int N;
        cin>>N;
        double x = (0.143*N), y = N;
 
    // Storing the answer in result.
    double result = pow(x, y);
    int ans=round(result);
 
    // printing the result upto 2
    // decimal place
    cout  << ans << endl;
    }
    
    return 0;
}
/*
// CPP program to illustrate
// power function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double x = (0.143*N), y = N;
 
    // Storing the answer in result.
    double result = pow(x, y);
    int ans=round(result);
 
    // printing the result upto 2
    // decimal place
    cout  << ans << endl;
 
    return 0;
}
*/