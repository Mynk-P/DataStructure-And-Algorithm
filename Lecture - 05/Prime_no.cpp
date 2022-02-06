#include <iostream>
using namespace std;
int main(){
   int a ;
   cout << "Enter a value : " << endl;
   cin >> a;
   bool Isprime = 1;
   for (int i = 2 ; i < a; i++)
   {
       if(a%i==0){
           Isprime = 0;
           break;
       }
   }
   if(Isprime == 0){
       cout << "Not a prime no" << endl;
   }
   else{
       cout << "is a prime no" << endl;
   }
   
    
}