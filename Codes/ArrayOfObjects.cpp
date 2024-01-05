#include <bits/stdc++.h>
using namespace std;

class employee
{
    string name,id;
    // string id;
    int age,salary;
    // int salary;

public:
    void getdata(string n, string i, int a, int s)
    {
        name = n;
        id = i;
        age = a;
        salary = s;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    cout << "Enter Employee Number" << endl;
    int n;
    cin >> n;
    employee emp[n];

    for (int i = 0; i < n; i++)
    {
        string name, id;
        int age, salary;
        cout << "Details of Employee -" << i + 1 << endl;
        cout << "Enter Name: ";
        getchar();
        getline(cin, name);
        cout<< "Enter ID: ";
        getchar();
        getline(cin,id);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
        emp[i].getdata(name, id, age, salary);
    }
    // Printing the data of all employees
    for (int i = 0; i < n; i++)
    {
        cout << "\n\nDetails of Employee : " << i + 1 << endl;
        emp[i].print();
    }

    return 0;
}