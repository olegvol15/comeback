#include <iostream>
#include <cstring>

using namespace std;
//
//class MyString {
//private:
//    char* str;
//    int length;
//
//public:
//    MyString(const char* s) {
//        length = strlen(s);
//        str = new char[length + 1];
//        strcpy(str, s);
//    }
//
//    MyString(const MyString& other) {
//        length = other.length;
//        str = new char[length + 1];
//        strcpy(str, other.str);
//    }
//
//    MyString& operator=(const MyString& other) {
//        if (this == &other) {
//            return *this; // Проверка на самоприсваивание
//        }
//
//        delete[] str;
//
//        length = other.length;
//        str = new char[length + 1];
//        strcpy(str, other.str);
//
//        return *this;
//    }
//
//    ~MyString() {
//        delete[] str;
//    }
//
//    MyString& operator++() {
//        char* newStr = new char[length + 2];
//        strcpy(newStr, "x");
//        strcat(newStr, str);
//        delete[] str;
//        str = newStr;
//        length = length + 1;
//        return *this;
//    }
//
//    MyString operator++(int) {
//        MyString temp(*this);
//        ++(*this);
//        return temp;
//    }
//
//    MyString& operator--() {
//        if (length > 0) {
//            char* newStr = new char[length];
//            strcpy(newStr, str + 1);
//            delete[] str;
//            str = newStr;
//            length = length - 1;
//        }
//        return *this;
//    }
//
//    MyString operator--(int) {
//        MyString temp(*this);
//        --(*this);
//        return temp;
//    }
//
//    MyString operator+(int n) const {
//        MyString result(*this);
//        for (int i = 0; i < n; i++) {
//            result++;
//        }
//        return result;
//    }
//
//    MyString operator-(int n) const {
//        MyString result(*this);
//        for (int i = 0; i < n; i++) {
//            result--;
//        }
//        return result;
//    }
//
//    friend MyString operator+(int n, const MyString& str) {
//        MyString result(str);
//        for (int i = 0; i < n; i++) {
//            ++result;
//        }
//        return result;
//    }
//
//    friend ostream& operator<<(ostream& out, const MyString& myString) {
//        out << myString.str;
//        return out;
//    }
//};
//
//int main() {
//    MyString obj("Hello");
//    MyString copy("Copy");
//
//    copy = obj; // Оператор присваивания (глубокое копирование)
//    cout << "Copy: " << copy << endl;
//
//    return 0;
//}

//Телефонная книга с перегрузкой опреатора присваивания


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
//    // Конструктор копирования
//    Contact(const Contact& other)
//        : homePhone(other.homePhone), workPhone(other.workPhone), mobilePhone(other.mobilePhone), additionalInfo(other.additionalInfo) {
//        fullName = new string(*other.fullName);
//    }
//
//    // Перегрузка оператора присваивания (глубокое копирование)
//    Contact& operator=(const Contact& other) {
//        if (this == &other) {
//            return *this; // Проверка на самоприсваивание
//        }
//
//        delete fullName;
//
//        fullName = new string(*other.fullName);
//        homePhone = other.homePhone;
//        workPhone = other.workPhone;
//        mobilePhone = other.mobilePhone;
//        additionalInfo = other.additionalInfo;
//
//        return *this;
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
//    Contact contact2("Semen Schneider", "987-654-3210", "654-321-9876", "321-987-6543", "Additional info 2");
//
//    contact2 = contact1; // Оператор присваивания (глубокое копирование)
//
//    // Вывод информации о контакте
//    cout << "Contact 2:" << endl;
//    cout << "Name: " << contact2.getFullName() << endl;
//    cout << "Home Phone: " << contact2.getHomePhone() << endl;
//    cout << "Work Phone: " << contact2.getWorkPhone() << endl;
//    cout << "Mobile Phone: " << contact2.getMobilePhone() << endl;
//    cout << "Additional Info: " << contact2.getAdditionalInfo() << endl;
//
//    return 0;
//}

