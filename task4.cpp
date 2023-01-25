#include <iostream>
using namespace std;

void sequence(int maxNum);

main()
{
    int maxNum;

    cout << "Enter the mmaxium number of sequence: ";
    cin >> maxNum;

    sequence(maxNum);
}

void sequence(int maxNum)
{

    for (int count = 1 ; count <= maxNum ; count++ )
    {
        int amplify = count;
        if(count%4 == 0)
        {
            amplify = count*10;

        }

        cout << amplify << ", " ;
    }

}