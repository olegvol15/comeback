//#include <iostream>
//#include <cstring>
//#include <initializer_list>
//
//using namespace std;
//
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
//    MyString(const char* initialStr) : size(strlen(initialStr) + 1) {
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
//    MyString(MyString&& other) noexcept : str(nullptr), size(0) {
//        swap(*this, other);
//    }
//
//    MyString& operator=(const MyString& other) {
//        if (this != &other) {
//            delete[] str;
//            size = other.size;
//            str = new char[size];
//            strcpy(str, other.str);
//        }
//        return *this;
//    }
//
//    MyString(initializer_list<char> il) : size(il.size()) {
//        str = new char[size + 1];
//        int i = 0;
//        for (char c : il) {
//            str[i++] = c;
//        }
//        str[size] = '\0';
//        numInstances++;
//    }
//
//    void input() {
//        cin.getline(str, size);
//    }
//
//    void output() const {
//        cout << str;
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
//
//    MyString& operator++();
//    MyString operator++(int);
//    MyString& operator--();
//    MyString operator--(int);
//    MyString operator+(int num) const;
//    MyString operator-(int num) const;
//    friend MyString operator+(int num, const MyString& str);
//
//    const char* c_str() const {
//        return str;
//    }
//};
//
//int MyString::numInstances = 0;
//
//MyString& MyString::operator++() {
//    int currentLength = strlen(str);
//    char* newStr = new char[currentLength + 2];
//    strcpy(newStr, str);
//    newStr[currentLength] = 'x';
//    newStr[currentLength + 1] = '\0';
//    delete[] str;
//    str = newStr;
//    size = currentLength + 2;
//    return *this;
//}
//
//MyString MyString::operator++(int) {
//    MyString temp(*this);
//    ++(*this);
//    return temp;
//}
//
//MyString& MyString::operator--() {
//    int currentLength = strlen(str);
//    if (currentLength > 0) {
//        str[currentLength - 1] = '\0';
//    }
//    return *this;
//}
//
//MyString MyString::operator--(int) {
//    MyString temp(*this);
//    --(*this);
//    return temp;
//}
//
//MyString MyString::operator+(int num) const {
//    MyString result(*this);
//    for (int i = 0; i < num; ++i) {
//        int currentLength = strlen(result.str);
//        char* newStr = new char[currentLength + 2];
//        strcpy(newStr, result.str);
//        newStr[currentLength] = 'x';
//        newStr[currentLength + 1] = '\0';
//        delete[] result.str;
//        result.str = newStr;
//        result.size = currentLength + 2;
//    }
//    return result;
//}
//
//MyString MyString::operator-(int num) const {
//    MyString result(*this);
//    int currentLength = strlen(result.str);
//    int newLength = currentLength - num;
//    if (newLength < 0) {
//        newLength = 0;
//    }
//    char* newStr = new char[newLength + 1];
//    strncpy(newStr, result.str, newLength);
//    newStr[newLength] = '\0';
//    delete[] result.str;
//    result.str = newStr;
//    result.size = newLength + 1;
//    return result;
//}
//
//MyString operator+(int num, const MyString& str) {
//    MyString result;
//    int currentLength = strlen(str.str);
//    for (int i = 0; i < num; ++i) {
//        int newLength = currentLength + 1;
//        char* newStr = new char[newLength + 1];
//        newStr[0] = 'x';
//        strcpy(newStr + 1, str.str);
//        delete[] result.str;
//        result.str = newStr;
//        result.size = newLength + 1;
//    }
//    return result;
//}
//
//ostream& operator<<(ostream& os, const MyString& str) {
//    os << str.c_str();
//    return os;
//}
//
//int main() {
//    MyString obj("Hello");
//    cout << "obj: " << obj << endl;
//
//    MyString copy;
//    copy = obj;
//    cout << "copy: " << copy << endl;
//
//    MyString initializerListObj{ 'H', 'e', 'l', 'l', 'o' };
//    cout << "initializerListObj: " << initializerListObj << endl;
//
//    return 0;
//}

