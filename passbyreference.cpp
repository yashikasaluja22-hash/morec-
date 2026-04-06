#include <iostream>
using namespace std;
// & lagaya → function directly original variable ko modify kar raha hai.
void addTen(int &x) { // & means pass by reference
    x += 10;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;
    addTen(num); 
    cout << "In main: " << num << endl; // num changed
}
/*Pass by Value	❌ No	Small data, safe copy
Pass by Reference	✅ Yes	Big data (arrays, structs), need modification*/