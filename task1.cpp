#include <iostream>
using namespace std;


main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int count1 = 1 ; count1 <= rows ; count1++) // for counting
    {
        for (int count2 = 1 ; count2 <= count1 ; count2++ ) // for printing
        {
            cout << "*" ;
        }
        cout << endl;
    }
}