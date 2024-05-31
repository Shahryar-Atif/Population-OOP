//In a population, the birth rate and death rate are calculated as follows:
//Birth Rate = Number of Births ÷ Population
//Death Rate = Number of Deaths ÷ Population
//For example, in a population of 100,000 that has 8,000 births and 6,000 deaths per
//year, the birth rate and death rate are:
//Birth Rate = 8,000 ÷ 100,000 = 0.08
//Death Rate = 6,000 ÷ 100,000 = 0.06
//Design a Population class that stores a population, number of births, and number of
//deaths for a period of time. Member functions should return the birth rate and death
//rate. Implement the class in a program.
//Input Validation: Do not accept population figures less than 1, or birth or death numbers lass than 0
#include <iostream>

using namespace std;

class Population
{
private:
    double noOfBirths;
    double population;
    double noOfDeaths;
public:
    Population(double noOfBirths, double population, double noOfDeaths)
    {
        this->noOfBirths = noOfBirths;
        this->noOfDeaths = noOfDeaths;
        this->population = population;
    }

    void setNoOfBirths()
    {
        cout<<"Please Enter No of Births"<<endl;
        cin>>noOfBirths;
        while(noOfBirths < 0)
        {
            cout<<"Please Enter Number greater than 0"<<endl;
            cin>>noOfBirths;
        }
    }

    void setNoOfDeaths()
    {
        cout<<"Please Enter No of Deaths"<<endl;
        cin>>noOfDeaths;
        while(noOfDeaths < 0)
        {
            cout<<"Please Enter Number greater than 0"<<endl;
            cin>>noOfDeaths;
        }
    }

    void setPopulation()
    {
        cout<<"Please Enter Population"<<endl;
        cin>>population;
        while(population < 0)
        {
            cout<<"Please Enter Number greater than 0"<<endl;
            cin>>population;
        }
    }

    double getBirthRate()
    {
        double birthRate = noOfBirths / population;
        return birthRate;
    }

    double getDeathRate()
    {
        double deathRate = noOfDeaths / population;
        return deathRate;
    }

};

int main()
{
    Population p1(0,0,0);
    p1.setPopulation();
    p1.setNoOfDeaths();
    p1.setNoOfBirths();
    cout<<"Birth Rate is "<<p1.getBirthRate()<<endl;
    cout<<"Death Rate is "<<p1.getDeathRate()<<endl;
    return 0;
}
