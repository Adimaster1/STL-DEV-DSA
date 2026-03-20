#include <iostream>
#include <string.h>

void printer(char c,int n)
{
     for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cout << c ;
        }
        std::cout << std::endl;
    }
}; //printing a square character matrix

int main() 
{
    char c='*';
    int n=0;
    std::cin >>n;
    printer(c,n);
    return 0;
}