#include<bits/stdc++.h>
using namespace std;

class time{
    int hours;
    int minutes;

    public:
        void gettime(int h,int m){
            hours=h;
            minutes=m;
        }
        void displayTime(void){
            cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
        }
        //declare with objects as pass by value
        // void sum(time,time); 
        void sum(const time &t1,const time &t2);
};

// for pass-by-value
// void time::sum(time t1,time t2){
//     minutes=t1.minutes + t2.minutes;
//     hours=minutes/60;
//     minutes=minutes%60;
//     hours=hours+t1.hours+t2.hours;
// }

// for pass-by-reference
void time::sum(const time &t1,const time &t2){
    minutes=t1.minutes + t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}


int main()
{
    
    class time T1,T2,T3;

    T1.gettime(2,45);
    T2.gettime(3,30);
    T3.sum(T1,T2);
    
    cout<<"t1 = ";
    T1.displayTime();
    
    cout<<"t2 = ";
    T2.displayTime();
    
    cout<<"t3 = ";
    T3.displayTime();

    return 0;
}