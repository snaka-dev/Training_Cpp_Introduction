#include <iostream>
    
// �N���X�̒�`�@�X�^�[�g
class extendedInt
{
    public:
    
        int makeDouble(const int& n)
        {
            return n + n ;
        };
};
// �N���X�̒�`�@�����܂�
    
int main()
{
    int n;
    extendedInt extInt;

    std::cout << "��������͂��Ă��������B" << std::endl;
    std::cin >> n;
    std::cout << "���� " << n << " ��2�{�� " << extInt.makeDouble(n) << " �ł��B" << std::endl; 

    return 0;
}