//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Contact {
//private:
//    string* fullName;
//    string homePhone;
//    string workPhone;
//    string mobilePhone;
//    string additionalInfo;
//
//public:
//    Contact(const string& name, const string& home, const string& work, const string& mobile, const string& info)
//        : homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {
//        fullName = new string(name);
//    }
//
//    Contact(const string& name)
//        : Contact(name, "", "", "", "") {
//    }
//
//    Contact(const string& name, const string& home)
//        : Contact(name, home, "", "", "") {
//    }
//
////    Contact(const string& name, const string& mobile)
////        : Contact(name, "", "", mobile, "") {
////    }
////
////    ~Contact() {
////        delete fullName;
////    }
//
//    const string& getFullName() const {
//        return *fullName;
//    }
//
//    const string& getHomePhone() const {
//        return homePhone;
//    }
//
//    const string& getWorkPhone() const {
//        return workPhone;
//    }
//
//    const string& getMobilePhone() const {
//        return mobilePhone;
//    }
//
//    const string& getAdditionalInfo() const {
//        return additionalInfo;
//    }
//};
//
//class PhoneBook {
//private:
//    Contact** contacts;
//    int capacity;
//    int size;
//
//public:
//    PhoneBook(int initialCapacity) : capacity(initialCapacity), size(0) {
//        contacts = new Contact*[capacity];
//    }
//
//    ~PhoneBook() {
//        for (int i = 0; i < size; ++i) {
//            delete contacts[i];
//        }
//        delete[] contacts;
//    }
//
//    void displayContacts() const {
//        cout << "Contacts in Phone Book:" << endl;
//        for (int i = 0; i < size; ++i) {
//            cout << "Contact " << (i + 1) << ":" << endl;
//            cout << "Name: " << contacts[i]->getFullName() << endl;
//            cout << "Home Phone: " << contacts[i]->getHomePhone() << endl;
//            cout << "Work Phone: " << contacts[i]->getWorkPhone() << endl;
//            cout << "Mobile Phone: " << contacts[i]->getMobilePhone() << endl;
//            cout << "Additional Info: " << contacts[i]->getAdditionalInfo() << endl;
//            cout << "------------------------" << endl;
//        }
//    }
//
//    void addContact(const Contact& contact) {
//        if (size < capacity) {
//            contacts[size] = new Contact(contact);
//            size++;
//            cout << "Contact added successfully." << endl;
//        } else {
//            cout << "Phone Book is full. Cannot add more contacts." << endl;
//        }
//    }
//
//    void deleteContact(int index) {
//        if (index >= 0 && index < size) {
//            delete contacts[index];
//            for (int i = index; i < size - 1; i++) {
//                contacts[i] = contacts[i + 1];
//            }
//            size--;
//            cout << "Contact deleted successfully." << endl;
//        } else {
//            cout << "Invalid index. Contact not found." << endl;
//        }
//    }
//};
//
//int main() {
//    PhoneBook phoneBook(10);
//
//    Contact contact1("Oleg Volostnykh", "123-456-7890", "456-789-1234", "789-123-4567", "Additional info 1");
//    Contact contact2("Semen Shneider", "987-654-3210", "654-321-9876", "321-987-6543", "Additional info 2");
//    Contact contact3("Ivan Kredentser", "898-456-7890", "223-848-1234", "789-123-4567", "Additional info 3");
//    Contact contact4("Volodya Korable", "232-123-4567", "456-789-1234", "789-123-4567", "Additional info 4");
//    Contact contact5("Margins Misyuk", "838-987-6543", "456-434-1234", "131-123-4567", "Additional info 5");
//
//    phoneBook.addContact(contact1);
//    phoneBook.addContact(contact2);
//    phoneBook.addContact(contact3);
//    phoneBook.addContact(contact4);
//    phoneBook.addContact(contact5);
//
//    phoneBook.displayContacts();
//
//    phoneBook.deleteContact(1);
//    phoneBook.displayContacts();
//
//    return 0;
//}

