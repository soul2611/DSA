// Question : Reverse the digits of the given number :
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Number: ";  
    int num;
    cin>>num;  
    int rev = 0 ;

    while(num>0){
        int lastdigit = num%10;
        rev=rev*10 + lastdigit;
        num=num/10;
    }
    cout<<"The reverse of the given number is : "<<rev;
    return 0;
}