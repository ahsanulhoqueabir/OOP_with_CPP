#include <bits/stdc++.h>
using namespace std;

class newClass{
    float p=0,q=0;
    float sum =0;

    public:
        newClass(float p, float q) // two arguments
        {
            this->p=p;
            this->q=q;
        };
        newClass(float p) // one arguments
        {
            this->p=p;
        };
        newClass() { // no arguments
        };
        
        float add(float p,float q){
            return p+q;
        }
        void display();
};
void newClass::display(){
    cout << "Sum of " << p << " " << q <<" is : " << newClass::add(p,q) << endl;
}

int main(){
    
    newClass obj1(10,20);
    newClass obj2(10);
    newClass obj3;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}