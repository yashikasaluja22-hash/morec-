#include <iostream>
using namespace std;
int main() {
int a, b;
cout << "enter two numbers";
cin >> a, b;
try{
    if(b == 0){
        throw "division by zero is not allowed";
    }
    cout << "Result = " << (a/b) << endl;
}
catch(const char* msg){
    cout << "Exception caught: " << msg << endl;
}
cout << "Program continues normally.." << endl;
return 0;
}