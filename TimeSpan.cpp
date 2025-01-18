
#include "TimeSpan.h"
using namespace std;


//Default Constructor
TimeSpan::TimeSpan()
{
    this->hours = 0;
    this->minutes = 0;
    this->seconds = 0;
}

//Constructor with hours, minutes, and seconds
TimeSpan::TimeSpan(double hours, double minutes, double seconds)
{
    setTime(hours, minutes, seconds);
}

//Constructor with minutes and seconds only
TimeSpan::TimeSpan(double minutes, double seconds)
{
    this->hours = 0;
    setTime(hours, minutes, seconds);
}

//Constructor with seconds only
TimeSpan::TimeSpan(double seconds) 
{
    this->hours = 0;
    this->minutes = 0;
    setTime(hours, minutes, seconds);
}

//Add operator
TimeSpan TimeSpan::operator+(const TimeSpan &other) const
{
    double totalHours = this->hours + other.hours;
    double totalMinutes = this->minutes + other.minutes;
    double totalSeconds = this->seconds + other.seconds;
    return TimeSpan(totalHours, totalMinutes, totalSeconds);
}

//Add and assign operator
TimeSpan& TimeSpan::operator+=(const TimeSpan &other)
{
    this->hours += other.hours;
    this->minutes += other.minutes;
    this->seconds += other.seconds;
    setTime(this->hours, this->minutes, this->seconds);
    return *this;
}

//Subtract operator
TimeSpan TimeSpan::operator-(const TimeSpan& other) const
{
    double totalHours = this->hours - other.hours;
    double totalMinutes = this->minutes - other.minutes;
    double totalSeconds = this->seconds - other.seconds;
    return TimeSpan(totalHours, totalMinutes, totalSeconds);
}

// Subtract and assign operator
TimeSpan& TimeSpan::operator-=(const TimeSpan &other)
{
    this->hours -= other.hours;
    this->minutes -= other.minutes;
    this->seconds -= other.seconds;
    setTime(this->hours, this->minutes, this->seconds);
    return *this;
}

// Negate operator
TimeSpan TimeSpan::operator-() const
{
    return TimeSpan(-this->hours, -this->minutes, -this->seconds);
}

//Equal operator
bool TimeSpan::operator==(const TimeSpan& other) const
{
    return (this->hours == other.hours && this->minutes == other.minutes && this->seconds == other.seconds);
}

//Not equal operator
bool TimeSpan::operator!=(const TimeSpan& other) const
{
    return !(*this == other);
}

//Normalize the time
bool TimeSpan::setTime(double hours, double minutes, double seconds) 
{
    double totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    double exactHours = totalSeconds / 3600;
    this->hours = static_cast<int>(exactHours);
    double exactMinute = (exactHours * 60);
    this->minutes = static_cast<int>(exactMinute) % 60;
    this->seconds = static_cast<int>(round(exactMinute * 60)) %  60;
    return true;
}

//Output operator
std::ostream& operator<<(std::ostream& out, const TimeSpan& ts)
{
    out <<"Hours: " <<ts.hours << ", Minutes: " << ts.minutes << ", Seconds: " << ts.seconds;
        return out;
}

//Input operator
std::istream& operator>>(std::istream& in, TimeSpan& userInput) 
{
    double hours, minutes, seconds;
    if (in >> hours >> minutes >> seconds)
    {
        userInput.setTime(hours, minutes, seconds);
    } 
    else 
    {
        // Handle invalid input
        in.clear();
        in.setstate(std::ios::failbit); 
    }
    return in;
}

//Getters
int TimeSpan::getHours() const
{
    return hours;
}

int TimeSpan::getMinutes() const
{
    return minutes;
}

int TimeSpan::getSeconds() const
{
    return seconds;
}