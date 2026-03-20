#include <iostream>
#include <string.h>

void printer(char c,int n)
{
    int star=0,space=0;
    for (int i=0;i<n;i++)
    {
        star = 1+2*i;space = n-i-1;
        for (int j=0;j<n;j++)
        {
            for (int j=0;j<space;j++)
            {
                std::cout << ' ';
            }
            for (int k=0;k<star;k++)
            {
                std::cout << c;
            }
            for (int j=0;j<space;j++)
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

}; //christmas tree pattern;

int main() 
{
    char c='*';
    int n=0;
    std::cin >>n;
    printer(c,n);//c-1 due to j<i in inner loop in func
    return 0;
}