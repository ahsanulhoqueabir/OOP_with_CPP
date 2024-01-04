#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class Parent{
    public:
    Parent()
    {
        cout << "Parent Class Called" << endl;
    }
};

class child: public Parent{
    public:
    child(){
        cout << "Child Class Called" << endl;
    }
};



int main()
{
    AHSAN

    child c;
    return 0;
}