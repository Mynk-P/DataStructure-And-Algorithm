#include <iostream>
using namespace std;
bool isEven(int x){
    // Agar koi bhi nahi ka And 1 true ho to vo odd hai
    if(x&1){
        return 0;
    }
    return 1;

}
int main(){
    // Print no is even or odd
    int num;
    cin >> num;
    if(isEven(num)){
        cout << "No is Even" << endl;

    }
    else{
        cout << "No is odd" << endl;
    }
    

    return 0;
}