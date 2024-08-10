//Name:om bhombe
//PRN:23070123039
//Aim:Implemention of Decision Making Statements to Check the largert number in given numbers

#include <iostream>
using namespace std;

int main() { int a,b,c;
  
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    
    if (a>b) { 
        if (a>c)
        { cout << a << " is the largest number.";}
        else
        {cout << c << " is the largest number.";}
    }
    else {
        if (b>c)
        { cout << b << " is the largest number.";}
        else
         {cout << c << " is the largest number.";}
    }
    
    return 0;
}


/*Output:
Enter number 1: 7
Enter number 2: 6
Enter number 3: 8
8 is the largest number.*/
