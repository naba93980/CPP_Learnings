#include <iostream>

int sum(int a, const int b = 10) //b=10 is default argument , if a 2nd argument is passed through actual parameters
{                                //then b will get initialized with the passed argument otherwise will get initialized with 10;
    //b = 90; is constant variable, will give error- assignment in a read only variable
    return a + b;
}

int main()
{
    int a = 10;
    std::cout << sum(a); //only one arg is sufficient the 2nd arg is the default one declared in formal parameter
    return 0;
}
