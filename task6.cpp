#include <iostream>
using namespace std;
main()
{
    int days, treated = 0, untreated = 0, docs = 7, patients, totaltreated = 0, totalUntreated = 0;

    cout << "Enter Total numbers of days: ";
    cin >> days;

    for (int count = 1; count <= days; count++)
    {

        cout << "Enter number of patients in day " << count << " :";
        cin >> patients;

        if (count % 3 != 0)
        {
            untreated = patients - docs;
            treated = patients - untreated;

            if (docs >= patients)
            {
                untreated = 0;
                treated = patients;
            }
        }

        else if (count % 3 == 0)
        {
            if (untreated > treated)
            {
                docs = docs + 1;

                untreated = patients - docs;
                treated = patients - untreated;
                if (docs > patients)
                {
                    untreated = 0;
                    treated = patients;
                }
            }
        }

        totaltreated = treated + totaltreated;
        totalUntreated = untreated + totalUntreated;
    }

    cout << "Treated: " << totaltreated << endl;
    cout << "Untreated: " << totalUntreated << endl;
}