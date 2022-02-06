#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    int a = 1;
    while(a<=m){
        int b = 1;
        while(b<=m){
            cout << "*" ;
            b=b+1;
        }
        cout << endl;
        a=a+1;
    }
}