// Question: write the code to print the following pattern:
//           123456
//           1    6
//           1    6
//           123456
#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cin>>n;
      
    for(i=1;i<=n;i++){
        for(j=1;j<=6;j++){
            if(i==1 || j==1 || i==n || j==6){
            cout<<j;
            
        }   
        else{
            cout<<" ";
        }        
   
        }
        cout<<endl;
        }    


return 0;

}



