#include <iostream>
#include <string>

template<class Type>
class extendedType
{

protected:  // this will be accesible from child-class.

    Type value_;
    std::string typeName_;

public:

    // added default constructor
    extendedType()
    :
    typeName_("noTypeSpecifiedYet")
    {
        std::cout << "Default constructor: test message from extendedType constructor!" << std::endl;
    }


    extendedType(const std::string& type)
    {
        std::cout << "test message from extendedType constructor!" << std::endl;
        typeName_=type;
    }

    Type makeDouble()
    {
        return value_ + value_;
    }

    void displayDouble()
    {
        std::cout << typeName_ <<": " << value_ << " の2倍は " << makeDouble() << " です。" << std::endl; 
        std::cout << std::endl;
    }

    void read()
    {
        std::cout << typeName_ << " を入力してください。" << std::endl;
        std::cin >> value_;
    }

    void display()
    {
        std::cout << "typeName_ : " << typeName_ << std::endl;
        std::cout << "value_    : " << value_ << std::endl;
        std::cout << std::endl;
    }

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

//--------------------------
// 
template<class Type>
class namedExtendedType
:
    public extendedType<Type>
{
    std::string instanceName_;

public:
    namedExtendedType()
    :
        extendedType<Type>()
    {
    }

    namedExtendedType(const std::string& type)
    :
        extendedType<Type>(type)
    {
    }

    // Added. 
    void setTypeName(const std::string& tName_)
    {
        this->typeName_ = tName_;
    }

    void setInstanceName(const std::string& name_)
    {
        instanceName_ = name_;
    }

    void display()
    {
        std::cout << "instanceName_ : " << instanceName_ << std::endl;
        extendedType<Type>::display();
    }

    //overload of operator
    const namedExtendedType operator +(const namedExtendedType obj) const
    {
       // value and type is added!
       namedExtendedType<Type> tmp(extendedType<Type>::typeName_);
       tmp.value_ = extendedType<Type>::value_ + obj.value_;
       tmp.typeName_ = extendedType<Type>::typeName_ + "+" + obj.typeName_;
       tmp.instanceName_ = instanceName_ + "+" + obj.instanceName_;
       return tmp;
     }
};

int main()
{
    //extendedType<int> extInt01("整数A");
    namedExtendedType<int> extInt01; // use default constructor
    extInt01.setTypeName("整数");
    extInt01.read();
    extInt01.setInstanceName("FirstInt");
    extInt01.displayDouble();
    extInt01.display();

    namedExtendedType<int> extInt02("整数B");
    extInt02.read();
    extInt02.displayDouble();

    std::cout << "拡張整数Aと拡張整数Bとの和「+」" << std::endl;
    extInt01 = extInt01+extInt02 ;
    extInt01.display();

    return 0;
}