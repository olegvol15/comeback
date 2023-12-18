#include <iostream>
#include <vector>

using namespace std;

class TransportVehicle {
protected:
    double weight;
    double max_speed;
    double avg_speed;
    double cost_per_100km;

public:
    TransportVehicle(double weight, double max_speed, double avg_speed, double cost_per_100km)
        : weight(weight), max_speed(max_speed), avg_speed(avg_speed), cost_per_100km(cost_per_100km) {}

    virtual double calculate_comfort() const = 0;
    virtual double calculate_cost() const = 0;
    virtual ~TransportVehicle() = default;
};

class Car : public TransportVehicle {
private:
    string car_type;
    int max_passengers;
    string seat_material;

public:
    Car(double weight, double max_speed, double avg_speed, double cost_per_100km,
        const string& car_type, int max_passengers, const string& seat_material)
        : TransportVehicle(weight, max_speed, avg_speed, cost_per_100km),
          car_type(car_type), max_passengers(max_passengers), seat_material(seat_material) {}

    double calculate_comfort() const override {
        return max_passengers * avg_speed / cost_per_100km;
    }

    double calculate_cost() const override {
        return cost_per_100km;
    }
};

class Bus : public TransportVehicle {
private:
    int max_passengers;
    bool has_air_conditioning;
    bool reclining_seats;
    bool panoramic_view;
    double max_baggage_per_passenger;

public:
    Bus(double weight, double max_speed, double avg_speed, double cost_per_100km,
        int max_passengers, bool has_air_conditioning, bool reclining_seats,
        bool panoramic_view, double max_baggage_per_passenger)
        : TransportVehicle(weight, max_speed, avg_speed, cost_per_100km),
          max_passengers(max_passengers), has_air_conditioning(has_air_conditioning),
          reclining_seats(reclining_seats), panoramic_view(panoramic_view),
          max_baggage_per_passenger(max_baggage_per_passenger) {}

    double calculate_comfort() const override {
        return max_passengers * avg_speed / cost_per_100km;
    }

    double calculate_cost() const override {
        return cost_per_100km;
    }
};

class Train : public TransportVehicle {
private:
    int max_passengers;
    bool sleeper_cars;
    bool dining_car;

public:
    Train(double weight, double max_speed, double avg_speed, double cost_per_100km,
        int max_passengers, bool sleeper_cars, bool dining_car)
        : TransportVehicle(weight, max_speed, avg_speed, cost_per_100km),
          max_passengers(max_passengers), sleeper_cars(sleeper_cars), dining_car(dining_car) {}

    double calculate_comfort() const override {
        return max_passengers * avg_speed / cost_per_100km;
    }

    double calculate_cost() const override {
        return cost_per_100km;
    }
};

class Metro : public TransportVehicle {
private:
    int max_passengers;
    bool air_conditioning;
    bool wifi;

public:
    Metro(double weight, double max_speed, double avg_speed, double cost_per_100km,
        int max_passengers, bool air_conditioning, bool wifi)
        : TransportVehicle(weight, max_speed, avg_speed, cost_per_100km),
          max_passengers(max_passengers), air_conditioning(air_conditioning), wifi(wifi) {}

    double calculate_comfort() const override {
        return max_passengers * avg_speed / cost_per_100km;
    }

    double calculate_cost() const override {
        return cost_per_100km;
    }
};

class RoutePlanner {
public:
    static vector<TransportVehicle*> plan_route(const vector<TransportVehicle*>& vehicles, int passengers) {
        vector<TransportVehicle*> route;

        while (passengers > 0) {
            double max_utility = 0;
            TransportVehicle* best_vehicle = nullptr;

            for (auto& vehicle : vehicles) {
                if (vehicle->calculate_comfort() / vehicle->calculate_cost() > max_utility) {
                    max_utility = vehicle->calculate_comfort() / vehicle->calculate_cost();
                    best_vehicle = vehicle;
                }
            }

            if (best_vehicle) {
                route.push_back(best_vehicle);
                passengers -= best_vehicle->calculate_comfort();
            } else {
                break;
            }
        }

        return route;
    }
};

// Функция для добавления новых транспортных средств
TransportVehicle* createNewTransportVehicle(int type) {
    switch (type) {
        case 1:
            return new Car(1200, 220, 130, 12, "hatchback", 5, "fabric");
        case 2:
            return new Bus(10000, 90, 70, 18, 50, true, true, true, 25);
        case 3:
            return new Train(60000, 150, 120, 25, 400, true, true);
        case 4:
            return new Metro(25000, 70, 50, 3, 600, true, true);
        default:
            return nullptr;
    }
}

int main() {
    vector<TransportVehicle*> vehicles;

    // Создание транспортных средств
    vehicles.push_back(new Car(1500, 200, 120, 10, "sedan", 4, "leather"));
    vehicles.push_back(new Bus(8000, 100, 80, 15, 40, true, true, true, 20));
    vehicles.push_back(new Train(50000, 120, 100, 20, 300, true, true));
    vehicles.push_back(new Metro(20000, 80, 60, 5, 500, true, true));

    // Добавление новых транспортных средств
    vehicles.push_back(createNewTransportVehicle(1));
    vehicles.push_back(createNewTransportVehicle(2));

    // Планирование маршрута с учетом оптимизации комфорта и стоимости
    int total_passengers = 200;
    vector<TransportVehicle*> route = RoutePlanner::plan_route(vehicles, total_passengers);

    // Вывод информации о маршруте
    cout << "Optimal Route:" << endl;
    for (const auto& vehicle : route) {
        cout << "  - " << typeid(*vehicle).name() << endl;
    }

    // Освобождение памяти
    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}






