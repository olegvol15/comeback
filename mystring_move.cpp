//#include <iostream>
//#include <cstring>
//
//using namespace std;
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
//    MyString(MyString&& other) {
//        str = other.str;
//        length = other.length;
//        other.str = nullptr;
//        other.length = 0;
//    }
//
//    ~MyString() {
//        delete[] str;
//    }
//
//    MyString& operator=(const MyString& other) {
//        if (this == &other) {
//            return *this;
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
//    MyString& operator=(MyString&& other) {
//        if (this == &other) {
//            return *this;
//        }
//
//        delete[] str;
//
//        str = other.str;
//        length = other.length;
//        other.str = nullptr;
//        other.length = 0;
//
//        return *this;
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
//    void display() const {
//        cout << str;
//    }
//};
//
//int main() {
//    MyString obj("Hello");
//    MyString copy("Copy");
//
//    copy = obj; // Оператор присваивания (глубокое копирование)
//    cout << "Copy: ";
//    copy.display();
//    cout << endl;
//
//    MyString moved = copy;
//    cout << "Moved: ";
//    moved.display();
//    cout << endl;
//    cout << "Copy: ";
//    copy.display();
//    cout << endl;
//
//    return 0;
//}



