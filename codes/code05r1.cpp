#include <iostream>

class extendedInt
{
    int n_;

public:

    //宣言のみ
    extendedInt(const int& n );

    int makeDouble();

    bool displayDouble();
};

//定義はこちらに
extendedInt::extendedInt(const int& n )
{
    n_ = n;
};

int extendedInt::makeDouble()
{
    return n_ + n_;
};

bool extendedInt::displayDouble()
{
    std::cout << "整数 " << n_ << " の2倍は " << makeDouble() << " です。" << std::endl;
    std::cout << std::endl;
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
