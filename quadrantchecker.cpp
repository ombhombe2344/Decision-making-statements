//Name:om bhombe
//PRN:23070123039
//Aim:Implemention of Decision Making Statements to check the Quadrants

#include <iostream>
using namespace std;

int main(){
    int x ,y;
    cout<<"Enter the value for x :"<<endl;
    cin>>x;
    cout<<"Enter the value for y:"<<endl;
    cin>>y;
    if (x > 0 && y>0) {
         cout<<"The point is in first quadrant"<<endl;
    }
    else if (x<0 && y>0) {
         cout<<"The point is in second quadrant"<<endl;
    }
    else if (x<0 && y<0) {
        cout<<"The point is in third quadrant"<<endl;
    }
    else if (x>0 && y<0) {
        cout<<"The point is in fourth quadrant"<<endl;
    }
    else if ((x==0 && y!=0) || (x!=0 && y==0)) {
        cout <<"The point is on axis";
    }
    else{
        cout<<"The point is on origin"<<endl;
    }
    
    return 0;
}
/*Enter the value for x :
5
Enter the value for y:
8
The point is in first quadrant*/
