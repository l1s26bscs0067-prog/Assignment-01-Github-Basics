#include<iostream>
using namespace std;
int main()
{
	/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Khadija Tul Kubra
 * Reg No     : L1S26BSCS0067
 * Assignment : 01 - Getting Started with GitHub
 */
	//Taking sum of 1st 50 natural nums

         int sum = 0;

        for (int i = 1; i <= 50; i++) {
            sum = sum + i;
        }

        cout << "Sum of first 50 natural numbers: " << sum << endl;
 

	return 0;
}
