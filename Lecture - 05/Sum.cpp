#include <iostream>
using namespace std;
int main(){
    // Sum of no from 1 to n;
    int n ;
    cout << "Enter a no : " << endl;
    cin >> n ;
    int sum = 0 ;
    for (int i = 1 ; i<=n ; i++){
        sum = sum + i;
       
    }
     cout << sum << endl;

}