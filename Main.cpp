#include <iostream>
#include <iomanip>
int main(){ //this calculates the fuel economy of a car  and the cost of me commuting to college
    double max_fuel=0.0,  mile_per_fuel=0.0;
    double street=0.0, highway=0.0;
    double const school=4.2, NYC_Rate=3.495;
    for (int i=0; i < 71; i++) {std::cout << "-";}
    std::cout <<  std::endl<<"Enter the amount of fuel your car hold: ";
    std::cin >> max_fuel;
    std::cout << "Enter the rate at which fuel is burn per gallon in city: ";
    std::cin >> street;
    std::cout << "Enter the rate at which fuel is burn per gallon on highway: ";
    std::cin >> highway;
    mile_per_fuel = (street+highway)/2;
    double distance_for_MaxFuel = mile_per_fuel * max_fuel;
    double const daily = distance_for_MaxFuel/school;
    double const month = daily/30;
    double const expence = max_fuel*NYC_Rate;
    double yearly_cost = (12/month)*expence;
    double Total_Expence = yearly_cost+310;
    for (int i=0; i < 71; i++) {std::cout << "-";}
    std::cout << std::endl<<"The current price of gas is: $"<<std::setprecision(4)<<expence<<std::endl;
    std::cout << "The average rate at which fuel is burned is: "<<mile_per_fuel<<" mpg"<<std::endl;
    std::cout << "The maximun distance you can travel on a full tank of gas is: "<<std::setprecision(3)<<distance_for_MaxFuel<<" miles"<< std::endl;
    std::cout << "The number of time you can go to school on a full tank of gas: "<<std::setprecision(3)<<daily<<std::endl;
    std::cout << "The number of months you can drive to school on a full tank of gas: "<<std::setprecision(2)<<month<<std::endl;
    std::cout << "The total yearly cost of gas is: $"<<std::fixed<<yearly_cost<<std::endl;
    std::cout << "The total yearly cost is: $"<<Total_Expence<<std::endl;
    for (int i=0; i < 71; i++) {std::cout << "-";}
    std::cout << std::endl<<"-Note-"<<std::endl<<"Gas information is based on NYC rate only"<<std::endl;
    std::cout << "The distance to school is "<<school<<" miles or "<<school*1.60934<<" Kilometers"<<std::endl;
    std::cout << "This information is not 100% accurate, it is just an estimate"<<std::endl;
    std::cout << "Thank you for testing"<<std::endl;;
    for (int i=0; i < 71; i++) {std::cout << "-";}
    char UserInput;
    int num;
    std::cout << std::endl;
    std::cout << "Would you like to have a more accurate calculation of gas cost based"<<std::endl;
    std::cout<<"on the number of time you refuel per month (y/n): ";
    std::cin >> UserInput;
    if (UserInput != 'y' && UserInput != 'n') {
        std::cout<<"INPUT INVAILD"<<std::endl;
    }
    switch (UserInput) {
        case 'y':{
            std::cout << "How many time do you refuel a month? ";
            std::cin>>num;
            double Set_month = num*expence;
            double Set_year = Set_month*12;
            double Yearly_distance = (distance_for_MaxFuel*num)*12;
            std::cout << "Monthly cost of gas: $"<< Set_month<<std::endl;
            std::cout << "Yearly cost of gas: $"<<Set_year<<std::endl;
            std::cout << "Total Yearly miles traveled: "<<Yearly_distance<<std::endl;
            break;
        }
        case 'n':{
            break;
        }
        default:
            break;
    }
    std::cout << "Would you like to restart the program (y/n): ";
    std::cin >> UserInput;
    if (UserInput != 'y' && UserInput != 'n') {
        std::cout<<"INPUT INVAILD"<<std::endl;
    }
    switch (UserInput) {
        case 'y':{
            std::cout<<"Program Restarted"<<std::endl;
            return main();
        }
        case 'n':{
            for (int i=0; i < 71; i++) {std::cout << "-";}
            std::cout<<"Shut Down"<<std::endl;
            return 0;
        }
        default:
            break;
    }
    for (int i=0; i < 71; i++) {std::cout << "-";}
    std::cout<<std::endl;
    return 0;
}
