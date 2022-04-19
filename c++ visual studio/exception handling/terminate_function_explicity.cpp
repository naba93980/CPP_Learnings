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

    catch (int a)
    {
        std::cout << "deksi\n";
    }
    std::terminate(); //terminate() called without an active exception ...after catching the exception & executing  try and catch block successfully...terminate() is called.
    std::cout << "Ok\n";
    return 0;
}