#include <iostream>
using namespace std;

main()
{
    float p1, p2, p3;
    int amount, number; 
    float p1count = 0, p2count = 0, p3count = 0;

    cout << "Enter Number of numbers you want to enter: ";
    cin >> amount;
    int counter = 0;
    for (int count = 1; count <= amount; count++)
    {
        cout << "Enter number" << count << " :";
        cin >> number;

        if (number % 2 == 0)
        {
            p1count++;
        }

        if (number % 3 == 0)
        {
            p2count++;
        }

        if (number % 4 == 0)
        {
            p3count++;
        }
        counter++;
    }

   
    p1 = (p1count / counter) * 100;
    p2 = (p2count / counter) * 100;
    p3 = (p3count / counter) * 100;

    cout << "p1: " << p1 << endl
         << "p2: " << p2 << endl
         << "p3: " << p3 << endl;
}