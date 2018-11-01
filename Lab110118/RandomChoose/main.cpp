/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 1, 2018, 11:25 AM
 * Purpose:  Randomly choose from a file
 */

//System Libraries Here
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getColr();
string getCard();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    
    
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    
    
    //Output Located Here
    for(int i = 1; i<=10; i++  ){
        cout<<getColr()<<endl;
        
    }

    //Exit
    return 0;
}

string getColr(){
    // Declare variables
    fstream in; 
    string color;
    int nLines;
    //Initialize variables
    in.open("color.dat");
    nLines = rand()%8+1; // Possible 8 colors in the file
    //Look through file to find the random color;
    for(int line = 1; line <=nlines; line++){
        in>>color;
    }
    in.close();
    return color;
}
