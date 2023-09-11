// Question: Print the sum of the digits in the given number 
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter The number :"; 
    int num;
    cin>>num;
    int sum = 0;
    while(num>0){
        int lastdigit = num%10;
        sum+=lastdigit;
        num=num/10;
    }
    cout<<"The sum of the digits of the given numbers is : "<<sum;
    return 0;
}