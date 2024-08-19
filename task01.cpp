#include <iostream>
#include <iomanip>  
using namespace std;

// Function to convert temperature 
void convert_temp(double t, int m) {
    double c, f, k;

    switch (m) {
        case 1: // Celsius
            f = (t * 9.0 / 5.0) + 32.0;
            k = t + 273.15;
            cout << fixed << setprecision(2); 
            cout << "Fahrenheit: " << f << "°F" << endl;
            cout << "Kelvin: " << k << "K" << endl;
            break;
        case 2: // Kelvin
            c = t - 273.15;
            f = ((t - 273.15) * 9.0 / 5.0) + 32.0;
            cout << fixed << setprecision(2); 
            cout << "Celsius: " << c << "°C" << endl;
            cout << "Fahrenheit: " << f << "°F" << endl;
            break;
        case 3: // Fahrenheit
            c = (t - 32.0) * 5.0 / 9.0;
            k = ((t - 32.0) * 5.0 / 9.0) + 273.15;
            cout << fixed << setprecision(2); 
            cout << "Celsius: " << c << "°C" << endl;
            cout << "Kelvin: " << k << "K" << endl;
            break;
        default:
            cout << "Invalid unit of measurement." << endl;
            return;
    }
}

int main() {
    char choice;

    do {
        double temp;
        int mes;

        cout << "Enter temperature: ";
        cin >> temp;

        cout << "Enter the original unit of measurement: 1 for Celsius, 2 for Kelvin, 3 for Fahrenheit: ";
        cin >> mes;

        convert_temp(temp, mes);

        cout << "Would you like to convert another temperature? Y or N : ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
