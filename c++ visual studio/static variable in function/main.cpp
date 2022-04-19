#include <iostream>
inline int sum(int a, int b)
{
    static int c = 0;   //in static variable initialize works only once, next time no initialize only assignment will work
                        //gets memory at data segment and stays until program finishes.
    int sum = a + b;    //gets memory at stack and memory vanishes after the function is returned.
    return ++sum + c++; //41+0 //41+1 //41+2 //41+3 //41+4 //c is getting incremented only, not initialized again and again
}
int main()
{
    int a = 10, b = 30, c = 40;
    std::cout << sum(a, b) << std::endl;
    std::cout << sum(a, b) << std::endl;
    std::cout << sum(a, b) << std::endl;
    std::cout << sum(a, b) << std::endl;
    std::cout << "hello" << std::endl;
    std::cout << "hello" << std::endl;
    std::cout << "hello" << std::endl;



    return 0;
}