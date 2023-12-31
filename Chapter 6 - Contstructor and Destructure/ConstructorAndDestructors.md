# Contructor and Destructure

### Characteristics of Constructor 

<table>
  <tr>
    <th>Characteristic</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>Name Same as Class</td>
    <td>The constructor method has the same name as the class it belongs to.</td>
  </tr>
  <tr>
    <td>Initialization</td>
    <td>The primary purpose is to initialize the object's attributes or properties.</td>
  </tr>
  <tr>
    <td>Automatic Invocation</td>
    <td>Constructors are automatically called when an object is instantiated.</td>
  </tr>
  <tr>
    <td>No Return Type</td>
    <td>Constructors do not have a return type.</td>
  </tr>
  <tr>
    <td>Overloading</td>
    <td>Some languages support constructor overloading with different parameter lists.</td>
  </tr>
  <tr>
    <td>Default Constructor</td>
    <td>If not explicitly defined, a default constructor may be provided.</td>
  </tr>
  <tr>
    <td>Parameterized Constructors</td>
    <td>Constructors can take parameters to initialize with specific values.</td>
  </tr>
  <tr>
    <td>Initialization Order</td>
    <td>The order of execution defines the initialization order of instance variables.</td>
  </tr>
  <tr>
    <td>Visibility</td>
    <td>Constructors can have public, private, protected, or package-private visibility.</td>
  </tr>
  <tr>
    <td>Chaining</td>
    <td>Constructors may chain to avoid code duplication and ensure proper initialization.</td>
  </tr>
  <tr>
    <td>Initialization Lists</td>
    <td>Some languages allow the use of initialization lists for efficient initialization.</td>
  </tr>
  <tr>
    <td>Inheritance</td>
    <td>Derived class constructors may call base class constructors for proper initialization of inherited members.</td>
  </tr>
  <tr>
    <td>Destructors</td>
    <td>Destructors may be used for resource release and cleanup when an object is no longer needed.</td>
  </tr>
</table>


## 6.3 Parameterized Contstructor

- We can pass arguments two ways :-
    - By calling the constructor explicitly.
    - By calling the constructor implicitly.

<details>
<summary>An Example </summary>

```
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

```
</details>


## 6.4 Multiple Constructors in a class

- It can be called as constructor overloading.

```

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
 
```

## 6.5 Constructors with Default Arguments

- A constructor can have default argument values which are used when the user does not provide any value for that particular parameter while creating an object of a class.

## 6.6 Dynamic Initialization of Objects


## 6.7 Copy Constructor

```

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

```

## 6.8 Dynamic Constructor 