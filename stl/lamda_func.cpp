#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>


class entity
{
    private :
        std::string m_name;
        mutable int m_Debug_count = 0;
        
    public:
        // entity(const std::string&name) : m_name(name){}
        const std::string& GetName() const
        {
            m_Debug_count++;
            return m_name;
        }
            
};



int main()
{
    // struct 
    // {
    //     void operator() (int x){
    //         std::cout << x << "\n";
    //     }
    // }something;

    const entity p;
    p.GetName();

    float d= 24.3;

    auto f = [=]() mutable
    {
        std::cout << "Hello"<< " " <<d << std::endl;
    };//[=] by value ; [&] = by reference ; mutable creates a local variable and preserves og x ; auto allows all datatypes

    f();

    // [](int x){std::cout << x << "\n";} //good practice to write down func def here then cp_paste
    
    //[captured close:cc](parameter){func def};
    std::vector <int> v = {3,23,43,2,22};
    auto A = [=] () 
    {
        return (v[0] + v[1] * v[2] + v[3]) ^ v[4];
    };

    std::function<int()> fA(ref(A));
    //std::for_each(v.begin(),v.end(),something);
    //std::for_each(v.begin(),v.end(),[d, &e](int x){std::cout << d*x << "\n"; std::cout <<"O IS :"<< e + (x/d)<< "\n";});

}