#include<bits/stdc++.h>
using namespace std;

class Shop{
    int ItemCode[50];
    float ItemPrice[50];
    int count;

    public:
        void CNT(){count = 0;}
        void getItem();
        void displaySum();
        void remove();
        void displayItem();
};
void Shop::getItem(){
    cout << "Enter Item Code : ";
    cin >> ItemCode[count];
    cout << "Enter Item Price : ";
    cin >> ItemPrice[count];
    count++;
}

void Shop::displaySum(){
    float sum = 0;
    for(int i = 0; i < count; i++){
        sum += ItemPrice[i];
    }
    cout << "Total Value : " << sum << endl;
}

void Shop::remove(){
    int a;
    cout << "Enter Item Code : ";
    cin >> a;
    for(int i = 0; i < count; i++){
        if(ItemCode[i] == a){
            ItemPrice[i] = 0;
        }
    }
}

void Shop::displayItem(){
    cout << "Item Code - Item Price" << endl;
    for(int i = 0; i < count; i++){
        cout << ItemCode[i] << " - "<< ItemPrice[i] << endl;
    }
}
//Main Function
int main()
{
    Shop order;
    order.CNT();
    int x;
    while(x){
        cout << "You can do the following : " << endl;
        cout << "Enter appropriate number : " << endl;
        cout << "1 : Add an item" << endl;
        cout << "2 : Display total value" << endl;
        cout << "3 : Delete an item" << endl;
        cout << "4 : Display all items" << endl;
        cout << "5 : Quit" << endl;
        cout << "Enter your choice : ";
        cin >> x;
        switch(x){
            case 1: order.getItem(); break;
            case 2: order.displaySum(); break;
            case 3: order.remove(); break;
            case 4: order.displayItem(); break;
            case 5: break;
            default: cout << "Error in input; try again" << endl;
        }
    }
    return 0;
}