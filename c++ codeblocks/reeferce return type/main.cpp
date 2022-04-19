#include <iostream>
int &var(int &a)
{
    std::cout << &(a) << "\n";
    int c = a;
    c++;
    std::cout << &(c) << '\n';
    int &k = c;
    std::cout << &(k) << '\n';
    return k;
}
int main()
{//RETURNING  REFERENCE TO A LOCAL VARIABLE IS WRONG BUT SOMEHOW IT IS WORKING HERE FOR THE INITIAL TIMES.
    int a = 10;
    std::cout << &(a) << "\n----------1\n";
    std::cout << var(a) << "\n-------------2\n";
    int &z = var(a);
    std::cout << z<<"\n";
    std::cout << &z << "\n------------------3\n";
    int *p = &z;
    std::cout << *p<<"\n";
     std::cout << *p<<"\n";
     std::cout << *p<<'\n';
    std::cout << '\n';
    std::cout<<"hello";
    return 0;
}
