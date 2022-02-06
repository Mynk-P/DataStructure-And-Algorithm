#include <iostream>
using namespace std;
int getMax(int num[] , int n){
    // Humari jo values hoti hai (2^31 to (2^31 - 1)) and jo minimum value hai vo store hoti hai INT_MIN ke andar and max value INT_MAX ke andar.
    int max = INT16_MIN ;
    for(int i = 0 ; i<n ; i++){
        if(num[i] > max){
            max = num[i]; 
        }
    }
    return max;
}
int getMin(int num[] , int n){
    // Humari jo values hoti hai (2^31 to (2^31 - 1)) and jo minimum value hai vo store hoti hai INT_MIN ke andar and max value INT_MAX ke andar.
    int min = INT16_MAX ;
    for(int i = 0 ; i<n ; i++){
        if(num[i] < min){
            min = num[i]; 
        }
    }
    return min;
}
int main(){
    int size;
    cin >> size;
    int num[100];
    // Taking input
    for(int i = 0 ; i < size ; i++){
        cin >> num[i] ;
       
    }
      cout << "Max Value is : " << getMax(num , size) << endl;
      cout << "Min Value is : " << getMin(num , size) << endl;
}