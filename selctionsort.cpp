#include<iostream>
using namespace std;
  
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n-1; i++) 
    { 
        
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  

        swap(arr[min_idx], arr[i]); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main() 
{ 
    int arr[7] = {18, 7, 45, 26, 10, 9, 99}; 
    selectionSort(arr, 7); 
    cout << "Sorted array: "; 
    printArray(arr, 7); 
    return 0; 
} 