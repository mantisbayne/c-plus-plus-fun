#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Meredith Bayne, CS 162, Fall 2017
// This program will copy an array to another array, excluding some types of characters

// Constant declarations
const int SIZE = 21; // Defines the size of the arrays of characters, limiting to 20 characters

// Function prototype definitions
void copy_to_word_copy(char word[], char word_copy[]); // Will copy to word_copy if the character is not a space or period

int main()
{
    // Create the arrays as variables
    char word[SIZE];
    char word_copy[SIZE];

    // Ask the user to enter a word
    cout << "Please enter a word, no longer than 20 characters. We will remove all spaes and periods : " << endl;

    // Get the word from the user
    cin.get(word, SIZE, '\n');
    cin.ignore(100, '\n');

    // Copy everything over to word copy except for spaces and periods
    copy_to_word_copy(word, word_copy);

    // Tell the user what they got
    cout << "Work is : " << word_copy << endl;
}

void copy_to_word_copy(char word[], char word_copy[])
{
    int word_len = strlen(word);
    int index = 0;

    while (index < word_len)
    {
    }

    strcpy(word_copy, word);
}
