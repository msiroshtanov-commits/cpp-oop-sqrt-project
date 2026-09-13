#include <iostream>
using namespace std;

int main() {
    int years, months, days;
    
    cout << "Введіть ваш вік в роках: ";
    cin >> years;
    cout << "Введіть кількість місяців: ";
    cin >> months;
    cout << "Введіть кількість днів: ";
    cin >> days;
    
    // Розраховуємо загальну кількість днів
    int total_days = years * 365 + months * 30 + days;
    
    cout << "\nВаш вік:" << endl;
    cout << "Років: " << years << endl;
    cout << "Днів: " << total_days << endl;
    
    return 0;
}