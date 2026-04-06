#include <iostream>
#include <fstream>
using namespace std;
int main() {
ofstream file("disease_data.txt"); //open file to write
if(!file){
    cout << "file open nhi hui";
    return 1;
}
//writing data in file
file << "Patient 1: fever --> flu" << endl;
file << "patient 2: cough --> cold" << endl;
file.flush();// ensures data actually goes to disk, to flush the buffer
//Agar program sudden crash ya terminate ho jaaye, recent writes ho sakte buffer me hi ruk jaaye.
//now close the file
file.close();
cout << "Data written successfully!" << endl;
return 0;
}