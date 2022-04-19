#include <iostream>
#include <stdio.h>
int main()
{
    float x = 3.4454;
    double y = 3.6;
    int z = 5;

    std::cout << "the value of x = " << x << std::endl;
    std::cout << "the value of y = " << y << std::endl;
    std::cout << "the value of y = " << (int)x << std::endl;
    std::cout << "the size of y = " << sizeof(y) << std::endl;
    std::cout << "the x+z = " << x + z << std::endl;
    std::cout << "the x+z = " << (int)x + z << std::endl;
    printf("the value of x = %f ", x);
    return 0;
}