#include <iostream>

// ������p�N���X
class extendedInt
{
    int n_;

public:

    int makeDouble()
    {
        return n_ + n_;
    };

    bool displayDouble()
    {
        std::cout << "���� " << n_ << " ��2�{�� " << makeDouble() << " �ł��B" << std::endl; 
        std::cout << std::endl;
    };

    bool read()
    {
        std::cout << "��������͂��Ă��������B" << std::endl;
        std::cin >> n_;
    };
};

// ������p�N���X
class extendedFloat
{
    float f_;

public:

    float makeDouble()
    {
        return f_ + f_;
    };

    bool displayDouble()
    {
        std::cout << "���� " << f_ << " ��2�{�� " << makeDouble() << " �ł��B" << std::endl; 
    };

    bool read()
    {
        std::cout << "��������͂��Ă��������B" << std::endl;
        std::cin >> f_;
    };
};

int main()
{
    extendedInt extInt;
    extInt.read();
    extInt.displayDouble();


    extendedFloat extFlt;
    extFlt.read();
    extFlt.displayDouble();

    return 0;
}