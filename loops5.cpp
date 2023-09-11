//Question print the sum of the series 1-2+3-4+5....
#include<iostream>
using namespace std;
int main(){
    int num,i,sum = 0;
    cin>>num;
    for(i=1;i<=num;i++){
        if(i%2==0){
            sum-=i;

        }
        else{
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}