#include <iostream>
#include <stdio.h>
struct car
{
    const static int number = 6; //constant static member can be defined inside structure as
    //any object wont be able to change it. so compiler implicitly creates a variable in data segment with the initialized value.
    //all objects will have the same value of the constant variable.
};
int main()
{
    struct car hrl;
    struct car hrk;
    printf("%d\n", hrl.number);
    printf("%d\n", hrl.number);
    printf("%d", hrk.number);
    return 0;
}
//static memeber in structure is possible in c++ but not in c.