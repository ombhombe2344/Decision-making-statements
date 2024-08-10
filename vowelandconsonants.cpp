//Name:om bhombe
//PRN:23070123039
//Aim:Implemention of Decision Making Statements to Check the give Character is a Vowel or Consonant

#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }

    return 0;
}


/*Output:
For Vowel-
Enter a character: a
a is a vowel.

For Consonant-
Enter a character: j
j is a consonant.*/
