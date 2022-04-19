#include <iostream>
#include <stdio.h>
struct car
{
    static int number;
    int zkh = 10;
};
int car::number; //what it means to compiler is, create variable car::number of type int, once u see car::number declaration, u see it is static so create in data segment, also u see car::number in declaration is of type int and this is what has been told to you at the beggining i.e to create the variable car::number of type int.
//all objects will have the static variable, but since static variable is defined in data segment
//so the variable is to be defined only once before creation of objects and all objects will access that
//same memory in data segment.
int main()
{
    struct car h;
    std::cout << h.zkh << std::endl;
    struct car k;
    struct car l;
    printf("%d\n", l.number);
    l.number = 6;
    k.number = 60;
    printf("%d\n", l.number);
    printf("%d", k.number);
    return 0;
}
//static memeber in structure is possible in c++ but not in c.