#include <iostream>
using namespace std;


int uniqueelement(int arr[], int n)
{
    int ans = 0;

	for (int i = 0; i < n; i++) {
	ans = ans ^ arr[i];
	}


	return ans;
}
int main()
{

	int arr[] = { 45, 7, 18, 45, 7 };
    int n = 5;
	cout << uniqueelement(arr, n) << endl;

	return 0;
}
