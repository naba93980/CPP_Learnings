#include <iostream>
#include <stdio.h>
struct car
{
    static int number = 6; //non constant static member cannot be defined inside structure as
    //any object will be able to change it. since as per the template any object that will access the static
    //variable will have 6 as value, but if an object after accessing the variable changes the value,
    //the template condition gets failed as the value gets changed from 6, so it is not possible to initialize non constant static variable inside structure.
    //error code : ISO C++ forbids in - class initialization of non - const static member 'car::number'
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