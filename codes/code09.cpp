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
        std::cout << typeName_ <<": " << value_ << " ��2�{�� " << makeDouble() << " �ł��B" << std::endl; 
        std::cout << std::endl;
    };

    bool read()
    {
        std::cout << typeName_ << " ����͂��Ă��������B" << std::endl;
        std::cin >> value_;
    };

    bool display()
    {
        std::cout << "typeName_ : " << typeName_ << std::endl;
        std::cout << "value_    : " << value_ << std::endl;
        std::cout << std::endl;
    };

    //overload of operator
    const extendedType operator +(const extendedType obj) const
    {
       // value and type is added!
       extendedType<Type> tmp(typeName_);
       tmp.value_ = value_ + obj.value_;
       tmp.typeName_ = typeName_ + "+" + obj.typeName_;
       return tmp;
    }
};


int main()
{
    extendedType<int> extInt01("����A");
    extInt01.read();
    extInt01.displayDouble();

    extendedType<int> extInt02("����B");
    extInt02.read();
    extInt02.displayDouble();

    std::cout << "�g������A�Ɗg������B�Ƃ̘a�u+�v" << std::endl;
    extInt01 = extInt01+extInt02 ;
    extInt01.display();
    extInt01.displayDouble();

    return 0;
}