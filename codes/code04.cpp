#include <iostream>
    
// クラスの定義　スタート
class extendedInt
{
    int n_;
    
    public:
    
        int makeDouble()
        {
            return n_ + n_ ;
        }

        void displayDouble()
        {
            std::cout << "整数 " << n_ << " の2倍は " << makeDouble() << " です。" << std::endl;
            std::cout << std::endl;
        }

        void read()
        {
            std::cout <<  " 整数を入力してください。" << std::endl;
            std::cin >> n_;
            std::cout << std::endl;
        }
};
// クラスの定義　ここまで
    
int main()
{
    extendedInt extInt;

    extInt.read(); 
    extInt.displayDouble();

    return 0;
}