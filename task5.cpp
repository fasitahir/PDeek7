#include <iostream>
using namespace std;

int triangle(int sequence);

main()
{
    int sequence;

    cout<< "Enter Sequence Number: ";
    cin >> sequence;

    int dots = triangle(sequence);
    cout << "dots: "<< dots<<endl;
}

int triangle(int sequence)
{
    int dots =0 ;
    for(int count = 1 ; count <= sequence; count++ )
    {
        dots = count + dots;
    }
    return dots;
}