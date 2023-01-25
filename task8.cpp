#include <iostream>
using namespace std;

main()
{
    float cargoAmount, tonnage;
    float cargotrain =0;
    float cargobus =0;
    float cargotruck =0;

    float average, minibus, truck, train , moneyBus =0 , moneyTruck=0 , moneyTrain=0 ;
    float weight =0 , totalTonnage;
    float percentagetrain , percentagetruck , percentageBus;
    float weightbus=0 , weighttrain = 0 , weighttruck= 0;

    cout << "Enter Amount of cargo: ";
    cin >> cargoAmount;

    for (int count = 1; count <= cargoAmount; count++)
    {
        cout << "Enter Weight of cargo " << count << " :";
        cin >> tonnage;

        if (tonnage <= 3)
        {
            
            cargobus++;
            weight = weight + tonnage;
            minibus = tonnage * 200;
            moneyBus = moneyBus +minibus;
            weightbus =tonnage +weightbus;

        }

        if (tonnage > 3 && tonnage <= 11)
        {
            
            cargotruck++;

            weight = weight+tonnage;
            truck = tonnage* 175;
            moneyTruck = moneyTruck +truck;
            weighttruck =tonnage +weighttruck;

        }

        if (tonnage > 11)
        {
            
            cargotrain++;

            weight = weight + tonnage;
            train = tonnage * 120;
            moneyTrain = moneyTrain +train;
            weighttrain =tonnage +weighttrain;
        }

        average = (moneyBus + moneyTrain + moneyTruck)/weight;

        percentageBus = (weightbus / weight) *100;
        percentagetruck = (weighttruck/ weight) * 100;
        percentagetrain = (weighttrain/ weight) *100;
    }

    cout << average << endl;
    cout << "PB: " << percentageBus <<endl; 
    cout <<"Ptruck: "<< percentagetruck << endl; 
    cout <<"Ptrain: "<< percentagetrain <<endl;
}