#include <iostream>
class student //base class 1
{
protected:
    int roll;

public:
    void set_roll(int rol)
    {
        roll = rol;
    }
    void get_roll()
    {
        std::cout << "The roll number is " << roll << std::endl;
    }
};
class marks : public student //derived class 1, base class 2 ....// inherits roll , set roll , get roll
{
    int maths, science;
    //  protected: roll

public:
    void set_marks(int math, int sci)
    {
        maths = math;
        science = sci;
    }
    void get_marks()
    {
        std::cout << "The avg marks are = " << ((maths + science) / 2) << std::endl;
    }
    //  set_roll , get_roll
};
class result : public marks //derived class 2 ....// inherits maths, science, roll, set marks, get marks  set roll, get roll
{
    //no access : maths , science
    //protected: roll
public:
    result(int rull)
    {
        roll = rull;
    }
    void display()
    {
        set_roll(roll);
        get_roll();
        get_marks();
    }
    // set_roll , get_roll, set_marks, get_marks
};

int main()
{
    std::cout << sizeof(student) << sizeof(marks) << sizeof(result) << std::endl;
    result stud1(11);
    stud1.set_marks(100, 98);
    stud1.display();
    std::cout << '\n';
    return 0;
}