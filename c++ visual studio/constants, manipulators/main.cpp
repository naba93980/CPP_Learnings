#include <iostream>
#include <iomanip>
int main()
{
    const int a = 10;
    //a = 20; //a is read only variable so error.
    //std::cout << a;
    //---------manipulators----------//
    std::cout << std::setbase(16) //std::hex or std::oct (defined) can also be used to set base
              << std::setiosflags(std::ios::showbase | std::ios::uppercase)
              << 100 << std::endl
              << 10 << std::endl;
    //setbase decides the base of the number to be printed 16 means hexadecimal, 8 means octal, 10 means decimal , zero for any other base.
    //std::ios::showbase & :: uppercase means show the base along with the number in uppercase eg. 0X for hexadecimal.
    std::cout << std::setfill('c') << std::setw(10) << 77 << std::endl;
    //setw sets width , setfill fills a character upto specified width.
    return 0;
}