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
        std::cout << "®” " << n_ << " ‚Ì2”{‚Í " << makeDouble() << " ‚Å‚·B" << std::endl;
        std::cout << std::endl;
    }
};

int main()
{
    int n;

    std::cout << "®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
    std::cin >> n;

    extendedInt extInt(n); 
    extInt.displayDouble();

    return 0;
}