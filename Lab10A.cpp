#include <iostream>
using namespace std;

bool fillUpRequired(float, float, int); 

int main() 
{
    string model;
    struct Car //Initializing the structre and its variables
    {
        float tank_size;
        float mpg;
        int kilometers;
    }myCar; //Name used to declare structure
    

    cout <<"Enter the car model: ";
    cin >> model;

    cout <<"Enter the tank size of the " << model <<" in gallons: ";
    cin >> myCar.tank_size;

    cout << "Enter the miles per gallon of the " << model <<" : ";
    cin >> myCar.mpg;

    cout << "Enter the total kilometers of the planned trip: " ;
    cin >> myCar.kilometers;

    if (fillUpRequired(myCar.tank_size, myCar.mpg, myCar.kilometers)){
        cout << "You will need to fill up your " << model;
        cout << " before you reach your destination." << endl;
    }
    else
    {
        cout << "Your " << model << " can travel to your ";
        cout << "desitnation on one tank of gas. "<< endl;
    }

    return 0;    
}

bool fillUpRequired(float tank_size, float mpg, int kilometers) //I am not sure if you are supposed to change the variables tank_size to myCar.tank_size 
{
    float capacityInMiles = tank_size * mpg;
    float tripMiles = kilometers * 0.621371;

    return (tripMiles > capacityInMiles);
}