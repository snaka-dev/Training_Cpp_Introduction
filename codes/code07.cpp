#include <iostream>
#include <string>

template<class Type>
class extendedType
{
    Type value_;
    std::string typeName_;

public:

    extendedType(const std::string& type)
    {
        typeName_=type;
    }

    Type makeDouble()
    {
        return value_ + value_;
    }

    void displayDouble()
    {
        std::cout << typeName_ << value_ << " の2倍は " << makeDouble() << " です。" << std::endl; 
        std::cout << std::endl;
    }

    void read()
    {
        std::cout << typeName_ << " を入力してください。" << std::endl;
        std::cin >> value_;
    }
};


int main()
{
    // template を int としてextendedTypeクラスのインスタンスを生成
    extendedType<int> extInt("整数");

    extInt.read();
    extInt.displayDouble();

    // template を float としてextendedTypeクラスのインスタンスを生成
    extendedType<float> extFlt("実数");

    extFlt.read();
    extFlt.displayDouble();

    return 0;
}