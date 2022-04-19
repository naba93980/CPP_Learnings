#include <iostream>
class Base
{
    int data1;

public:
    int data2;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};
class derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}
void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    std::cout << "The value of data 1 = " << getdata1() << std::endl;
    std::cout << "The value of data 2 = " << getdata2() << std::endl;
    std::cout << "The value of data 3 = " << data3 << std::endl;
}
int main()
{
    derived A;
    A.setdata();
    A.process();
    A.display();
    std::cout << '\n';
    return 0;
}