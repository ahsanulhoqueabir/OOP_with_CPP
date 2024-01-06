#include <bits/stdc++.h>
using namespace std;

class student
{

public:
    string name;
    int age;
    string id;
    string dept;
    string uni;

    // declare and difining functions
    void getinfo(string name, int age, string id, string dept, string uni)
    { // here used :: is called scope resolution operator
        this->name = name;
        this->age = age;
        this->id = id;
        this->dept = dept;
        this->uni = uni;
    };
    void displayInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "ID : " << id << endl;
        cout << "Dept : " << dept << endl;
        cout << "University : " << uni << endl;
    };
};

int main()
{
    student abir;
    abir.getinfo("Ahsanul Hoque Abir", 22, "B21305040", "CSE", "Jagannath University");
    abir.displayInfo();
    return 0;
}
