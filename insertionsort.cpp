#include<iostream>
using namespace std;
void insertion_sort(int n,int arr[]){
        for(int i = 1; i < n; i++ ){
            int temp = arr[i];
            int j = i - 1;
            for(; j >= 0; j--){
                if(arr[j] > temp) {
                    arr[j+1] = arr[j];
                }
                else{
                    break;
                }
            }
        arr[j+1] = temp;
     }
}
void printarray(int arr[],int n){
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={7,5,4,1,9};
    insertion_sort(5,arr);
    cout<<"The sorted array is  as follow as:"<<endl;
    printarray(arr, 5);    
    return 0;

}