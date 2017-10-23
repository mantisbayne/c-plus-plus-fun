#include <iostream>
using namespace std;

// Meredith Bayne, CS 162, Fall 2017
// This program will take an array of 100 integers and sum the integers
// between 10 and 200, non-inclusive

// Constant definitions
const int SIZE = 10; // Will define the size of the array

// Function prototypes
void get_numbers_from_user(int integers[]);  // Will get input from the user and add to the array of integers
int sum_numbers(int integers[]); // Will sum the numbers in the array between 10 and 200, non-inclusive

int main() 
{
   // Variable definitions
   int integers[SIZE]; // Will store 100 integers

   // Ask the user for some integers
   cout << "Please enter some whole numbers, up to 10, and press ENTER when you are done with each number: " << endl;

   // Get the number from the user and put them into an array
  get_numbers_from_user(integers);

  // Return the sum of the numbers between 10 and 200, non-inclusive
 int sum = sum_numbers(integers); 

 // Print out the sum to the user
 cout << "Your sum is : " << sum << endl;
}

void get_numbers_from_user(int integers[])
{
    for (int i = 0; i < SIZE; ++i)
    {
        cin >> integers[i];
    }
}

int sum_numbers(int integers[])
{
    int sum = 0;

    for (int i = 0; i < SIZE; ++i)
    {
       if(integers[i] > 10 && integers[i] < 200)
       {
           sum = sum + integers[i];
       }
    }

    return sum;
}
