//write the code to convert the decimal number into the binary form
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number:-";
    int n;
    cin>>n;
    int result = 0;
    int power = 1;
    while(n>0){
        int paritydigit = n%2;
        result = result + (paritydigit*power);
        power*=10;
        n=n/2;
    }
    cout<<"The binary form of the given decimal number is :- ";
    cout<<result;

return 0;
}