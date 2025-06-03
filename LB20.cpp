#include <iostream>
#include <vector>
#include <cmath>



using namespace std;


int main() {
    srand(time(0));

    const int SIZE = 15;

    vector<double> vec;


    cout << "Vector: ";
    for (int i = 0; i < SIZE; i++) {
        double value = (rand() % 60001 - 30000) / 100.0;
        vec.push_back(value);
        cout << value << " ";
    }
    cout << endl;

  
    bool isIncreasing = true;
    for (int i = 1; i < SIZE; i++) {
        if (vec[i] <= vec[i - 1]) {
            isIncreasing = false;
            break;
        }
    }

    if (isIncreasing)
        cout << "The vector is increasing." << endl;
    else
        cout << "The vector is not increasing." << endl;

  
    int minIndex = 0;
    double minAbs = abs(vec[0]);
    for (int i = 1; i < SIZE; i++) {
        if (abs(vec[i]) < minAbs) {
            minAbs = abs(vec[i]);
            minIndex = i;
        }
    }


    double sum = 0;
    for (int i = minIndex + 1; i < SIZE; i++) {
        sum += abs(vec[i]);
    }

    cout << "Sum of absolute values after the minimum (by absolute value): " << sum << endl;
}
