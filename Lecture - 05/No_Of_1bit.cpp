#include <iostream>
using namespace std;
int main(){
    int count = 0;
    while (m!=0)
    {
        if(m&1){
            count++;
        }
        m = m>>1;
    }
    return count;
    
}