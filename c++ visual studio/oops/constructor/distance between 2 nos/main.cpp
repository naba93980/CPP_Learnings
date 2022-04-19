#include <iostream>
#include <cmath>
class point_B;
class point_A
{
    int x, y;

public:
    point_A(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void distance(point_A, point_B);
};

class point_B
{
    int x, y;

public:
    point_B(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void distance(point_A, point_B);
};
void distance(point_A a, point_B b)
{
    std::cout << sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}
int main()
{
    point_A a = point_A(1, 0);
    point_B b = point_B(70, 0);
    distance(a, b);
    std::cout << '\n';
    return 0;
}