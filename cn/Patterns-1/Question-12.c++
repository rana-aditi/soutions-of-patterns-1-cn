#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
       int  k=i+1;
        while(j<=i){
            int x=k-j;
            cout<<x;
            j++;
        }

        cout<<endl;
        i++;

    }
}