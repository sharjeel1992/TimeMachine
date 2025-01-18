#include <iostream>
#include "TimeSpan.h"

using namespace std;

int main()
{
    // Initialize TimeSpan objects with different constructors
    TimeSpan duration1(1.5, 4, -10); 
    TimeSpan duration2(1, -380, 24.5); 
    TimeSpan duration3(-40, 50, -20);
    TimeSpan duration4(7, 3);
    TimeSpan duration5(4000);
    TimeSpan duration6;

    // Display TimeSpan objects
    cout <<  duration1 << endl;
    cout <<  duration2 << endl;
    cout <<  duration3 << endl;
    cout <<  duration4 << endl;
    cout <<  duration5 << endl;
    cout <<  duration6 << endl;

    // Perform arithmetic operations
    TimeSpan result1 = duration1 + duration2;
    TimeSpan result2 = duration1 - duration2;
    TimeSpan result3 = -duration5;

    // Display results of arithmetic operations
    cout << "result1 (duration1 + duration2): " << result1 << endl;
    cout << "result2 (duration1 - duration2): " << result2 << endl;
    cout << "result3 (-duration5): " << result3 << endl;

    // Test equality 
    if (duration1 == duration2) 
    {
        cout << "duration1 and duration2 are equal." << endl;
    } 
    else 
    {
        cout << "duration1 and duration2 are not equal." << endl;
    }

    //Test inequality
    if (duration3 != duration4)
    {
        cout << "duration3 and duration4 are not equal." << endl;
    } 
    else 
    {
        cout << "duration3 and duration4 are equal." << endl;
    }

    // Test input functionality
    TimeSpan userInput;
    cout << "Enter time (hours minutes seconds): ";
    cin >> userInput;

    if (cin) {
        cout << "You entered: " << userInput << endl;
    } else {
        cout << "Invalid input. Please enter three numeric values for hours, minutes, and seconds." << endl;
    }

    return 0;
}

