#ifndef TIMESPAN_H
#define TIMESPAN_H

#include <iostream>
#include <cmath>

// TimeSpan class represents a duration in hours, minutes, and seconds
class TimeSpan {
public:
    // Constructors
    TimeSpan();
    TimeSpan(double hours, double minutes, double seconds);
    TimeSpan(double minutes, double seconds);
    TimeSpan(double seconds);

    // Set time to normalized values
    bool setTime(double hours, double minutes, double seconds);

    // Operator overloads
    TimeSpan operator+(const TimeSpan &other) const;
    TimeSpan& operator+=(const TimeSpan &other);
    TimeSpan operator-(const TimeSpan &other) const;
    TimeSpan& operator-=(const TimeSpan &other);
    TimeSpan operator-() const;

    // Comparison operators
    bool operator==(const TimeSpan &other) const;
    bool operator!=(const TimeSpan &other) const;

    // Stream I/O operators
    friend std::ostream& operator<<(std::ostream &out, const TimeSpan &ts);
    friend std::istream& operator>>(std::istream &in, TimeSpan &userInput);

    // Accessors
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

private:
    int hours;
    int minutes;
    int seconds;
};

#endif // TIMESPAN_H
