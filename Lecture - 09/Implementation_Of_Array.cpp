#include <iostream>
using namespace std;
int main(){
    // Declaring an Array 
    int arr[10];
    // Accessing an array 
    cout << "Value at 1 position : " << arr[1] << endl;
    cout << "Value at 9 position : " << arr[9] << endl;
    // Intialising a array
    int arr2[4] = {1,2,3,4};
    // Accessing an element
    cout << "value at 1st Index " << arr2[1] << endl;
     int arr3[15] = {4,6};
     int n = 15;
     cout << "Print Array" << endl;
     for (int i = 0; i < n; i++)
     {
        cout << arr3[i] << endl;     
     }

     int arr4[10] = {0};
     int m = 10;
     cout << "Print Array" << endl;
     for (int j = 0; j < m; j++)
     {
        cout << arr4[j] << endl;     
     }

             
    cout << "All good" << endl;
}