#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
     int glo=9;
     glo=78;
    int a=14, b=15;
    float pi=3.15;
    char m='c';
    bool is_true=true;
    sum();
    cout<<glo<<is_true;
// cout<<"this is a tutorial 4. \nhere the value of a is "<<a<<". \nThe value of b is "<< b;
// cout<<"\nhere the value of pi is "<<pi;
// cout<<"\nhere the value of m is "<<m;
return 0;
}