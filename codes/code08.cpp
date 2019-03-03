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
        std::cout << typeName_ << value_ << " ÇÃ2î{ÇÕ " << makeDouble() << " Ç≈Ç∑ÅB" << std::endl; 
        std::cout << std::endl;
    };

    bool read()
    {
        std::cout << typeName_ << " Çì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅB" << std::endl;
        std::cin >> value_;
    };
};


int main()
{
        extendedType<int> extInt("êÆêî");
        extInt.read();
        extInt.displayDouble();
    
        extendedType<float> extFlt("é¿êî");
        extFlt.read();
        extFlt.displayDouble();
    
        extendedType<std::string> extStr("ï∂éöóÒ");
        extStr.read();
        extStr.displayDouble();
}