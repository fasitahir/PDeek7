#include <iostream>
using namespace std;


main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int count1 = rows ; count1 >= 0 ; count1--)
    {
        for (int count2 = 1 ; count2 <= count1 ; count2++ )
        {
            cout << "*" ;
        }
        cout << endl;
    }
}