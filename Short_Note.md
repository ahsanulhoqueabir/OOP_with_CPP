# Short Note

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
<ol>


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
 