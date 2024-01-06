#include<bits/stdc++.h>
using namespace std;

class Pointers{
    int x,y;

    public:
        void input(int x,int y){
            this->x = x;
            this->y = y;
        }

        friend int sum(Pointers &P);
};

int sum(Pointers &P){
    int Pointers::*ptr = &Pointers::x;
    int Pointers::*ptr2 = &Pointers::y;

    Pointers *ptr3 = &P;

    int S = P.*ptr + ptr3->*ptr2;
    // int s = P.*ptr + P.*ptr2; you can also calculates this way

    return S;
}


int main()
{
    Pointers P;
    P.input(10,20);
    cout << "Sum of the values is :"<<sum(P)<<endl;

    Pointers *Pptr= &P;
    Pptr->input(30,40);  //you can take input these way also (*Pptr).input(30, 40);
    cout << "Sum of the values is :"<<sum(*Pptr)<<endl;
    
    return 0;
}