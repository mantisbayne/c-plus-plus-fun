#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Meredith Bayne CS 162 Fall 2017
// This program prompts the user for a word and prints out the vowels in the word

// Set the size for the arrays in memory
const int SIZE = 21;

// Function prototypes
int number_of_vowels(char word[]);

int main()
{
    // Variable definitions
    char word[SIZE];

    // Ask the user for a word and explain the program
    cout << "Please enter a word, and we will tell you how many vowels it contains : " << endl;

    // Get the word from the user and cut off at 20 characters
    cin.get(word, SIZE, '\n');
    cin.ignore(100, '\n');
   
    // Count the vowels
    int count_vowels = number_of_vowels(word);

    //Tell the user what you got
    cout << "Your word has " << count_vowels << " vowels" << endl;

    return 0;
}

// Implementation of a function that counts vowels in an array of characters
// Return an int representing the number of vowels counted
int number_of_vowels(char word[])
{
    int word_length = strlen(word);
    int count = 0;

    for(int i = 0; i < word_length; ++i)
    {
        word[i] = tolower(word[i]);
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            ++count;
        }
    }

    return count;
}
