#include <iostream>
#include <string>
#include<bits/stdc++.h> //a header file that includes every standard library
using namespace std;
class myClass { //create a class
public: //public access
    bool select = true; //bool for while loop
    double Height, Width, Length, Radius, Diameter; //creating double variables for each component
    char unit1 = 'C'; //character for CM
    char unit2 = 'M'; //character for CM
    string unit3 = "³"; //string of the power
    string choice; //Empty string for user input
    void myFunction (string fname) { //create a function
    cout << fname; //return the string
    }
};
int main() {
    myClass myObj; //create a object for the class
    myObj.myFunction("Welcome to more Mathematics with C++ \n\n"); //call the function
    //while loop for doing intended task
    while (myObj.select) {
        cout << "Select a shape: Square, Circle, Triangle, Cylinder, Cone" << endl; //Prompt user choice
        cout << "Type out the shape you want to calculate. \n";
        cin >> myObj.choice; //Get user choice
        //if...else if...else statements for user input
        if (myObj.choice == "Square") {
            cout << "User chose: " << myObj.choice <<endl; //repeat user input
            cout << "The Height of the object: "; //prompt user input
            cin >> myObj.Height; //Get user input
            cout << "The Width of the object: "; //prompt user input
            cin >> myObj.Width; //Get user input
            cout << "The Length of the object: "; //prompt user input
            cin >> myObj.Length; //Get user input
            double area = myObj.Height * myObj.Width * myObj.Length; //L × W × H
            cout << "The total area of the object is: " << area << myObj.unit1 << myObj.unit2 << myObj.unit3; //Return calculated values from user input
            myObj.select = false; //end loop
        } else if (myObj.choice == "Triangle") {
            cout << "User chose: " << myObj.choice <<endl; //repeat user input
            cout << "The Height of the object: "; //Prompt user input
            cin >> myObj.Height; //get user input
            cout << "The Width of the object: "; //prompt user input
            cin >> myObj.Width; //get user input
            cout << "The Length of the object: "; //prompt user input
            cin >> myObj.Length; //get user input
            double area = myObj.Height * myObj.Width * myObj.Length / 2; // (L × W × H) ÷ 2
            cout << "The total area of the object is: " << area << myObj.unit1 << myObj.unit2 << myObj.unit3; //Return calculated values from user input
            myObj.select = false; //end loop
        }  else if (myObj.choice == "Circle") {
            cout << "User chose: " << myObj.choice <<endl; //repeat user input
            cout << "Radius of Circle: "; //Prompt user input
            cin >> myObj.Radius;//get user input
            double area = (3.14 * myObj.Radius * myObj.Radius); //πr²
            cout << "The total area of the object is: " << area << myObj.unit1 << myObj.unit2 << myObj.unit3; //Return calculated values from user input
            myObj.select = false; //end loop
        }  else if (myObj.choice == "Cylinder") {
            cout << "User chose: " << myObj.choice <<endl; //repeat user input
            cout << "Radius of Circle: "; //prompt user input
            cin >> myObj.Radius; //get user input
            cout << "The Height of the object: "; //prompt user input
            cin >> myObj.Height; //get user input
            double area = (3.14 * myObj.Radius * myObj.Radius * myObj.Height); //πr² × h
            cout << "The total area of the object is: " << area << myObj.unit1 << myObj.unit2 << myObj.unit3; //Return calculated values from user input
            myObj.select = false; //end loop
        }  else if (myObj.choice == "Cone") {
            cout << "User chose: " << myObj.choice <<endl; //repeat user input
            cout << "Radius of Circle: "; //prompt user input
            cin >> myObj.Radius; //get user input
            cout << "The Height of the object: "; //prompt user input
            cin >> myObj.Height; //get user input
            double area = (3.14 * myObj.Radius * myObj.Radius * (myObj.Height / 3)); //πr² × h/3
            cout << "The total area of the object is: " << area << myObj.unit1 << myObj.unit2 << myObj.unit3; //Return calculated values from user input
            myObj.select = false; //end loop
        } else {
            cout << "Retype: \n"; //continue the loop due to wrong input from user
        }
    }
    return 0;
}