#include <iostream>

class extendedInt
{
    int n_;

public:

    // constructor
    extendedInt(const int& n )
    {
        n_ = n;
    }

    int makeDouble()
    {
        return n_ + n_;
    }

    void displayDouble()
    {
        std::cout << "整数 " << n_ << " の2倍は " << makeDouble() << " です。" << std::endl;
        std::cout << std::endl;
    }
};

int main()
{
    int n;

    std::cout << "整数を入力してください。" << std::endl;
    std::cin >> n;

    extendedInt extInt(n); 
    extInt.displayDouble();

    return 0;
}