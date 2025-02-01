#pragma once

#ifndef TRUCK_DRIVER_H
#define TRUCK_DRIVER_H

#include <string>
#include <cmath>

// Driver class: stores information about a driver
class Driver {
public:
    // Constructor to initialize a driver with first name, last name and ID
    Driver(std::string firstName, std::string lastName, int driverID);

    // Retrieveing the driver's details
    std::string getFirstName() const;
    std::string getLastName() const;
    int getDriverID() const;

private:
    std::string firstName;
    std::string lastName;
    int driverID;
};

// Location class: Stores the (x, y) coordinates for a truck's location
class Location {
public:
    // constructor 
    Location(int x, int y);

    int getX() const;
    int getY() const;

    // Method to calculate the distance between two locations
    double distanceTo(const Location& other) const;  

private:
    int x, y;
};

// Truck class: represents a truck with driver and location
class Truck {
public:
    Truck(int truckID, Driver driver, Location location);

    double distanceFrom(const Truck& otherTruck) const;  // Distance between two trucks
    double distanceFromOrigin() const;  // Distance from origin (0, 0)

private:
    int truckID;
    Driver driver;
    Location location;
};

#endif
