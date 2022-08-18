
#include <iostream>
#include <cmath>
using namespace std;

void binToDec(int binNum, int& decimal, int& weight);

int main()
{
	int decimalNum = 0;
	int bitWeight = 0;
	int binaryNum;

	cout << "Enter a number in binary format to see its equivalent in decimal: ";
	cin >> binaryNum;
	cout << endl;

	binToDec(binaryNum, decimalNum, bitWeight);
	cout << "Binary" << binaryNum << " = " << decimalNum << " decimal" << endl;

	return 0;
}

void binToDec(int binaryNum, int& decimal, int& weight)
{
	int bit;

	if (binaryNum > 0)
	{
		bit = binaryNum % 10;
		decimal = decimal + bit *static_cast<int>(pow(2.0, weight));
		binaryNum = binaryNum / 10;
		weight ++;
		binToDec(binaryNum, decimal, weight);


	}
}
