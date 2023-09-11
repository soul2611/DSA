//Question:- Count the number of digits in the given number n:-
#include<iostream>
using namespace std;
int main(){
    int num;
    int count = 0;
    cout<<"Enter a Number: ";cin>>num;
    while(num>0){
        count++;
        num=num/10;
    }
    cout<<"The number of digits in the given number are: "<<count;
    return 0;
}