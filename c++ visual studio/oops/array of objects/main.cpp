#include <iostream>
class employee
{
private:
    int id;
    int salary;

public:
    void set_data(int id, int salary)
    {
        employee::id = id;
        employee::salary = salary;
    }
    void display(int emp)
    {
        std::cout << "The id and salary of employee " << emp << " is " << id << " & " << salary << std::endl;
    }
};

int main()
{
    employee emp[3];
    int id, salary, emp_no;
    ;
    for (size_t i = 0; i <= 2; i++)
    {
        std::cout << "Enter id : \n";
        std::cin >> id;
        std::cout << "Enter salary : \n";
        std::cin >> salary;
        emp[i].set_data(id, salary);
    }
    std::cout << "Enter the employee number whose data u wanna c : " << std::endl;
    std::cin >> emp_no;
    emp[emp_no - 1].display(emp_no);
    std::cout << '\n';
    return 0;
}
