//Question: Print the factorial of n natural numbers
#include<iostream>
using namespace std;
int main() {
    int num, fact = 1;
    cin>>num;
    int i;
    for(i=1;i<=num;i++){
        fact*=i;
        
        }
        cout<<fact<<endl;
        
    return 0;    
}