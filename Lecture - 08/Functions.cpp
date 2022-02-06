#include <iostream>
using namespace std;
int main(){
    // Power of x and y 
    int x , y ;
    cin >> x;
    cin >> y;
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans = ans * x ;
    }
    cout << "answer is :" << (ans) << endl;
    


}