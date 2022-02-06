#include <iostream>
using namespace std;
// Function Calling 
int power(int x , int y){
   int ans = 1;
   for (int i = 0; i < y; i++)
   {
       ans = ans * x;

   }   return ans;
   
}
int main(){
    int x , y;
    cin >> x >> y;
    // Function Created
    int ans = power(x,y);
    cout << ans << endl;
    return 0;
}