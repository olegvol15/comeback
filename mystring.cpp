#include <iostream>
#include <cstring>
using namespace std;


//класс Mystring

//class MyString {
//private:
//    char* str;
//    int size;
//    static int numInstances;
//
//public:
//    MyString() : size(80) {
//        str = new char[size];
//        numInstances++;
//    }
//
//    MyString(int n) : size(n) {
//        str = new char[size];
//        numInstances++;
//    }
//
//    MyString(const char* initialStr) : size(strlen(initialStr)) {
//        str = new char[size];
//        strcpy(str, initialStr);
//        numInstances++;
//    }
//
//    MyString(const MyString& other) : size(other.size) {
//        str = new char[size];
//        strcpy(str, other.str);
//        numInstances++;
//    }
//
//    void input() {
//        std::cin.getline(str, size);
//    }
//
//    void output() const {
//        std::cout << str;
//    }
//
//    ~MyString() {
//        delete[] str;
//        numInstances--;
//    }
//
//    static int getNumInstances() {
//        return numInstances;
//    }
//};
//
//int MyString::numInstances = 0;
//
//int main() {
//    MyString str1;
//    MyString str2(100);
//    MyString str3("Hello, World!");
//
//    cout << "Number of MyString instances: " << MyString::getNumInstances() << endl;
//
//    str1.input();
//    cout << "str1: ";
//    str1.output();
//
//    str2.input();
//    cout << "str2: ";
//    str2.output();
//
//    str3.output();
//
//    return 0;
//}

//Телефонная книга с конструктором копирования


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
//    Contact(const Contact& other)
//        : homePhone(other.homePhone), workPhone(other.workPhone), mobilePhone(other.mobilePhone), additionalInfo(other.additionalInfo) {
//        fullName = new string(*other.fullName);
//    }
//
//    ~Contact() {
//        delete fullName;
//    }
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
//int main() {
//    Contact contact1("Oleg Volostnykh", "123-456-7890", "456-789-1234", "789-123-4567", "Additional info 1");
//    Contact contact2 = contact1;
//    Contact contact3("Semen Shneider", "987-654-3210", "654-321-9876", "321-987-6543", "Additional info 2");
//
//    cout << "Contact 1 Name: " << contact1.getFullName() << endl;
//    cout << "Contact 2 Name: " << contact2.getFullName() << endl;
//    cout << "Contact 3 Name: " << contact3.getFullName() << endl;
//
//    return 0;
//}

