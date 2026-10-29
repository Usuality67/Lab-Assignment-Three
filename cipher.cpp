#include <iostream>
#include <string>

using namespace std; 
//Sum and Substring_Index are default parameters, so user doesnot have to explicitely state them while calling the func.
//They are hereby called P1 and P2 respectively.
int sumEvenDigits(int n,int Substring_Index=-1, int sum=0); 
int sumOddDigits(int n); 
int digitalRoot(int n);
int reverseNumber(int n);
bool isCipherNumber(int n);

int main() {
    int result = sumEvenDigits(117); 
    cout << result << "\n";

    return 0; 
}


int sumEvenDigits(int n, int Substring_Index, int sum) {
    string number = to_string(n); //Converting the number "n" into a string
    Substring_Index++; //Since this default parameter (P1) is initialized with -1,and cannot be greater than number's length, we will increment it first .
    
    if (Substring_Index >= number.length()) {  //Base Case, if the P2 is greater than length of the string, we will return the sum
        return sum;
    }

    int digit = stoi(number.substr(Substring_Index,1)); //Storing the single digit from the number. It changes with every call as Substring_Index gets incremented.
    if(digit % 2 == 0) {
        sum = sum + digit ; //if the digit is even then add it to the previous P1.
    } 
    //if the digit is odd then no update to P1 is neccessary.

    return sumEvenDigits(n,Substring_Index,sum); //Do nother recursive call with updated P1 and P2.
        
    

    
    
}



