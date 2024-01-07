#include<bits/stdc++.h>
using namespace std;

class integer{
    int m,n;

    public:
        integer(int, int);
        void display();
};
integer::integer(int a, int b){
    m = a;
    n = b;
}
void integer::display(){
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;
}

int main()
{
    integer int1(10,20); // constructor called implicity
    
    integer int2 = integer(40,13); // constructor called explicity



//    cout << "Int-1 " << int1.display() << endl; // dont write this way,it will be give error
    cout << "Int-1 : ";cout<<endl; int1.display(); cout << endl;
    cout << "Int-2 : ";  cout<<endl;
    int1.display();  // calling the method of object int1 to display its data members
    cout << endl;



    return 0;
}