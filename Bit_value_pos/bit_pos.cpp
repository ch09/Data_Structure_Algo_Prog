// User gives me pos and I should give him the bit value of that pos of an integer number 
// x = 5 = 101 , pos = 2  --> output = 0 , pos = 1 --> output = 1

#include<iostream>
using namespace std;
int main () 
{
	// Pos 
	int pos =0; 
	cout << "Give me the pos " <<  endl; 
	cin >> pos ;

	unsigned int n = 5 ; // Exemple 
		
	// 2 , 101 
		// 101 << 2 = 100 , 101 >> 2 = 001
		
	cout << ((n >> pos ) & 1) << endl; 
	
	return 0;
}