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
    // template �� int �Ƃ���extendedType�N���X�̃C���X�^���X�𐶐�
    extendedType<int> extInt("����");

    extInt.read();
    extInt.displayDouble();

    // template �� float �Ƃ���extendedType�N���X�̃C���X�^���X�𐶐�
    extendedType<float> extFlt("����");

    extFlt.read();
    extFlt.displayDouble();

    return 0;
}