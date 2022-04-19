// terminate example
#include <iostream>  // std::cout, std::cerr
#include <exception> // std::exception, std::terminate

int main(void)
{
    int p = 1;
    std::cout << "Attempting to allocate 1 GiB...";
    try
    {
        if (p < 10)
            throw p;
    }

    catch (char a) //terminate() called after throwing an instance of 'int' as type of thrown object is int and not char.
    {
        std::cout << "deksi\n";
    }
    std::cout << "Ok\n";
    return 0;
}