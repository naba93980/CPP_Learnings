#include <iostream>

int main()
{
    int val = 257; //memory sliced
    char v = char(val);
    char *p = &v;
    printf("%d", *p);

    std::cout << '\n';
    return 0;
}