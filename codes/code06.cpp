#include <iostream>

// 整数専用クラス
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
        std::cout << "整数 " << n_ << " の2倍は " << makeDouble() << " です。" << std::endl; 
        std::cout << std::endl;
    };

    bool read()
    {
        std::cout << "整数を入力してください。" << std::endl;
        std::cin >> n_;
    };
};

// 実数専用クラス
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
        std::cout << "実数 " << f_ << " の2倍は " << makeDouble() << " です。" << std::endl; 
    };

    bool read()
    {
        std::cout << "実数を入力してください。" << std::endl;
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