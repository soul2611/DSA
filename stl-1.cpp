#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a = {1,2,3,4};
    int size = a.size();

    int basic[5]={10,4,85,89,8};
    cout<<"Element at the back :"<<a.back()<<endl;
    cout<<"Empty or not"<<a.empty()<<endl;
    cout<<"element at the start :"<<a.front()<<endl;
    return 0;
}