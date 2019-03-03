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
    };

    bool displayDouble()
    {
        std::cout << typeName_ << value_ << " ��2�{�� " << makeDouble() << " �ł��B" << std::endl; 
        std::cout << std::endl;
    };

    bool read()
    {
        std::cout << typeName_ << " ����͂��Ă��������B" << std::endl;
        std::cin >> value_;
    };
};


int main()
{
        extendedType<int> extInt("����");
        extInt.read();
        extInt.displayDouble();
    
        extendedType<float> extFlt("����");
        extFlt.read();
        extFlt.displayDouble();
    
        extendedType<std::string> extStr("������");
        extStr.read();
        extStr.displayDouble();
}