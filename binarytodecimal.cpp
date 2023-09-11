// Question:- convert the binary number to decimal through code.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Binary Number to be converted :";
    int n;
    cin>>n;
    int result = 0;
    int power = 1;
    while(n>0){
        int lastdigit = n % 10;
        result = result + (lastdigit*power);
        power*=2;
        n=n/10;
    }
    cout<<"The decimal form of the given number is : "<<endl;
    cout<<result<<endl;


return 0;    
}