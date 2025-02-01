#include <iostream>
#include "TruckDriver.h"

int main() {
    // Create Driver objects
    Driver driver1("Riya", "Chauhan", 42);
    Driver driver2("Mike", "Smith", 69);

    // Create Location objects
    Location location1(4, 3);  // Truck 1 location
    Location location2(5, 1);  // Truck 2 location

    // Create Truck objects
    Truck truck1(198134, driver1, location1);
    Truck truck2(249817, driver2, location2);

    // Calculate distances
    double distanceBetweenTrucks = truck1.distanceFrom(truck2);  // Distance between truck 1 and truck 2
    double distanceTruck1FromOrigin = truck1.distanceFromOrigin();  // Distance from truck 1 to the origin (0, 0)
    double distanceTruck2FromOrigin = truck2.distanceFromOrigin();  // Distance from truck 2 to the origin (0, 0)

    // Output the results
    std::cout << "The distance between the two trucks is: " << distanceBetweenTrucks << std::endl;
    std::cout << "The distance between the truck (with ID = 178534) and the origin is: "
        << distanceTruck1FromOrigin << std::endl;
    std::cout << "The distance between the truck (with ID = 245817) and the origin is: "
        << distanceTruck2FromOrigin << std::endl;

    return 0;
}
