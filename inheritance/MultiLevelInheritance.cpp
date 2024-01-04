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

class grandChild:public child{
    public:
    grandChild(){
        cout << "Grand Child Called\n";
    }
};



int main()
{
    AHSAN

    grandChild gc;
    return 0;
}