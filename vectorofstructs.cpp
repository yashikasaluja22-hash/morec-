#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*Vector of Structs kya hota hai?

Jab tum multiple students ka data store karna chaho → use vector of struct*/
struct Student{
string name;
int age;
float marks;
};
int main() {
vector<Student> students;
// Matlab: ek list jisme har element ek Student object hai.
int n;
    cout << "Enter number of students: ";
    cin >> n;
for(int i = 0; i < n; i++){
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter age: ";
    cin >> s.age;

    cout << "Enter marks: ";
     cin >> s.marks;

     students.push_back(s);
}

// LOOPING THROUGH VECTOR STRCUTS
// 1. NORMAL METHOD
for(int i = 0; i < students.size(); i++){
    cout << students[i].name << " ";
    cout << students[i].age << " ";
    cout << students[i].marks << endl;
}

// 2. foreach loop using auto keyword 
for(auto s : students) {
    cout << s.name << " "
         << s.age << " "
         << s.marks << endl;
}

/*5. Comparing data
Example: Highest marks wala student*/
Student topper = students[0];

for(int i = 1; i < students.size(); i++){
if(students[i].marks > topper.marks){
    topper = students[i];
}
}

cout << "Topper: " << topper.name << endl;

//🔹 6. Searching (Find student by name)
string searchname;
cout << "Enter name to search: ";
cin >> searchname;

for(auto t : students){
    if(t.name == searchname){
          cout << "Found: " << t.name << " " << t.marks << endl;
    }
}

/*🔹 7. Sorting vector of structs
Example: Marks ke basis pe sort*/

sort(students.begin(), students.end(), [](Student a, Student b){
    return a.marks > b.marks;//descending order 
});
// 👉 Lambda[] function use hua yaha comparison ke liye

return 0;
}