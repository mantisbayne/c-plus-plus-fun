#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Meredith Bayne CS 162 Fall 2017
// This program checks an array of characters and determines if a phrase is present

const int PHRASE_SIZE = 21;
const int SIZE = 4;

// Prototype for a function that will check if the smaller phrase is present in the larger phrase
void is_phrase_present(char large_phrase[], char small_phrase[]);

int main()
{
    // Initialize the arrays and the size in memory
    char large_phrase[PHRASE_SIZE] = "Chives are delicious";
    char small_phrase[SIZE];
    bool present;

    // Tell the user what the phrase is 
   cout << "Let's see if what you enter is contained in the phrase : " << large_phrase << " !" << endl;
   cout << "Please enter a phrase that has 3 or fewer letters: ";
   cin.get(small_phrase, SIZE, '\n');
    cin.ignore(100, '\n');

   // Confirm what the user entered
   cout << "You entered " << small_phrase << endl;

   // Tell the user about the calculation
    cout << "We will now check if the word is present ... " << endl;

    //Do the calculation
    is_phrase_present(large_phrase, small_phrase);
}

void is_phrase_present(char answer_phrase[], char input_phrase[]) 
{
    bool is_present = false;
    int answer_length = strlen(answer_phrase);
    int input_length = strlen(input_phrase);

    for(int i = 0; i < input_length; ++i)
    {
        for(int j = 0; j < answer_length; ++j)
        {
            if (input_phrase[i] == answer_phrase[j])
            {
                cout << "you got it" << endl;
                is_present = true;
            }
    }   }
  
    // Check if it's there and print out result
    if (is_present == true)
    {
        cout << "YAY YES" << endl;
    }
    else
    {
        cout << "NOT IRHGOEIHGSOAJ" << endl;
    }
}

