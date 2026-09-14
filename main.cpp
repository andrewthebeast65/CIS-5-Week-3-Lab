// Andrew
// CIS 5 - Week 3 Lab - A typed about-me

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Andrew";
    int age = 17;
    double height_m = 1.75;
    char initial = 'A';
    bool student = true;
    const int CURRENT_YEAR = 2026;

    cout << "=== About me ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height (m): " << height_m << endl;
    cout << "Initial: " << initial << endl;
    cout << "Student: " << student << endl;
    cout << "Year: " << CURRENT_YEAR << endl;

    return 0;
}
