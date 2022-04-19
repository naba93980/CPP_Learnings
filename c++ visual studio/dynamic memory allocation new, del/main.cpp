#include <iostream>
#include <new>

int main()
{
    int *q = new (std::nothrow) int(10);
    std::cout << *q << "\n";
    int *l = new (std::nothrow) int[3]{};
    std::cout << l[0] << l[1] << l[2] << "\n";
    int *lw = new (std::nothrow) int[3]{1, 2, 3};
    std::cout << lw[0] << lw[1] << lw[2] << "\n";
    int *p = (int *)operator new(sizeof(int));
    *p = 100;
    std::cout << *p;
    delete q;
    delete p;
    delete[] l;
    delete[] lw;
    std::cout << '\n';
    return 0;
}