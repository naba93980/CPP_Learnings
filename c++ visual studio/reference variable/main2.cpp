#include <iostream>
int &var(int &a)
{
    std::cout << &(a) << "\n";
    int c = a;
    c++;
    std::cout << &(c) << '\n';
    int &k = c;
    std::cout << &(k) << '\n';
    return k;
} //reference to reference variable k, refering to local variable c returned.
int main()
{
    int a = 10;
    std::cout << &(a) << "\n----------1\n";
    std::cout << var(a) << "\n-------------2\n";
    int &z = var(a); //WRONG PRACTICE, int& RETURNS REFERNCE VARIABLE TO K, ONCE RETURNED THE LOCAL VARIABLE IN THE FUNCTION VANISHES, SO OUTPUT WILL BE WRONG
    std::cout << z << "\n";
    std::cout << z << "\n";
    std::cout << &z << "--\n------------------3\n";
    std::cout << z << "\n";
    std::cout << &z << "\n";
    int *p = &z;
    std::cout << *p;
    //std::cout << *p;
    std::cout << '\n';
    return 0;
}
