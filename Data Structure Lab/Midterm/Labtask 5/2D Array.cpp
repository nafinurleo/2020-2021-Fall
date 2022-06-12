#include <iostream>
using namespace std;
int main()
{
    int x[4][4]{0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Type The " << i + 1 << "X" << j + 1 << " Element:";
            cin >> x[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                cout << x[i][j] << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }

    cout << "\n\n\n";
    int a = 0, b = 3;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == a && j == b)
            {
                cout << x[i][j] << " ";
                a++;
                b--;
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }

    for (int j = 0; j < 4; j++)
    {
        cout << x[2][j] << "\n";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << x[i][1] << "\n";
    }
    cout << endl;
     int sum = 0;
    for (int j = 0; j < 4; j++)
    {
        sum += x[3][j];
    }
    cout << "Sum of The 4th Row :" << sum << endl;
    sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += x[i][2];
    }
    cout << "Sum of The 3rd Column :" << sum << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || j == 0)
            {
                cout << x[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
