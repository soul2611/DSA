// Question : write the code to print the following pattern:
//         123456
//         123456
//         123456
//         123456
#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=6;j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}