#include <bits/stdc++.h>
using namespace std;

class cse
{
    string roll, name;
    int age;

public:
    void getdata(string roll, string name, int age)
    {
        this->roll = roll;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
    }
    friend void update(cse &c);
};

void update(cse &c)
{
    c.roll = "190041234";
    c.name = "XYZ";
    c.age = 20;
}
int main()
{
    cse c;
    c.getdata("190041234", "ABC", 20);
    update(c);
    c.display();
    return 0;
}