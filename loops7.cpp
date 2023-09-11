#include<iostream>
using namespace std;
int main (){
    int n,i,a,result=1;
    cin>>a;
    cin>>n;
    for(i=1;i<=n;i++){
        result*=a;
    }
    cout<<result;
    return 0;
}