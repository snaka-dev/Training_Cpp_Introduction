#include <iostream>
    
// �N���X�̒�`�@�X�^�[�g
class extendedInt
{
    int n_;
    
    public:
    
        int makeDouble()
        {
            return n_ + n_ ;
        };

        bool displayDouble()
        {
            std::cout << "���� " << n_ << " ��2�{�� " << makeDouble() << " �ł��B" << std::endl;
            std::cout << std::endl;
        }

        bool read()
        {
            std::cout <<  " ��������͂��Ă��������B" << std::endl;
            std::cin >> n_;
            std::cout << std::endl;
        };
};
// �N���X�̒�`�@�����܂�
    
int main()
{
    extendedInt extInt;

    extInt.read(); 
    extInt.displayDouble();

    return 0;
}