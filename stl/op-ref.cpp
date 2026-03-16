#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


int main()
{
    std::vector <int> v = {3,23,43,2,22};
    auto A = [=] () 
    {
        std::cout << "working !";
        return (v[0] + v[1] * v[2] + v[3]) ^ v[4];
    };
    std::function<int()> fA(std::ref(A));
    fA();
    return 0;
}//this is effective memory management of the heap (removing dynamic memory allocation) 
