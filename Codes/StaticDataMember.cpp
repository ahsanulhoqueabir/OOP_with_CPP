#include <bits/stdc++.h>
using namespace std;

class User
{

public:
    static int serial; // declaration of static data member. The initial value of static data members is 0. Important!! You cant initialize there.

    string name;
    User()
    {
        cin >> name;
        serial++;
        cout << serial << " " << name << endl;
    }
};

// Accessing static data member using class name and initializing it. To initialize outside the main function,you have to use type of this data.(eg. int,string)
int User::serial = 115;

int main()
{
    User::serial=55; // this will be used as initial value,though we have declared globally 5.
    User u1, u2, u3;

    return 0;
}