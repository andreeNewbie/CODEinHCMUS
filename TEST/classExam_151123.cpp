#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));

    bool result = false;
    int STT = 1;

    char driverAnswer[20];
    char rightAnswer[20] = {'A', 'B', 'C', 'D', 'D'
                            'C', 'B', 'A', 'A', 'C'
                            'D', 'D', 'B', 'A', 'B'
                            'D', 'A', 'D', 'D', 'C'};
    
    while(!result)
    {
        //title -> easy to distinguish
        cout << "________________________\n";
        cout << "LAN CHAY THU " << STT << endl;

        for (int i = 0; i < 20; i++)
        {
            diverAnswer[i] = rand() % ('D' - 'A' + 1) + 'A'
            cout << "Dap an ngau nhien cua cau " << (i + 1) << " la " << driverAnswer[i] << endl;
        }

        int count = 0; // counter right answeranswer
        for (int i = 0; i < 20; i++)
        {
            if (driverAnswer[i] == rightAnswer[i])
                count++;
        }

        STT++;

        if (count >= 15)
            result = true;
    }
    return 0;
}
