#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"enter your age:";
    cin>>age;
    if (age<18){
        cout<<"minor not eligible";

    }
    else if(age>60){
        cout<<"Eligible for vaccination with highest priority";

    }
    else if(18<=age<=60){
        cout<<"Eligible for vaccination with least priority";
    }


}