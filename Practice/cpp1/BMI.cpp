// Help fitness manager to Calculate the Body Mass Index (BMI) of clients.
// Sample test case:
// Input: Enter weight(kg) and height(m^2) 72.57 1.78
// Output: The Body Mass Index (BMI) is: 22.9043
// Constraints:
// The values of weight(kg) and height(m^2) should be positive integers

#include <bits/stdc++.h>
// #include <iostream>
// #include <iomanip>
using namespace std;

class FitnessManager {
private:
    double weight;
    double height;

public:
    FitnessManager(double w, double h) {
        if (w <= 0 || h <= 0) {
            cout << "Error: Weight and height must be positive values." << endl;
            exit(1);
        }
        weight = w;
        height = h;
    }
    
    double calculateBMI() {
        double heightInMeters = height ;
        cout<<"Your BMI is: ";
        return weight / (heightInMeters * heightInMeters);
    }
    
    // void displayBMI() {
    //     double bmi = calculateBMI();
    //     cout << "The Body Mass Index (BMI) is: " << fixed << setprecision(4) << bmi << endl;
    // }
};

int main() {
    FitnessManager client(72.57, 1.78);

    // client.displayBMI();
    cout<<client.calculateBMI();

    return 0;
}
