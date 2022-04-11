#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<< "enter your marks: ";
    cin>>marks;
    if (9<marks<=10){
        cout<<"Your grade is A+";
    }
    else if (8<marks<=9){
        cout<<"Your grade is A";
    }
    else if (7<marks<=8){
        cout<<"Your grade is B+";
    }
    else if (6<marks<=7){
        cout<<"Your grade is B";
    }
    else if (5<marks<=6){
        cout<<"Your grade is C";
    }
    else if (4<marks<=5){
        cout<<"Your grade is D";
    }
   
    else {
        cout<<"failed";
    }
}