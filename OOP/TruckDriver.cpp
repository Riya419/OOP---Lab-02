// Lab - 02 Riya Chauhan

#include "TruckDriver.h"
#include <cmath>
#include <iostream>

// Driver Class Implementation
Driver::Driver(std::string firstName, std::string lastName, int driverID)
    : firstName(firstName), lastName(lastName), driverID(driverID) {}

// Retrieve First name
std::string Driver::getFirstName() const {
    return firstName;
}

// Retrieve Last name
std::string Driver::getLastName() const {
    return lastName;
}

// Retrieve Driver's ID
int Driver::getDriverID() const {
    return driverID;
}

// Location Class Implementation (constructor initializes the location)
Location::Location(int x, int y) : x(x), y(y) {}

int Location::getX() const {
    return x;
}

int Location::getY() const {
    return y;
}

// Calcluate's the euclidean distance between two locations by the given formula
double Location::distanceTo(const Location& other) const {
    int dx = x - other.getX();
    int dy = y - other.getY();
    return sqrt(dx * dx + dy * dy);
}

// Truck Class Implementation
Truck::Truck(int truckID, Driver driver, Location location)
    : truckID(truckID), driver(driver), location(location) {}

// Calcluate's the distance between this truck and another truck
double Truck::distanceFrom(const Truck& otherTruck) const {
    return location.distanceTo(otherTruck.location);
}

// Calcluate's the distance from the truck's location to the origin
double Truck::distanceFromOrigin() const {
    Location origin(0, 0);
    return location.distanceTo(origin);
}
