#include <iostream>
using namespace std;
int main()
{
    int u_input;
    int amount = 0, count = 0;
    int car = 0, bus = 0, ricksha = 0;

    // menu

    cout << "\n\n   -------------------->Welcome To Vanshika's Car Parking System!!<--------------------\n"
         << endl;
    cout << "INSTRUCTIONS" << endl
         << "This program stores number of different type of vehicles that are being parked in the parking space." << endl;
    cout << endl
         << endl;
    cout << "RULES FOR PARKING A VEHICLE" << endl
         << endl;
    cout << "1. There can be 100 different vehicles in this space at a time" << endl;
    cout << "2. The parking charges for different vehicles are listed down below" << endl;
    cout << "          a. Parking a rickshaw->Rs 50" << endl;
    cout << "          b. Parking a car->Rs 200" << endl;
    cout << "          c. Parking a bus->Rs 300" << endl;
    cout << endl
         << endl;
    while (true)
    {
        cout << "\t\tPress 1 for Rickshaw" << endl;
        cout << "\t\tPress 2 for Car" << endl;
        cout << "\t\tPress 3 for Bus" << endl;
        cout << "\t\tPress 4 for Show Record" << endl;
        cout << "\t\tPress 5 for Delete Record" << endl;
        cout << "\t\tPress 0 to exit" << endl;

        cin >> u_input;
        if (u_input == 1)
        {
            if (count <= 100)
            {

                amount = amount + 50;
                count = count + 1;
                ricksha = ricksha + 1;
            }
            else
                cout << "No More parking!<<endl";
        }
        else if (u_input == 2)
        {
            if (count <= 100)
            {
                amount = amount + 200;
                count = count + 1;
                car = car + 1;
            }
            else
                cout << "No more parking!<<endl";
        }
        else if (u_input == 3)
        {
            if (count <= 100)
            {
                amount = amount + 300;
                count = count + 1;
                bus = bus + 1;
            }
            else
                cout << "No more parking !" << endl;
        }
        else if (u_input == 4)
        {
            cout << "*************************************" << endl;
            cout << "The total money earned = " << amount << endl;
            cout << "The total number of Vehicles Parked = " << count << endl;
            cout << "Number of spaces left = " << 100-count << endl;
            cout << "The total number of Cars = " << car << endl;
            cout << "The total number of Buses = " << bus << endl;
            cout << "The total number of Rickshaws = " << ricksha << endl;
            cout << "*************************************"<<endl;
        }
        else if (u_input == 5)
        {
            cout << "*************************************" << endl;
            amount = 0;
            count = 0;
            car = 0;
            bus = 0;
            ricksha = 0;
            cout << "*************************************" << endl;
            cout << "Record Deleated" << endl;
            cout << "*************************************" << endl;
        }
        else
        {
            cout << "Invalid input!!" << endl;
        }
    }
    return 0;
}