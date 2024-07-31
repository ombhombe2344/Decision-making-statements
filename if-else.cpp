/*om bhombe*/
#include <iostream>
using namespace std;

int main() {
    char letter;

    // Prompt the user to enter a letter
    cout << "Enter a letter: ";
    cin >> letter;

    // Check if the letter is a vowel
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        cout << letter << " is a vowel." << endl;
    } else {
        // If not a vowel, assume it's a consonant (no validation for input)
        cout << letter << " is a consonant." << endl;
    }

    return 0;
}
/*Enter a letter: A
A is a vowel.*/
