#include <iostream>
    
// クラスの定義　スタート
class extendedInt
{
    public:
    
        int makeDouble(const int& n)
        {
            return n + n ;
        };
};
// クラスの定義　ここまで
    
int main()
{
    int n;
    extendedInt extInt;

    std::cout << "整数を入力してください。" << std::endl;
    std::cin >> n;
    std::cout << "整数 " << n << " の2倍は " << extInt.makeDouble(n) << " です。" << std::endl; 

    return 0;
}