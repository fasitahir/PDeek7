#include <iostream>
using namespace std;
void triangle1(int rows);

main()
{
    int rows;

    cout << "Enter Number of rows: ";
    cin >> rows;

    triangle1(rows);
}

void triangle1(int rows)
{
    int spaces = rows;
    for (int count1 = 0; count1 <= rows; count1++)
    {
        for (int count2 = 1; count2 <= count1; count2++)
        {
            cout << "*";
        }
        for (int j = spaces; j >= 0; j--)
        {
            cout << " ";
        }

        for (int j = spaces; j >= 0; j--)
        {
            cout << " ";
        }

        for (int count2 =1; count2 <= count1; count2++)
        {
            cout << "*";
        }

        spaces--;

        cout << endl;
    }
}
