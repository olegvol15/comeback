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
//
//    MyString incremented = ++obj;
//    cout << "Incremented: " << incremented << endl;
//
//    MyString postIncremented = obj++;
//    cout << "Post-incremented: " << postIncremented << endl;
//
//    MyString decremented = --obj;
//    cout << "Decremented: " << decremented << endl;
//
//    MyString postDecremented = obj--;
//    cout << "Post-decremented: " << postDecremented << endl;
//
//    MyString added = obj + 4;
//    cout << "Added: " << added << endl;
//
//    MyString subtracted = obj - 2;
//    cout << "Subtracted: " << subtracted << endl;
//
//    MyString intAdded = 4 + obj;
//    cout << "Int Added: " << intAdded << endl;
//
//    return 0;
//}
