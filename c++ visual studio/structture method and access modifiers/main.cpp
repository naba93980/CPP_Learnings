#include <iostream>
struct car
{
private:
    int key = 3426;

public:
    void check_key(int);
} honda;
void car::check_key(int x)
{
    if (x == key)
        std::cout << "car started vroom vroom\n";
    else
        std::cout << "not started\n";
    return;
}

int main()
{
    honda.check_key(3426);
    std::cout << '\n';
    return 0;
}