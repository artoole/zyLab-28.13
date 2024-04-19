#ifndef STATEPAIR
#define STATEPAIR

#include <iostream>
using namespace std;

template<typename T1, typename T2>
class StatePair {
private:
    T1 key;
    T2 value;

public:
    StatePair() : key(T1()), value(T2()) {}
    StatePair(T1 userKey, T2 userValue) : key(userKey), value(userValue) {}

    void SetKey(T1 newKey) {
        key = newKey;
    }

    void SetValue(T2 newValue) {
        value = newValue;
    }

    T1 GetKey() const {
        return key;
    }

    T2 GetValue() const {
        return value;
    }

    void PrintInfo() const {
        cout << key << ": " << value << endl;
    }
};

#endif
