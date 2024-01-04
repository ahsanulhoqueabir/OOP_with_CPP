#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

// In hierarchical inheritance, parent have multiple child 

class Parent{
    public:
    Parent(){
        cout << "Parent Class Called\n";
    }
};

class child1:public Parent{
    public:
    child1(){
        cout << "Child 1 called\n";
    }
};
class child2:public Parent{
    public:
    child2(){
        cout << "Child 2 called\n";
    }
};



int main()
{
    AHSAN
    child2 c;
    return 0;
}