#include <iostream>
#include <list>

using namespace std;

class Laptop {
private:
    string brand;
    string model;
    int year;

public:

    Laptop(string brand, string model, int year)
        : brand(brand), model(model), year(year) {}

    ~Laptop() {}


    string getBrand() const 
    {
        return brand;
    }
    string getModel() const 
    {
        return model;
    }
    int getYear() const 
    {
        return year;
    }


    friend ostream& operator<<(ostream& out, const Laptop& laptop) {
        out << "Brand: " << laptop.brand << ", Model: " << laptop.model << ", Year: " << laptop.year;
        return out;
    }
};

int main()
{
    
    list<Laptop> laptops;

    laptops.push_front(Laptop("Dell", "XPS 13", 2022));
    laptops.push_back(Laptop("HP", "Spectre x360", 2021));

    cout << "Laptops in the list:\n";
    for (const auto& laptop : laptops) {
        cout << laptop << '\n';
    }


    laptops.push_front(Laptop("Lenovo", "ThinkPad X1 Carbon", 2023));
    laptops.push_back(Laptop("Apple", "MacBook Pro", 2022));

    // Выводим список повторно
    cout << "\nUpdated list of laptops:\n";
    for (const auto& laptop : laptops) {
        cout << laptop << '\n';
    }

    return 0;
}

