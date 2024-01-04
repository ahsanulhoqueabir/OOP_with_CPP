# Short Note

## Constructor

In C++, a constructor is a special member function that is automatically called when an object of a class is created. Its main purpose is to initialize the object's data members and perform any necessary setup for the object. Constructors have the same name as the class and do not have a return type.

<details>
<summary> Show the types of Constructor </summary>

- **Default constructor**: It is a special type of constructor that doesn't take any arguments. When we create an object without passing any argument to it, then this constructor will be called by default.

```
class MyClass {
public:
    // Default Constructor
    MyClass() {
        // Initialization code goes here
    }
};

```

- **Parameterized Constructor**: This constructor takes parameters, allowing you to initialize the object with specific values.

```
class Point {
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int initialX, int initialY) {
        x = initialX;
        y = initialY;
    }
};


```

- **Copy Constructor**: This constructor is used to create a new object as a copy of an existing object.

```
class Car {
private:
    int speed;

public:
    // Copy Constructor
    Car(const Car& otherCar) {
        speed = otherCar.speed;
    }
};

```

</details>

## Abstraction

<ul>
<li> Enabled us to display only essential information while hiding implementation details.
</ul>

## Inheritance

<li>  a class inherits properties of another class.
<li> Enable Reusability
<li> Access specifiers and Modes of inheritance:
<ol>
<li> Public: accessible from anywhere in the code </li>
<li> Protected (default): can be accessed by subclasses,parent class and child class, but not outside the package.</li>
<li> Private: visible only within the same class where it is declared. </li>

<li> Single (or Hierarchical) - Classes inherit from one parent class.</li>
<li> Multiple - A single class can have multiple parents.</li>
<li> Multilevel - A class has more than one parent, but each child is derived from only one parent.</li>
<li> Hybrid - Combination of single and multiple inheritance.</li>
</ol>

## Polymorphism

<li> The ability of different classes to be treated as objects of a common superclass.
<li> It allows methods with the same name to perform different actions based on object type.
<li> Example:cpp

There have two types of polymorphism:

1. Compile Time Polymorphism:
<pre><code>
Animal cat = new Cat(); //Compile time polymorphism
cat.eat(); //This will call eat() method of Animal class
//Even though we created an object of Cat class
</code></pre>

2. Function Overloading:
<pre><code>
void show(int x) { cout << "Integer" << endl; }
void show(float y) { cout << "Float" << endl; }
show(5); // This will call first function because integer is passed
show(5.6); // This will call second function because float is passed
</code></pre>
3. Run-Time Polymorphism or Dynamic Polymorphism:
In this type, we decide which version of the function to invoke at runtime.
Example:
<pre><code>
class Animal { public void sound(){}}
class Dog extends Animal{public void sound(){cout<<"Dog Barking";}}
class Cat extends Animal{public void sound(){cout<<"Cat Meowing";}}
Animal obj = new Dog();
obj.sound(); // Output : Dog Barking
((Dog)obj).sound(); // Output : Dog Barking
</code></pre>

## Structure in C and C++

  <table>
      <small>Structure in C and C++</small>
      <thead>
        <td><strong>C Structures</strong></td>
        <td><strong>C++ Structures</strong></td>
      </thead>
      <tbody>
        <tr>
          <td>
            Only data members are allowed, it cannot have member functions.
          </td>
          <td>Can hold both: member functions and data members.</td>
        </tr>
        <tr>
          <td>Cannot have static members.</td>
          <td>Can have static members.</td>
        </tr>
        <tr>
          <td>Cannot have a constructor inside a structure.</td>
          <td>Constructor creation is allowed.</td>
        </tr>
        <tr>
          <td>Direct Initialization of data members is not possible.</td>
          <td>Direct Initialization of data members is possible.</td>
        </tr>
        <tr>
          <td>
            Writing the <code>struct</code> keyword is necessary to declare structure-type variables.
           <details>
      <summary>Example</summary>
      <pre>
        <code>
          // declare a variable: 
          struct structName a;
        </code>
      </pre>
    </details>
          </td>
          <td>
            Writing the <code>struct</code> keyword is not necessary to declare structure-type variables.
           <details>
      <summary>Example</summary>
      <pre>
        <code>
          // declare a variable: 
        structName a;
        </code>
      </pre>
    </details>
          </td>
        </tr>
        <tr>
          <td>Do not have access modifiers.</td>
          <td>Supports access modifiers.</td>
        </tr>
        <tr>
          <td>Only pointers to structs are allowed.</td>
          <td>Can have both pointers and references to the struct.</td>
        </tr>
        <tr>
          <td>Sizeof operator will generate 0 for an empty structure.</td>
          <td>Sizeof operator will generate 1 for an empty structure.</td>
        </tr>
        <tr>
          <td>Data Hiding is not possible.</td>
          <td>Data Hiding is possible.</td>
        </tr>
      </tbody>
    </table>

    >[!NOTE]
    > Now,C++ programmers tend to use the structures for holding data and classes to hold both the data and funtions.
