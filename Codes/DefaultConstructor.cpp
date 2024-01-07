#include <bits/stdc++.h>
using namespace std;

class Car
{
    string company, model, color;
    int price;

public:
    Car(string company="unknown", string model="unknown", string color="unknown", int price=0) // construtor with defaultarguments
    {
        this->company = company;
        this->model = model;
        this->color = color;
        this->price = price;
    }
    void display()
    {
        cout << "Company : " << company << endl;
        cout << "Model : " << model << endl;
        cout << "Color : " << color << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    Car defaultCar;
    Car car1= Car("Toyota", "Corolla", "Black", 1000000); // constructor called explicity

    car1.display(); // specific value
    cout << endl;
    defaultCar.display(); // displaying using default constructor value 

    return 0;
}