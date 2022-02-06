#include <iostream>
using namespace std;
// Calculating Factorial
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
       fact = fact * i;

    }
    return  fact ;
    
}
int NCR(int n , int r ){
    int num = factorial(n);
    int demon = factorial(r) * factorial(n-r);
    int ans = num/demon;
    return ans;
}
int main(){
       int n , r;
       cin >> n >> r;
       cout << "answer is " << NCR(n,r) << endl;

    return 0;
}