#include <iostream>
#include <stdio.h>
int main()
{
    int x = 5;
    int d = 500;
    int &y = x;
    int &k = y;
    k = d;
    std::cout << &x << "\t" << &d << "\n";
    std::cout << k << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";
    y = 10;
    std::cout << x << y << "\n";
    x = 20;
    std::cout << x << y << "\n";
    int *p1 = &x, *p2 = &y;
    std::cout << p1 << "\t" << p2 << std::endl;
    printf("\n%d  , %d", p1, p2);
    printf("\n%p  , %p", p1, p2);

    //x changes y changes .....y changes x changes.
    return 0;
}