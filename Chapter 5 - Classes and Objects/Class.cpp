#include <bits/stdc++.h>
using namespace std;
#define dash for(int i=0;i<30;i++) cout << "-"; cout << "\n";
class User
{

private:
    string nid;
    string BankAcc;

public:
    string name;
    int age;

    void getType1(string a, string b, string c, int d) // if the property name and parameter names are different,then you can assigned data this way!
    {
        nid = a;
        BankAcc = b;
        name = c;
        age = d;
    }
    void getType2(string nid, string BankAcc, string name, int age) // if you are not sured to matching of parameter and property name, then this way is best.
    {

        this->nid = nid;
        this->BankAcc = BankAcc;
        this->name = name;
        this->age = age;
    }
    void getType3() // it's the ingeneral brute force way
    {
        cout << "Enter NID : ";
        // getchar();
        cin >> nid;
        cout << "Enter Bank Account : ";
        getchar();
        cin >> BankAcc;
        cout << "Enter Name : ";
        getchar();
        getline(cin,name,'\n');
        // cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "NID : " << nid << endl;
        cout << "Bank Account : " << BankAcc << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    User user1,user2,user3;
    // take input 
    user1.getType1("1524210305040", "IFIC293862348512", "Ahsanul Hoque", 23);
    user2.getType2("9125488522455", "BCB28951435751", "Amanul Hoque", 31);
    user3.getType3();

    // display data 
    user1.display(); dash
    user2.display(); dash
    user3.display();

    return 0;
}