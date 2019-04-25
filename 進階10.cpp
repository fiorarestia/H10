#include<iostream>
using namespace std;

int main()
{
    int restia; //n
    int fiora;//i
    
    printf("請輸入需要質因數分解的整數:");

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
