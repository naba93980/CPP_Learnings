#include <iostream>
class A //abstract class only to be used as a base class
{
public:
  int x;
  virtual void setdata(int a) = 0; //pure virtual function, definition must be overridden in derived classes.
                                   // void setdata(int a)
                                   // {
                                   //     x = a;
                                   //     std::cout << "val of x = " << x << std::endl;
                                   // }
};
class B : public A
{
public:
  int y;
  void setdata(int a) //if not defined then B is also abstract class
  {
    y = a;
    std::cout << "val of y = " << y << std::endl;
  }
};
A &print(A &j)
{
  std::cout << j.x << "\n";
  j.x = 678;
  return j;
}
int main()
{
  //A objj; //object of abstract class type "A" is not allowed: -- function "A::setdata" is a pure virtual function
  B obj;
  A *p = &obj;
  A &x = obj;
  x.setdata(49);    //
  p->setdata(50);   //  if there was no virtual function in base class then the defined function in base class would have been called.
  (*p).setdata(78); //
  (*p).x = 999;
  std::cout << (print(*p).x) << "\n";
  std::cout << obj.x;
  std::cout << '\n';
  return 0;
}

/*                          --- FROM IBM SITE ---

1. An abstract class is a class that is designed to be specifically used as a base class. 
An abstract class contains at least one pure virtual function. 
You declare a pure virtual function by using a pure specifier (= 0) in the declaration 
of a virtual member function in the class declaration.

class AB {
public:
  virtual void f() = 0;
};


2. Function AB::f is a pure virtual function. A function declaration cannot have both a pure specifier 
and a definition. For example, the compiler will not allow the following:

struct A {
  virtual void g() { } = 0;
};


3. You cannot use an abstract class as a parameter type, a function return type, or the type of an 
explicit conversion, nor can you declare an object of an abstract class. You can, however, declare pointers 
and references to an abstract class. The following example demonstrates this:

struct A {
  virtual void f() = 0;
};

struct B : A {
  virtual void f() { }
};

// Error:
// Class A is an abstract class
// A g();

// Error:
// Class A is an abstract class
// void h(A);

A& i(A&); //works fine

int main() {

// Error:
// Class A is an abstract class
//   A a;

   A* pa;
   B b;

// Error:
// Class A is an abstract class
//   static_cast<A>(b);
}

Class A is an abstract class. The compiler would not allow the function declarations A g() or 
void h(A), declaration of object a, nor the static cast of b to type A.



4. Virtual member functions are inherited. A class derived from an abstract base class will also be 
abstract unless you override each pure virtual function in the derived class.

class AB {
public:
  virtual void f() = 0;
};

class D2 : public AB {
  void g();
};

int main() {
  D2 d;
}

The compiler will not allow the declaration of object d because D2 is an abstract class; 
it inherited the pure virtual function f()from AB. The compiler will allow the declaration of 
object d if you define function D2::f(), as this overrides the inherited pure virtual function AB::f(). 
Function AB::f() needs to be overridden if you want to avoid the abstraction of D2.


5. Note that you can derive an abstract class from a non-abstract class, and you can override a non-pure 
virtual function with a pure virtual function.


6. You can call member functions from a constructor or destructor of an abstract class. 
However, the results of calling a pure virtual function from its constructor 
are undefined. The following example demonstrates this:

struct A {
  A() {
    direct();
    indirect();
  }
  virtual void direct() = 0;
  virtual void indirect() { direct(); }
};

The default constructor of A calls the pure virtual function direct() both directly and indirectly 
(through indirect()). The compiler issues a warning for the direct call to the pure virtual function, 
but not for the indirect call.



                                --- FROM GFG SITE ---

1. A pure virtual function is implemented by classes which are derived from a Abstract class. 
Following is a simple example to demonstrate the same.

2.  A class is abstract if it has at least one pure virtual function. 

3.We can have pointers and references of abstract class type. 

#include<iostream> 

using namespace std; 

class Base 
{ 

public: 
   virtual void show() = 0; 

}; 

class Derived: public Base 
{ 

public: 
    void show() { cout << "In Derived \n"; } 

}; 

int main(void) 
{ 
    Base *bp = new Derived(); 
    bp->show(); 
    return 0; 
}
 
Output: 
In Derived 


4. If we do not override the pure virtual function in derived class, 
then derived class also becomes abstract class. 


5. An abstract class can have constructors. 

#include<iostream> 

using namespace std; 

  
// An abstract class with constructor 

class Base 
{ 

protected: 
    int x; 

public: 
    virtual void fun() = 0; 

Base(int i) { 
              x = i;  
            cout<<"Constructor of base called\n"; 
            } 
}; 

class Derived: public Base 
{ 
   int y; 

public: 
    Derived(int i, int j):Base(i) { y = j; } 
    void fun() { cout << "x = " << x << ", y = " << y<<'\n'; } 
}; 

int main(void) 
{  

    Derived d(4, 5);  
    d.fun(); 

    //object creation using pointer of base class 
    Base *ptr=new Derived(6,7); 

      ptr->fun(); 

    return 0; 
} 
 
Output: 

Constructor of base called
x = 4, y = 5
Constructor of base called
x = 6, y = 7

*/