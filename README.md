# TimeMachine
Purpose

This programming assignment will provide exercises in designing classes with proper abstraction and encapsulation. 

Problem: TimeSpan
Design and implement a TimeSpan class which represents a duration of time in hours, minutes,
and seconds. The order hours, minutes, and seconds should be respected in the constructor.

As an example
TimeSpan duration(1, 2, 3);

is a duration of time of 1 hour, 2 minutes and 3 seconds.
In the instances of the TimeSpan class you should store the values as integers in a normalized
way. The number of seconds should be between -60 and 60; number of minutes should be
between -60 and 60. You do not need to worry about integer overflow for very big TimeSpans.
Accessor/Mutator functions required
The TimeSpan class should implement the following member functions:
int getHours() const; return the number of hours as an int
int getMinutes() const; return the number of minutes as an int
int getSeconds() const: return the number of Seconds as an int
bool setTime(double hours, double minutes, double seconds): set the number of hours, minutes, seconds and return true if successful.
Constructors
The class should define constructor(s) that receive various primitive types (specifically
int, float, and double) and converts them to Int. A few examples:
TimeSpan(1.5, 4, -10) represents 1 hour, 33 minutes, 50 seconds.
TimeSpan(1, -380, 24.5) represents -5 hour, -19 minutes, -36 seconds.
TimeSpan(-40, 50, -20) represents -39 hour, -10 minutes, -20 seconds.
If only one parameter is passed during initialization assume it is a second. If there are two
assume minutes and seconds (in that order). Round the answer to the nearest second (for example, 50.9 seconds should be rounded to 51 seconds). Make sure to include also a default instructor with no input parameters instantiating a TimeSpan object with (0, 0, 0).
TimeSpan(7, 3) represents 7 minutes, 3 seconds.
Operators
The class must overload and implement the following math operators: addition,
subtraction, Unary Negation.
The class must overload and implement the following comparisons: ==, !=
The class must implement += and -= assignment statements as well.
Stream I/O
The class must implement the << and >> operators to work on streams:
Input
Take as input three values: hour, minutes, seconds and create appropriate class. If the inputs are double or float, convert them to integers.
