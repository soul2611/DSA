#include<iostream>
using namespace std;
int main(){
    
    int n,mul,i,j;
    cin>>n,j;
    cout<<"*********************Multiples from 1 to 10***************************"<<endl;
    for(i=1;i<=10;i++){
        n=i;
        for(j=1;j<=10;j++){
            mul=(n*j);
            cout<<n<<"*"<<j<<"="<<mul;
        }
        cout<<endl;
       
     }

return 0;
} 