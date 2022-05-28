// queue jiska first element sarvada greatest hoga(max heap) default case
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> maxi;                            // max heap
    priority_queue<int, vector<int>, greater<int>> mini; // use greater<> comparator for min heap
    maxi.push(34);
    maxi.push(23);
    maxi.push(36);
    maxi.push(12);
    // std::cout << maxi.top();
    // maxi.pop();
    // std::cout << maxi.top();
    // maxi.pop();
    // std::cout << maxi.top();
    // maxi.pop();
    // std::cout << maxi.top();
    // maxi.pop();
    int size = maxi.size();
    for (auto i = 0; i < size; i++)
    {
        std::cout << maxi.top();
        maxi.pop();
    }
    std::cout << "\nempty hai kiya : " << maxi.empty() << endl;

    std::cout << '\n';
    return 0;
}
