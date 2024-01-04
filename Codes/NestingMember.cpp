#include<bits/stdc++.h>
using namespace std;

class collection{
    public:
    float x,y,z;

    void input();
    float average();
    void display();
};

// defining functions 
void collection::input(){
    cout << "Enter three numbers : ";
    cin >> x >> y >> z;
}
float collection::average(){
   return ((x+y+z)/3);
}
void collection::display(){ // in this function we call another function  of this class
    cout << "Average of " << x << " " <<  y << " " << z << " is: " << average() << endl;
}

int main()
{

    collection p; // create new object
    p.input();
    p.display();
    return 0;
}