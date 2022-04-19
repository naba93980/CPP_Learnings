#include <iostream>

// int add(int x)
// {
//     return ++x;
// }                                                //it doesnot works
// int add(int& x)
// {
//     return ++x;
// }
//------------------------------------------------------------------------------
// int add(const int *x)
// {
//     std::cout << "this one called";
//     return 10 + (*(x));
// }                                                //it works
// int add(int *x)
// {
//     return 1 + (*(x));
// }
//------------------------------------------------------------------------------
// void print(int *a)
// {
//     std::cout << "called*";
// }                                                //it doesnot works
// void print(int a[])
// {
//     std::cout << "called[]";
// }
//--------------------------------------------------------------------------------
// int add(int x)
// {
//     return ++x;
// }                                                 //it doesnot works
// int add(int x = 100)
// {
//     return ++x;
// }
//------------------------------------------------------------------------------
// int add(int x)
// {
//     return ++x;
// }
// const int add(int x)
// {
//     return ++x;                                   //it doesnot works
// }
// volatile int add(int x)
// {
//     return ++x;
// }
//------------------------------------------------------------------------------
// int add(int x)
// {
//     return ++x;
// }                                                 //it doesnot works
// static int add(int x)
// {
//     return ++x;
// }
//------------------------------------------------------------------------------
// int add(int x)
// {
//     return ++x;
// }                                                 //it doesnot works
// char add(int x)
// {
//     return ++x;
// }
//------------------------------------------------------------------------------
int main()
{
    // const int x = 10;
    // const int *p = &x;
    // std::cout << add(p);
    //-----------------------------------------------
    // int j = 20;
    // std::cout << add(j) << "\n";
    //-----------------------------------------------
    // int a[3] = {1, 2, 3};
    // print(a);
    std::cout << '\n';
    return 0;
}
//apart from that function overloading doesnot works whn the function types
//are eg. "void h(int())" & "void h(int(*)())"