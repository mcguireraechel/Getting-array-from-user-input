#include <iostream>

using namespace std;


//print array function
void printArray(int guess[], int size){
    for(int i =0; i< size; i++){
        cout<< guess[i] << endl;

    }
    
}

int main(){
 
const int SIZE =10; //size of the array
int guesses[SIZE]; //declaring array
int count =0; //keeping count of entries


 cout<< "Enter up to 10 values. Press L to leave"<< endl;

//loop to get input up to SIZE times
for(int i =0; i <SIZE; i++){
   
   //if the user enters an int (this is an int array)
    if (cin>> guesses[i]){
        //input worked

        //increase count by 1 (the amount of entries made)
        count++;
    }
    else{
        //invalid character, leave loop
        break;
    }

}


//call printing function and pass in the array and amount of entries
printArray(guesses, count);










}


