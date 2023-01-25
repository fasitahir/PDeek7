#include <iostream>
using namespace std;

void printfigure(int rows1);
void printfigureInverted(int rows1);


main()
{
    int rows , rows1;
    cout << "Enter number of rows: ";
    cin >> rows;

    rows1 = rows/2;

    printfigure(rows1);
    printfigureInverted(rows1);

}

void printfigure(int rows1)
{

    int spaces = rows1;
    for (int count1 = 1; count1 <= rows1; count1++)
    {
        for (int j = 0; j < spaces ; j++)
        {
            cout << ' ';
        }
        for (int count2 = 1; count2 <= count1; count2++)
        {
            cout << "*";
        }

        spaces--;

        cout << endl;
    }
}


void printfigureInverted(int rows1)
{

    int spaces = 0;
    for (int count1 = rows1; count1 >= 0; count1--)
    {
        for (int j = 0; j <= spaces ; j++)
        {
            cout << ' ';
        }
        for (int count2 = 1; count2 <= count1; count2++)
        {
            cout << "*";
        }

        spaces++;

        cout << endl;
    }
}




