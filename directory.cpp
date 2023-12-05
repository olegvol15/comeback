#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class DirectoryEntry {
public:
    string firmName;
    string owner;
    string phoneNumber;
    string address;
    string activity;

    DirectoryEntry() {}
    DirectoryEntry(const string& firmName, const string& owner, const string& phoneNumber, const string& address, const string& activity)
        : firmName(firmName), owner(owner), phoneNumber(phoneNumber), address(address), activity(activity) {}

    void display() {
        cout << "Firm Name: " << firmName << endl;
        cout << "Owner: " << owner << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Activity: " << activity << endl;
        cout << endl;
    }
};

class Directory {
public:
    Directory(const string& filename) : filename(filename), size(0) {
        loadFromFile();
    }

    void addEntry(const DirectoryEntry& entry) {
        if (size < maxEntries) {
            entries[size++] = entry;
            saveToFile();
        } else {
            cout << "Directory is full, cannot add more entries." << endl;
        }
    }

    void searchByName(const string& firmName) {
        cout << "Search Results by Firm Name: " << endl;
        for (int i = 0; i < size; i++) {
            if (entries[i].firmName == firmName) {
                entries[i].display();
            }
        }
    }

    void searchByOwner(const string& owner) {
        cout << "Search Results by Owner: " << endl;
        for (int i = 0; i < size; i++) {
            if (entries[i].owner == owner) {
                entries[i].display();
            }
        }
    }

    void searchByPhoneNumber(const string& phoneNumber) {
        cout << "Search Results by Phone Number: " << endl;
        for (int i = 0; i < size; i++) {
            if (entries[i].phoneNumber == phoneNumber) {
                entries[i].display();
            }
        }
    }

    void searchByActivity(const string& activity) {
        cout << "Search Results by Activity: " << endl;
        for (int i = 0; i < size; i++) {
            if (entries[i].activity == activity) {
                entries[i].display();
            }
        }
    }

    void displayAllEntries() {
        cout << "All Entries: " << endl;
        for (int i = 0; i < size; i++) {
            entries[i].display();
        }
    }

private:
    static const int maxEntries = 100;
    string filename;
    DirectoryEntry entries[maxEntries];
    int size;

    void loadFromFile() {
        ifstream file(filename);
        if (file.is_open()) {
            while (file >> entries[size].firmName >> entries[size].owner >> entries[size].phoneNumber >> entries[size].address >> entries[size].activity) {
                size++;
            }
            file.close();
        }
    }

    void saveToFile() {
        ofstream file(filename, ios::trunc);
        for (int i = 0; i < size; i++) {
            file << entries[i].firmName << " " << entries[i].owner << " " << entries[i].phoneNumber << " " << entries[i].address << " " << entries[i].activity << endl;
        }
        file.close();
    }
};

int main() {
    Directory directory("directory.txt");

    DirectoryEntry entry1("Apple", "Tim Cook", "123-456-7890", "WallStreet", "technology");
    DirectoryEntry entry2("Nike", "Phile Nite", "987-654-3210", "12th Street", "clothes");

//    directory.addEntry(entry1);
//    directory.addEntry(entry2);

    directory.displayAllEntries();

    directory.searchByName("Apple");
//    directory.searchByOwner("Owner2");
//    directory.searchByPhoneNumber("987-654-3210");
//    directory.searchByActivity("Activity1");

    return 0;
}

