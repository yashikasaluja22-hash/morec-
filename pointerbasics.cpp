#include <iostream>
using namespace std;
int main() {
int a = 10;
int *p = &a;
cout << p << endl;//address of a
cout << *p << endl;// value at a
cout << &a << endl;
//Pointer = ek variable jo directly kisi memory address ko point karta hai.
//Pointer se aap original variable ko directly access/change kar sakte ho

//2️⃣ References Basics
int x = 20;
int &hi = x;
hi += 5;
cout << hi << endl;
cout << x << endl;
//Always points to original variable
//Reference se hum directly original variable ko modify kar sakte hai, bina pointer ke syntax ke.

/*GUI objects are usually big, so passing by value = heavy copy → slow.
Solution → pass by pointer or reference.*/
return 0;
}