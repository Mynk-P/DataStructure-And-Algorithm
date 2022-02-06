#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    char ch;
    cout << "Enter a first no : " << endl;
    cin >> x;
    cout << "Enter a Second no : " << endl;
    cin >> y;
    cout << "Enter a Operand : " << endl;
    cin >> ch;

    switch(ch){
        case '+' : 
        cout << "Addition is : " << (x+y) << endl;
        break;
        case '-' : 
        cout << "Subtraction is : " << (x-y) << endl;
        break;
        case '*' : 
        cout << "Multiplication is : " << (x*y) << endl;
        break;
        case '/' : 
        cout << "Division is : " << (x/y) << endl;
        break;
        case '%' : 
        cout << "Modulo is : " << (x%y) << endl;
        break;
        default:
        cout << "Enter a valid Operand" << endl;
    }

}