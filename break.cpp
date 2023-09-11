#include<iostream>
using namespace std;
int main(){
        // int i=5;
        // while(true){
        //     if(i%7==0){
        //     cout<<i;
            
        //     break;  
        // }
        // i+=5;
        // }
        int i;
        for(i=5;;i+=5){
            if(i%7==0){
            cout<<i<<endl<<"Hello";
            break;
        }
        
        }
        return 0;
}