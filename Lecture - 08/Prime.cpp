#include <iostream>
using namespace std;
bool Prime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%2==0){
            return 0;
        }

    }
    return 1;
    
}
int main(){
    int n;
    cin >> n;
    if (Prime(n))
    {
        cout << "is a prime no " << endl;
    }
    else{
        cout << "is not a prime no " << endl;
    }
    
}