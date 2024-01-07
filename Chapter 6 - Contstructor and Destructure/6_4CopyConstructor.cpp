#include <bits/stdc++.h>
using namespace std;

class copyConstructor{
    int p;

    public:
    copyConstructor(int p){
        this->p=p;
    }

    copyConstructor(copyConstructor & x){
        p = x.p;
    }

    void display(){
        cout << p << endl;
    }
};

int main(){

    copyConstructor example(5); // created item and initialized

    copyConstructor example2(example); // copy constructor called and copy item(example) in example1

    example.display();
    example2.display();
    
    return 0;
}