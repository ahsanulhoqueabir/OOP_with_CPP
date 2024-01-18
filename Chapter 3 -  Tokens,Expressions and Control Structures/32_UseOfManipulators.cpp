#include <bits/stdc++.h>
using namespace std;

class Manipulate
{

public:
    int Total = Basic + Allowance;
    int Basic, Allowance;
    Manipulate(){};
    void input();
    void display();
};

void Manipulate ::input()
{
    cout << "Enter Basic: ";
    cin >> Basic;
    cout << "Enter Allowance: ";
    cin >> Allowance;
}

void Manipulate ::display()
{
    cout << "Basic :" << setw(15) << Basic << endl
         << "Allowance :" << setw(15) << Allowance << endl
         << "Total :" << setw(15) << Total;
}

int main()
{
    Manipulate obj;
    obj.input();
    obj.display();

    return 0;
}