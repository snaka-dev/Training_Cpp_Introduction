#include <iostream>

// function
int makeDouble(const int& n)
{
   return n + n ;
}

int main()
{
    int n;
    std::cout << "整数を入力してください。" << std::endl;
    std::cin >> n;
    std::cout << "整数 " << n << " の2倍は " << makeDouble(n) << " です。" << std::endl; 

     return 0;
}