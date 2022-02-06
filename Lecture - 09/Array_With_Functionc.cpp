#include <iostream>
using namespace std;
void printArray(int arr[] , int size){
    cout << "Printing an Array" << endl;
    for(int i = 0 ; i<size; i++){
        cout << arr[i] << endl;

    }
    cout << "Print done" << endl;
}
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
     printArray(arr3,15);
     cout <<"Get the Car" << endl;
     int arr4[10] = {4,6};
     int m = 10;
     printArray(arr3,10);
     
             
    cout << "All good" << endl;
}