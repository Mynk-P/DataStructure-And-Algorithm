#include <iostream>
using namespace std;
//  Jab function koi bhi output return nahi krane wala hai to uske samne hum void linkhenge
void counting(int m){
     
     for (int i = 1; i < m; i++)
     {
         cout << i << endl;
     }
     
}
int main(){

    int m;
    cin >> m;
    counting(m);
    return 0;
}