// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//using namespace std;
//int main()
//{
//    for (int i = 1; i <= 10; ++i) {
//        cout << i << " ";
//        ++i;
//        
//    }
//
//
//    
//}

// #include<iostream>
// using namespace std;

// int main() {
// 	//Print Sum of first 100 numbers

// 	int i = 1;
// 	int sum = 0;

// 	while (i <= 100)
// 	{
// 		sum = sum + i;
// 		i++;

// 	}

// 	cout<< "Sum of first 100 Numbers is: " << sum << endl;

// 	return 0;
// }

#include<iostream>
using namespace std;

int main() {
	

	long num;
	long d;
	long sum = 0;
	long rev = 0;
	
	cout << "Enter any int number: "; 
	cin >> num; //145
	
	while (num != 0)
	{
		d = num % 10;     // num = 145 % 10 ----> 5
		
		//cout << d << endl;
		rev = rev * 10 + d;
		sum = sum + d;

		num = num / 10;   // num = 145 / 10 ----> 14
		
	}

	cout << "Sum of all the digits is: "<< sum << endl;
	cout << "Reverse of the number is: " << rev << endl;

	return 0;
}