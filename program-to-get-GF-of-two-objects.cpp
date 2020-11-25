//
//  main.cpp
//  helloworld
//
//  Created by Muhammad Qasim Munir on 24/11/2020.
//

#include<iostream> //preprosessor directive
#include<math.h>
using namespace std; //standard namespace functions
int main()
{
float f,m1,m2,r; // took 4 variables
cout<<"Enter the value of two masses in Kg : "; // Value of the mass of the object in kg
cin>>m1>>m2; //input 2 variables
cout<<"Enter the distance between two masses in meters : "; //Distance b/w two objects in meters
cin>>r; //input meters
f=(6.67*pow(10.0,-11.0)*m1*m2)/(r*r); // performing operations on values
cout<<"The force of attraction between two masses = "<<f<<" Newton \n"; // output as Newton force
}
