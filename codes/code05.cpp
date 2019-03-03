#include <iostream>

class extendedInt
{
    int n_;

public:

    // constructor
    extendedInt(const int& n )
    {
        n_ = n;
    };

    int makeDouble()
    {
        return n_ + n_;
    };

    bool displayDouble()
    {
        std::cout << "���� " << n_ << " ��2�{�� " << makeDouble() << " �ł��B" << std::endl;
        std::cout << std::endl;
    }
};

int main()
{
    int n;

    std::cout << "��������͂��Ă��������B" << std::endl;
    std::cin >> n;

    extendedInt extInt(n); 
    extInt.displayDouble();

    return 0;
}