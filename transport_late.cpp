#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    string fuelType;
    string brand;
    string model;

public:
    Transport(const string& fuel, const string& b, const string& m)
        : fuelType(fuel), brand(b), model(m) {}

    virtual void displayInfo() {
        cout << "Type: Generic Transport" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }

    // Getter and Setter for fuelType
    string getFuelType() const {
        return fuelType;
    }

    void setFuelType(const string& fuel) {
        fuelType = fuel;
    }
};

class Car : public Transport {
private:
    int numWheels;

public:
    Car(const string& fuel, const string& b, const string& m, int wheels)
        : Transport(fuel, b, m), numWheels(wheels) {}

    void displayInfo() override {
        cout << "Type: Car" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

class Ship : public Transport {
private:
    int displacement;

public:
    Ship(const string& fuel, const string& b, const string& m, int disp)
        : Transport(fuel, b, m), displacement(disp) {}

    void displayInfo() override {
        cout << "Type: Ship" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Displacement: " << displacement << " tons" << endl;
    }
};

class Plane : public Transport {
private:
    int wingspan;

public:
    Plane(const string& fuel, const string& b, const string& m, int wings)
        : Transport(fuel, b, m), wingspan(wings) {}

    void displayInfo() override {
        cout << "Type: Plane" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Wingspan: " << wingspan << " meters" << endl;
    }
};

class Tram : public Transport {
private:
    int passengers;

public:
    Tram(const string& fuel, const string& b, const string& m, int pass)
        : Transport(fuel, b, m), passengers(pass) {}

    void displayInfo() override {
        cout << "Type: Tram" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Passenger Capacity: " << passengers << " people" << endl;
    }
};

class Motorcycle : public Transport {
private:
    int engineDisplacement;

public:
    Motorcycle(const string& fuel, const string& b, const string& m, int displacement)
        : Transport(fuel, b, m), engineDisplacement(displacement) {}

    void displayInfo() override {
        cout << "Type: Motorcycle" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Displacement: " << engineDisplacement << " cc" << endl;
    }
};

int main() {
    Transport* transport;
    int choice;

    cout << "Select a type of transport:" << endl;
    cout << "1. Car" << endl;
    cout << "2. Ship" << endl;
    cout << "3. Plane" << endl;
    cout << "4. Tram" << endl;
    cout << "5. Motorcycle" << endl;
    cin >> choice;

    string fuel, brand, model;
    int wheels, displacement, wingspan, passengers, engineDisplacement;

    cout << "Enter fuel type: ";
    cin >> fuel;
    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter model: ";
    cin >> model;

    switch (choice) {
        case 1:
            cout << "Enter number of wheels: ";
            cin >> wheels;
            transport = new Car(fuel, brand, model, wheels);
            break;
        case 2:
            cout << "Enter displacement (tons): ";
            cin >> displacement;
            transport = new Ship(fuel, brand, model, displacement);
            break;
        case 3:
            cout << "Enter wingspan (meters): ";
            cin >> wingspan;
            transport = new Plane(fuel, brand, model, wingspan);
            break;
        case 4:
            cout << "Enter passenger capacity: ";
            cin >> passengers;
            transport = new Tram(fuel, brand, model, passengers);
            break;
        case 5:
            cout << "Enter engine displacement (cc): ";
            cin >> engineDisplacement;
            transport = new Motorcycle(fuel, brand, model, engineDisplacement);
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }

    transport->displayInfo();

    delete transport;

    return 0;
}

