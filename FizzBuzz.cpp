//Jacky Wong
//FizzBuzz Test Code

#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
	for(int i = 1; i < 101; i++){
		if( (i % 3 == 0) && (i % 5 == 0) )	//if divisible by 3 and 5 print FizzBuzz
			cout << "FizzBuzz" << endl;
		else if( i % 3 == 0 )				//if divisible by 3 print Fizz
			cout << "Fizz" << endl;
		else if( i % 5 == 0 )				//if divisible by 5 print Buzz
			cout << "Buzz" << endl;
		else								//else print the number
			cout << i << endl;
	}
	
	return 0;
}
