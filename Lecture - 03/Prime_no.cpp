#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    // Becuase prime no comes between 2 & given no
    int i = 2;
    while(i<m){

        if(m%i==0){
            cout << "Not Prime for : " << i << endl;
        }
        else{
            cout << "prime for : " << i << endl;
        }
        i=i+1;
    }
}