#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int naturalNum, divisorCounter, divisorSum, j;
bool isAbundantNumber; 
string divisors;
const int FIRST_WITH_SIX = 64;


int Num_Divisors(int naturalNum) { //checks if number divisible by every whole number before it and adds the divisors together, then prints these values if it's an abundant number
	
	divisorSum = 0;
	divisorCounter = 0;
	divisors = "";
	for (j = 1 ; j < naturalNum ; j++ ) {
		if (naturalNum % j == 0) {
			divisorCounter++;
			divisorSum += j;
			divisors.append(to_string(j) + ", ");
		}	
	}
	if (divisorSum > naturalNum) {
		cout << "The proper divisors of " << naturalNum << " are " << divisors;
		cout << " and their sum is " << divisorSum << "." << endl;
		cout << "There are " << divisorCounter << " proper divisors of " << naturalNum << "." << endl << endl;
	}
	return (divisorCounter);
	
}



int main() { //if number is under 64, run function 
	for (int k = 0; k < FIRST_WITH_SIX; k++) {
		int divisorCount = Num_Divisors(k);
	}
	cout << "64 is not an abundant number, but it IS the first number with 6 proper divisors." << endl;
	return 0;

}