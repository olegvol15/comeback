//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//class Point {
//public:
//    int x;
//    int y;
//    Point(int x = 0, int y = 0) : x(x), y(y) {}
//};
//
//template <typename T>
//class DynamicArray {
//private:
//    T* arr;
//    int size;
//
//public:
//    DynamicArray(int sizeP) : arr(new T[sizeP] {}), size(sizeP) {}
//
//    DynamicArray() : DynamicArray(5) {}
//
//    DynamicArray(const DynamicArray& object) : arr(new T[object.size]), size(object.size)
//    {
//        for (int i = 0; i < size; ++i) {
//            arr[i] = object.arr[i];
//        }
//    }
//
//    T getElem(int idx) {
//        if (idx >= 0 && idx < size)
//        {
//            return arr[idx];
//        }
//        return T();
//    }
//
//    void setElem(int idx, T val)
//    {
//        if (idx >= 0 && idx < size)
//        {
//            arr[idx] = val;
//        }
//    }
//
//    void print() {
//        for (int i = 0; i < size; ++i)
//        {
//            cout << arr[i] << ' ';
//        }
//        cout << '\n';
//    }
//
//    void randomize() {
//        for (int i = 0; i < size; ++i)
//        {
//            arr[i] = static_cast<T>(rand() % 10);
//        }
//    }
//
//    T Sum() {
//        T sum = T();
//        for (int i = 0; i < size; ++i)
//        {
//            sum += arr[i];
//        }
//        return sum;
//    }
//
//    ~DynamicArray() {
//        delete[] arr;
//    }
//};
//
//int main()
//{
//    srand(time(0));
//
//    DynamicArray<int> intArray(10);
//    intArray.randomize();
//    cout << "intArray elements: ";
//    intArray.print();
//    int intSum = intArray.Sum();
//    cout << "Sum of intArray: " << intSum << '\n';
//
//    DynamicArray<double> doubleArray(8);
//    doubleArray.randomize();
//    cout << "doubleArray elements: ";
//    doubleArray.print();
//    double doubleSum = doubleArray.Sum();
//    cout << "Sum of doubleArray: " << doubleSum << '\n';
//
//    DynamicArray<char> charArray(6);
//    charArray.randomize();
//    cout << "charArray elements: ";
//    charArray.print();
//    char charSum = charArray.Sum();
//    cout << "Sum of charArray: " << static_cast<int>(charSum) << '\n';
//
//    DynamicArray<Point> pointArray(4);
//    pointArray.randomize();
//    cout << "pointArray elements: ";
//    for (int i = 0; i < 4; ++i) {
//        cout << "(" << pointArray.getElem(i).x << ", " << pointArray.getElem(i).y << ") ";
//    }
//    cout << '\n';
//
//    return 0;
//}

    

     
