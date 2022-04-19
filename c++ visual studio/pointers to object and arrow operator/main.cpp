#include <iostream>
class id
{
public:
    int x, y;
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void getdata()
    {
        std::cout << "the value of x = " << x << "\n";
        std::cout << "the value of y = " << y << "\n";
    }
};
int main()
{
    id obj;
    id *ptr = &obj;
    ptr->setdata(23, 45);
    (*ptr).getdata();

    id *p = new id[3];
    p->setdata(1, 2);
    p->getdata();

    (p + 1)->setdata(3, 4);
    (p + 1)->getdata();
    (*(p + 2)).setdata(5, 6);
    (*(p + 2)).getdata();

    std::cout << '\n';
    return 0;
}