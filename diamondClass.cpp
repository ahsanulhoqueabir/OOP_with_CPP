#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

// diamond class called those which are inherited from differernt types of inherites types 
class Parent{
    public:
    Parent(){
        cout<< "Parent Is Called\n";
    }
};

class child1: public Parent{
    public:
    child1() {
        cout << "Child1 is Called \n";
    }
};
class child2 : public Parent{
    public:
    child2() {
        cout << "Child2 is Called \n";
    }
};

class grandChild: public child1,public child2{
    public:
    grandChild(){
        cout << "Grand Child is Called \n";
    }
};



int main()
{
    AHSAN

    grandChild gc;

    return 0;
}