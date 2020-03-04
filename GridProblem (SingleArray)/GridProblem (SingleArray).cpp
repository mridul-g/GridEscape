// GridProblem (SingleArray).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void calculate(int R, int C, int K)
{
    char T[1000];

    for (int i = 0; i < R * C; i++)
    {
        T[i] = 'S';
    }

    if ((R >= 2 && C >= 2 && R * C - K >= 4) || R * C - K == 0)
    {
        cout << "Possible \n";

        if (R * C - K < C + 2)
        {
            for (int i = 0; i < R * C - K - 2; i++)
            {
                T[i] = 'W';
            }
        }

        else
        {
            for (int i = 0; i < R * C - K; i++)
            {
                T[i] = 'W';
            }
        }


        for (int i = 0; i <= R; i++)
        {

            if (T[i * C] == 'W')
                T[i * C] = 'N';

        }
        T[0] = 'E'; T[1] = 'S'; T[C] = 'N'; T[C + 1] = 'W';

        for (int i = 0; i < R * C; i++)
        {
            cout << T[i] << " ";
            if ((i + 1) % C == 0)
            {
                cout << endl;
            }

        }
    }


    else {
        cout << "not possible";

    }
    cout << endl;
}

int main()
{
    cout << "No. of test cases, No. of Rows, No. of Columns, People Escaped \n";
    int test;
    cin >> test;
    int R, C, K;
    calculate;

    for (int i=0; i < test; i++)
    {
        cin >> R >> C >> K;
        cout << endl;
        cout << "Case " << i + 1 << endl;
        calculate(R, C, K);
    }
    
   
   
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

