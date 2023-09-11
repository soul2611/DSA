#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int n) {
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;  
}
int main() {
    int arr[6]={1,5,8,4,6,2};
    int arr1[5]={1,5,8,4,6};
    reverse(arr,6);
    reverse(arr1,5); 
    printarray(arr,6);
    printarray(arr1,5);      
    
    return 0;
}