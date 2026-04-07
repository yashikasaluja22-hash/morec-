#include <fstream>
#include <iostream>
using namespace std;
int main() {
ifstream file("disease_data.txt"); // open file for reading
string line;

if(!file){
    cout << "file open nhi hui";
    return 1;
}

while(getline(file, line)){
    cout << line << endl;
}

file.close();
/*ifstream file("filename") → file read ke liye
getline(file, line) → line by line read
File close karna good practice*/
return 0;
}