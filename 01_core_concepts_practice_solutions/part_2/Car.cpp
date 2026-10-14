#include "Car.h"                                            // Include the header file

Car::Car(): brand("noname"), cost(0)
{
}
Car::Car(const std::string &b, int c): brand(b), cost(c)
{ 
}
const std::string& Car::getBrand() const
{
    return brand.getName();
}
int Car::getCost() const
{
    return cost;
}
void Car::setBrand(const std::string &b)
{
    brand.setName(b);
}
void Car::setCost(int c)
{
    cost = c;
}