#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the radius ";
    cin>>r;
    float area=3.14*r*r;
    float perimeter=2*3.14*r;
    if(area>perimeter){
        cout<<"area is geater than circumference";
    }
    else{
        cout<<"circumference is greater than area";
    }
return 0;

}