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
    int nHands=10;
    int nCards=5; 
    // Test out the Card Shuffle
    for(int hand=1; hand<=nHands; hand++){
        for(int cpHand=1; cpHand <= nCards; cpHand++){
            cout<<getCard();
        }
    }
    
    //Exit
    return 0;
}

string getCard(){
    // Declare variables
    fstream in; 
    string card;
    int nLines;
    //Initialize variables
    in.open("card.dat");
    nLines = rand()%8+1; // Possible 8 colors in the file
    //Look through file to find the random color;
    for(int line = 1; line <=nLines; line++){
        in>>card;
    }
    in.close();
    return card;
}
