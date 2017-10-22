#include <iostream>
#include <string>
using namespace std;

// Meredith Bayne CS 162 Fall 2017
// This program implements several functions that return numbers or strings

// Function prototype definitions
int func1(int, double);
double func2(string, int, double);
char func3(int, int, double, char);
string join(string, string);

int main()
{
    // Print out an int and a double
    func1(3, 8.5);

    // Print out a string concatenation
    join("John", "Project Manager");

    // Print out some shit
    func3(1,2,3.0,'a');

    return 0;
}

// Implementation of a function that prints out and int and a double
int func1(int integer, double e) 
{
   cout << integer << " " << e << " " << endl; 
   return 0;
}

// Implementation of a function that joins two strings
string join(string name, string job)
{
    string joined = name + ' ' + job;
    cout << joined << endl;
    return joined;
}

// Implementation of a function that prints out the next character
char func3(int num, int second, double doub, char first)
{
   char next;
    next = 'b';
    first = next;
    cout << num << ' ' << second << ' ' << doub << ' ' << first << endl;
    return next;
}
