//BMI Calculator
//weight(kg) / height(m) * height(m)
//Underweight < 18.5
//Normal Weight 18.5 - 24.9
//Overweight > 25

#include <iostream>
using namespace std;

int main () {

double weight;
double height;
double bmi;

cout << "Please enter weight in kg and height in m: " << endl;
cin >> weight >> height;
bmi = weight / (height * height);

if (bmi < 18.5) {
    cout << "You are underweight" << endl;
}
else if (bmi >= 25) {
    cout << "You are overweight" << endl;
}
else {
    cout << "You are normal weight" << endl;
}

cout << "Your BMI is " << bmi << endl;

return 0;

}