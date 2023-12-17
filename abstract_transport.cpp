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

    virtual double calculateFuelConsumption() const = 0;
    virtual void displayInfo() const = 0;
    virtual void inputData() = 0;
    virtual void refuel() = 0;
};

class Car : public Transport {
private:
    int numWheels;

public:
    Car(const string& fuel, const string& b, const string& m, int wheels)
        : Transport(fuel, b, m), numWheels(wheels) {}

    double calculateFuelConsumption() const override {
        return 10.0;
    }

    void displayInfo() const override {
        cout << "Type: Car" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Wheels: " << numWheels << endl;
    }

    void inputData() override {
        cout << "Enter fuel type: ";
        cin >> fuelType;
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter number of wheels: ";
        cin >> numWheels;
    }

    void refuel() override {
        cout << "Car refueled." << endl;
    }
};

class Ship : public Transport {
private:
    int displacement;

public:
    Ship(const string& fuel, const string& b, const string& m, int disp)
        : Transport(fuel, b, m), displacement(disp) {}

    double calculateFuelConsumption() const override {
        return 20.0;
    }

    void displayInfo() const override {
        cout << "Type: Ship" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Displacement: " << displacement << " tons" << endl;
    }

    void inputData() override {
        cout << "Enter fuel type: ";
        cin >> fuelType;
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter displacement (tons): ";
        cin >> displacement;
    }

    void refuel() override {
        cout << "Ship refueled." << endl;
    }
};

class Plane : public Transport {
private:
    int wingspan;

public:
    Plane(const string& fuel, const string& b, const string& m, int wings)
        : Transport(fuel, b, m), wingspan(wings) {}

    double calculateFuelConsumption() const override {
        return 30.0;
    }

    void displayInfo() const override {
        cout << "Type: Plane" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Wingspan: " << wingspan << " meters" << endl;
    }

    void inputData() override {
        cout << "Enter fuel type: ";
        cin >> fuelType;
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter wingspan (meters): ";
        cin >> wingspan;
    }

    void refuel() override {
        cout << "Plane refueled." << endl;
    }
};

class Tram : public Transport {
private:
    int passengers;

public:
    Tram(const string& fuel, const string& b, const string& m, int pass)
        : Transport(fuel, b, m), passengers(pass) {}

    double calculateFuelConsumption() const override {
        return 5.0;
    }

    void displayInfo() const override {
        cout << "Type: Tram" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Passenger Capacity: " << passengers << " people" << endl;
    }

    void inputData() override {
        cout << "Enter fuel type: ";
        cin >> fuelType;
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter passenger capacity: ";
        cin >> passengers;
    }

    void refuel() override {
        cout << "Tram refueled." << endl;
    }
};

class Motorcycle : public Transport {
private:
    int engineDisplacement;

public:
    Motorcycle(const string& fuel, const string& b, const string& m, int displacement)
        : Transport(fuel, b, m), engineDisplacement(displacement) {}

    double calculateFuelConsumption() const override {
        return 3.0;
    }

    void displayInfo() const override {
        cout << "Type: Motorcycle" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Displacement: " << engineDisplacement << " cc" << endl;
    }

    void inputData() override {
        cout << "Enter fuel type: ";
        cin >> fuelType;
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter engine displacement (cc): ";
        cin >> engineDisplacement;
    }

    void refuel() override {
        cout << "Motorcycle refueled." << endl;
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

    switch (choice) {
        case 1:
            transport = new Car("", "", "", 4);
            break;
        case 2:
            transport = new Ship("", "", "", 100);
            break;
        case 3:
            transport = new Plane("", "", "", 30);
            break;
        case 4:
            transport = new Tram("", "", "", 50);
            break;
        case 5:
            transport = new Motorcycle("", "", "", 500);
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }

    transport->inputData();
    transport->displayInfo();
    cout << "Fuel Consumption: " << transport->calculateFuelConsumption() << " liters per 100 km" << endl;
    transport->refuel();

    delete transport;

    return 0;
}
