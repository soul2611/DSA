#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum is "<<sum;
    
    return 0;
}
