#include<bits/stdc++.h>

using namespace std;




int* fun (){

    int * a = new int;
    // cout<<"fun:" << a <<endl;
    *a = 20;

    return a;
}
int main(){
int * p = fun();

cout<<"Main :"<< *p <<endl;
// int  x = 10;

// int  * a = new int;
// *a = 10;

// cout<<*a <<endl;

// float * f = new float;
// *f = 12.23;

// cout<< *f <<endl;
    return 0;
}