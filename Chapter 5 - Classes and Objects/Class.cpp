#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);


class User{
    
private:
    string nid;
    string BankAcc;

public:
    string name;
    int age;

    void get(string a,string b,string c,int d){
        
        nid = a;  // this->nid = a;
        BankAcc = b; // this->BankAcc=b;
        name = c; // this->name=c;
        age = d; //this->age=d
    }
    void display(){
        cout << "Name : " << name << endl;
        cout << "NID : " << nid << endl;
        cout << "Bank Account : " << BankAcc << endl;
        cout << "Age : " << age << endl;
    }
};


int main()
{
    AHSAN
    User obj;
    obj.get("1524210305040","FC293862348512","Ahsanul Hoque",23);
    obj.display();

    return 0;
}