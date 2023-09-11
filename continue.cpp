// Question:
// Print the numbers from 1 to 50 but do not print the numbers which are multiple of 3.

#include<iostream>
using namespace std;
int main(){
    int i;
    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
    cout<<i<<endl;
    }
    return 0;
}