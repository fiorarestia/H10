#include<iostream>
using namespace std;

int main()
{
    int restia; //n
    int fiora;//i
    
    printf("�п�J�ݭn��]�Ƥ��Ѫ����:");

    cin >> restia;

    fiora = 2;
    while( restia > 1 )
    {
        while( restia % fiora == 0 )
        {
            cout << fiora << " ";
            restia = restia / fiora;
        }
        fiora = fiora+1;
    }
    cout << endl;

    return 0;
}
