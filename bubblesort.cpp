#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int  i = 1;i < n; i++){

        for(int j = 0;j < n-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
              
            }
        }
    }   
}
void printarray(int arr[],int n){
    for(int  i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[6]={8,66,18,7,45,10};
    bubble_sort(a,6);
    printarray(a,6);     
    
    return 0;
}