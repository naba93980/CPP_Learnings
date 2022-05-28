#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(34);
    v.push_back(49);
    v.push_back(56);
    v.push_back(56);
    v.push_back(62);
    v.push_back(76);
    std::cout << binary_search(v.begin(), v.end(), 76) << endl;
    cout << lower_bound(v.begin(), v.end(), 56) - v.begin() << endl;
    cout << lower_bound(v.begin(), v.end(), 62) - v.begin() << endl;
    cout << lower_bound(v.begin(), v.end(), 61) - v.begin() << endl;
    cout << lower_bound(v.begin(), v.end(), 78) - v.begin() << endl;
    cout << lower_bound(v.begin(), v.end(), 787) - v.begin() << endl;
    cout << min(5, 7) << endl;
    cout << max(5, 7) << endl;
    int a = 3, b = 7;
    std::cout << a << b;
    swap(a, b);
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s;
    std::cout << a << b << endl;
    rotate(v.begin(), v.begin() + 3, v.end());
    for (auto &&i : v)
    {
        cout << i << endl;
    }
    sort(v.begin(), v.end());
    cout << "-------------\n";
    for (auto &&i : v)
    {
        cout << i << endl;
    }
    std::cout << '\n';
    return 0;
}
// 2. lower_bound(start_ptr, end_ptr, num) : Returns pointer to “position of num” if container contains 1 occurrence of num. Returns pointer to “first position of num” if container contains multiple occurrence of num. Returns pointer to “position of next higher number than num” if container does not contain occurrence of num. Subtracting the pointer to 1st position i.e “vect.begin()” returns the actual index.
// 3. upper_bound(start_ptr, end_ptr, num) : Returns pointer to “position of next higher number than num” if container contains 1 occurrence of num. Returns pointer to “first position of next higher number than last occurrence of num” if container contains multiple occurrence of num. Returns pointer to “position of next higher number than num” if container does not contain occurrence of num. Subtracting the pointer to 1st position i.e “vect.begin()” returns the actual index.