#include <iostream>
#include <cmath>
#include "root.h"

using namespace std;

int main() {
    double x = 2.0;
    
    cout << "Введіть значення для x: ";
    cin >> x;
    
    cout << "Стандартна функція sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << "Ваша функція root(" << x << ") = " << root(x) << endl;
    
    return 0;
}