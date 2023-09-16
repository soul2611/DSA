#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid =start + (start - end)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        } 
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid -1 ;
        }
        mid = start + (start - end)/2;

    }
    return -1;
}
void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int even[6]={2,4,6,8,10,14};
    int odd[5]={3,8,11,14,16};
    int index = binarySearch(even,6,19);
    int index1 = binarySearch(odd,5,3);
    cout<<"index of 19 is "<<index<<endl;
    cout<<"index of 3 is "<<index1<<endl;
    printarray(even,6);
    cout<<endl;
    printarray(odd,5);
    return 0;

}