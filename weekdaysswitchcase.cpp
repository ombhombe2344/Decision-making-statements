//Name:om bhombe
//PRN:23070123039
//Aim:Implemention of Decision Making Statements to program a Weekday Selection using Switch Case

#include <iostream>
using namespace std;

int main() {
    int choice;
  
    cout << "Days of the Week" << endl;
    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;
    cout << "4. Thursday" << endl;
    cout << "5. Friday" << endl;
    cout << "6. Saturday" << endl;
    cout << "7. Sunday" << endl;
    cout << "Enter the number to get the day of the week: ";
    cin >> choice;
  
    switch (choice) {
        case 1:
            cout << "You selected Monday." << endl;
            break;
        case 2:
            cout << "You selected Tuesday" << endl;
            break;
        case 3:
            cout << "You selected Wednesday." << endl;
            break;
        case 4:
            cout << "You selected Thursday." << endl;
            break;
        case 5:
            cout << "You selected Friday." << endl;
            break;
        case 6:
            cout << "You selected Saturday." << endl;
            break;
        case 7:
            cout << "You selected Sunday." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            break;
    }
  
    return 0;
}


/*Output:
Days of the Week
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
Enter the number to get the day of the week: 1
You selected Monday.
*/
