#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class Parent1{
    public:
    Parent1(){
        cout << "Parent 1 Called\n";
    }
};
class Parent2{
    public:
    Parent2(){
        cout << "Parent 2 Called\n";
    }
};
// here inherits multiple parents in sigle child
class child: public Parent1,public Parent2{
    public:
    child(){
        cout << "Child Called\n";
    }
};

class grandChild: public child{
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