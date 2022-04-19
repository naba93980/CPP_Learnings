#include <iostream>
#include <iomanip>
int &returnval(int &a) //unlike in literal return type(be it by value or adress(using pointer))
//in reference varible return type, a reference or an alias or synonymus variable is returned.
{
    int &c = a;
    std::cout << "The val of c : " << c << "\n"
              << "The adress of c : " << &c << "\n";
    return c;
}
int main()
{
    int a = 10;
    int &k = a;
    std::cout << k;
    int b = 20;
    std::cout << &returnval(a);
    // std::cout<< (returnval(a)=90)<<"\n";
    //---  std::cout<< (&(returnval(a)));
    //std::cout << "The val of a : " <<a ;
    //std::cout << "\n"<< "The adress of a : " << &a << "\n";
    return 0;
}