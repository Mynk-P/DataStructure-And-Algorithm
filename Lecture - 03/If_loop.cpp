#include <iostream>
using namespace std;
int main(){
    // int n = 10;
    // // cin for taking a input
    // cin >> n;
    // cout << "value of n is :" << n << endl;

    // int x ;
    // cin >> x;
    // if(x>0){
    //     cout << "x is Positive" << endl;
    // }
    // else{
    //     cout << "x is negative" << endl;
    // }
    
    // int i , j ;
    // cin >> i >> j;
    // cout << "value of i & j is : " << i << " & " << j << endl;

    // int n,m;
    // cout << "Enter a first value of n : " << endl;
    // cin >> n;
    // cout << "Enter a first value of m : " << endl;
    // cin >> m;
    // if(n>m){
    //     cout << "n is greater than m" << endl;
    // }
    // else{
    //     cout << "n is smaller than m" << endl;
    // }

       int d;
       cout << "Enter the value of d " << endl;
       cin >> d;
       if(d>0){
           cout << "d is positive" << endl;
       }
       else{
           if(d<0){
               cout << "d is negative" << endl;
           }
           else{
               cout << "d is 0" << endl;
           }
       }

       if(d>0){
           cout << "if block" << endl;
       }
       else if (d<0){
           cout << "Else-if block" << endl;
       }
       else{
           cout << "Else block" << endl;
       }


}