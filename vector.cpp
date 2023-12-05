#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class RemoveSymbolFunctor {
public:
    RemoveSymbolFunctor(char target, int startIndex, int endIndex)
        : targetSymbol(target), startIndex(startIndex), endIndex(endIndex) {}

    bool operator()(char symbol) const {
        if (startIndex <= symbol && symbol <= endIndex) {
            return true;
        }
        return false;
    }

private:
    char targetSymbol;
    int startIndex;
    int endIndex;
};

int main() {
    vector<char> charVector = {'a', 'b', 'c', 'd', 'e', '!', 'f', 'g', 'h', 'i', 'j', 'k', '!'};

    cout << "Original Vector: ";
    copy(charVector.begin(), charVector.end(), ostream_iterator<char>(cout, " "));
    cout << endl;

    RemoveSymbolFunctor removeSymbolFunctor('!', 'b', 'f');

    auto newEnd = remove_if(charVector.begin(), charVector.end(), removeSymbolFunctor);
    charVector.erase(newEnd, charVector.end());

    cout << "Vector after removal: ";
    copy(charVector.begin(), charVector.end(), ostream_iterator<char>(cout, " "));
    cout << endl;

    return 0;
}

