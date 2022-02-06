#include <iostream>
using namespace std;
int main(){
    int n = 89;
    // Pre Increment
    int x = (++n);
    cout << x << endl;
    // Post Increment
    int y = (n++);
    cout << y << endl;
    // Post Decrement
    int z = (n--);
    cout << z << endl;
    // Pre Decrement
    int m = (--n);
    cout << m << endl; 
}