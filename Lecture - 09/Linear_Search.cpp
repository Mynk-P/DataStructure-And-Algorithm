#include <iostream>
using namespace std;
bool search(int arr[] , int size , int key){
    for (int i = 0; i < size ; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {4,5,3,2,1,12,-2} ;
    // Whether 1 is present or not.
     cout << "Enter the key : " << endl;
     int key;
     cin >> key;
     bool found = search(arr , 10 , key) ;
     if(found){
        cout << "Key is prsesent";
     }
     else{
         cout << "Key Not found";
     }

    return 0;
} 