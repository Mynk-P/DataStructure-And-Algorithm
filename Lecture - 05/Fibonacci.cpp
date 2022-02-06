#include <iostream>
using namespace std;
int main(){
    int m = 19;
    int x = 0;
    int y = 1;
    cout <<x << " " << y << " " ;
    for (int i = 1; i <=m ; i++)
    {
        int next_num = x+y;
        cout << next_num << " ";

        x = y;
        y = next_num ;
    }
    
}