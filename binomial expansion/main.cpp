#include <iostream>

using namespace std; // So we can see cout and endl

int main()
{ 
  int x = 0;  // Don't forget to declare variables
  int y = 0;
  int n = 2;
  int v = 0;
  cout << "Please enter an exponant";
  cin >> n;
  cout << "Variable or numbers?(1 or 2 )";
  cin >> v;
if ( v != n ) {
  while ( x > -1 ) { // While x is l�ess than 10 
    cout<< "X^" << x << "Y^" << y ;
    x--; 
	y++;     // Update x so the condition can be met eventually
  }
  }
}

//	Pascal.cpp
//	Copyright (c) Dave Kerr 2004
//	An example of how to show pascals triangle.


//    This function returns the factorial of a number, e.g.
//    Factorial of 4 = 4 * 3 * 2 * 1 = 24

int Factorial(int number)
{
	if(number == 1 || number == 0) return 1;

	int factorial = number;
	while(--number > 1)
		factorial *= number;
  
	return factorial;
}

//  Combination finds the combination of a pair of numbers,
//  n and r, i.e nCr, which is :
//  n!
//  __
//  r!(n-r)!
int Combination(int n, int r)
{
    return Factorial(n) / (Factorial(r) * Factorial(n-r));
}

//	ShowNumber will print the number and the correct amount
//	of spaces, by working out how many digits there are in the number.
void ShowNumber(int number)
{
	int digits = 1;
	int e;
	for(int e = 10; e <= 10000; e *= 10)
	{
		if((int)(number / e) > 0) digits++;
		else break;
	}

	cout << number;
	for(e=0; e < (6-digits); e++)
		cout << " ";
}



int pascal (int argc, char *argv[])
{


	//   Get the height.
	int height = 1;
	
	int line=0;
	 
	//  Go through each line....
	for(int n; line <= height; line++)
	{
		for(int t=0;  t < ((height-n)); t++)
			cout << "   ";
	  
		//  ...and print out every number.
		for(int b=0; b < line; b++)
			ShowNumber(Combination(line, b));
		cout << "1\n";
	}

	return 0;
}
