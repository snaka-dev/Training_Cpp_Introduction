#include <iostream>

// function
int makeDouble(const int& n)
{
   return n + n ;
};

int main()
{
    int n;
    std::cout << "��������͂��Ă��������B" << std::endl;
    std::cin >> n;
    std::cout << "���� " << n << " ��2�{�� " << makeDouble(n) << " �ł��B" << std::endl; 

     return 0;
}