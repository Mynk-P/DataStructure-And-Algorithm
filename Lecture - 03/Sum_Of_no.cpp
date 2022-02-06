#include <iostream>
using namespace std;
int main(){
    // Print sum of no from 1 to n
    int x;
    cin >> x;
    int j = 1;
    int sum = 0;
    while(j<=x){
       sum = sum+j;
       j = j+1;
       
    }
    cout <<"value of sum is " << sum << endl;
}