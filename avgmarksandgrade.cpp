//Name:OM BHOMBE
//PRN:23070123039
//Aim:Implemention of Decision Making Statements to find Average of marks and to Grade it

#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3,s4,s5,avg;
    cout<<"Enter the Marks out of 100:"<<endl;
    cout<<"Enter the s1 marks:"<<endl;
    cin>>s1;
    cout<<"Enter the s2 marks:"<<endl;
    cin>>s2;
    cout<<"Enter the s3 marks:"<<endl;
    cin>>s3;
    cout<<"Enter the s4 marks:"<<endl;
    cin>>s4;
    cout<<"Enter the s5 marks:"<<endl;
    cin>>s5;
    avg=(s1+s2+s3+s4+s5)/5;
    if (avg >= 90 && avg<100){
        cout<<"Your Grade is O"<<endl;
    }
    else if (avg>=80 && avg<=89){
         cout<<"Your Grade is A+"<<endl;
    }
    else if (avg>=70 && avg<=79){
        cout<<"Your Grade is A"<<endl;
    }
    else if (avg>=60 && avg<=69){
        cout<<"Your Grade is B+"<<endl;
    }
    else if (avg>=50 && avg<=59){
        cout<<"Your Grade is B"<<endl;
    }
    else if (avg>=40 && avg<=49){
        cout<<"Your Grade is C"<<endl;
    }
    else{
        cout<<"Your Grade is F"<<endl;
    }
    return 0;
}


/*Output:
Enter the Marks out of 100:
Enter the s1 marks:
80
Enter the s2 marks:
90
Enter the s3 marks:
70
Enter the s4 marks:
60
Enter the s5 marks:
50
Your Grade is A
*/
