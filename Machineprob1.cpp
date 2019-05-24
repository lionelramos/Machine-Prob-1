#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double sideA, sideB, sideC, Pnum, D, A, B, C, Area, R,Apo;
	int Ans = 0;
	bool option1 = true;

	do
	{
		cout << "Enter the length of the first side : ";
		cin >> sideA;
		cout << "Enter the length of the second side : ";
		cin >> sideB;
		cout << "Enter the length of the third side : ";
		cin >> sideC;
		cout << " " << endl;

		Pnum = (sideA + sideB + sideC) / 2.0;
		D = Pnum * (Pnum - sideA) * (Pnum - sideB) * (Pnum - sideC);
		Area = sqrt(D);

		if (D <= 0)
		{
			cout << "Invalid input! Triangle is not formed. " << endl;
		}

		R = (sideA * sideB * sideC) / (4.0 * Area);
		A = (180.0 / 3.1415926) * asin(sideA / (2.0 * R));
		B = (180.0 / 3.1415926) * asin(sideB / (2.0 * R));
		C = (180.0 / 3.1415926) * asin(sideC / (2.0 * R));

		cout << "The angles are as follows :" << endl;
		cout << " " << endl;
		cout << "Angle (A) opposite to side a = " << A << " degrees" << endl;
		cout << "Angle (B) opposite to side b = " << B << " degrees" << endl;
		cout << "Angle (C) opposite to side c = " << C << " degrees" << endl;

		cout << " " << endl;

		if ((sideA == sideB || sideB == sideC || sideC == sideA) && !(sideA == sideB && sideB == sideC && sideC == sideA))
		{
			cout << "The dimensions produced an Isosceles triangle! " << endl;
			cout << "There is no apothem!" << endl;
		}
		else if (sideA == sideB && sideB == sideC && sideC == sideA)
		{

			cout << "The dimensions produced an Equilateral triangle!" << endl;
			Apo = (sideA / 2) / sqrt(3);
			cout << "Apothem = " << Apo << " " << endl;
		}

		else if (sideA != sideB && sideB != sideC && sideC != sideA)
		{	
			cout << "The dimensions produced a Scalene triangle!" << endl;
			cout << "There is no apothem!" << endl;

			cout << " " << endl;
		}
		cout << "PERIMETER     = " << (2.0 * Pnum) << endl;
		cout << "AREA          = " << Area << endl;
		cout << "CIRCUM RADIUS = " << R << endl;
		cout << " " << endl;
		cout << "Therefore, circumcenter is in the center of circle with radius: " << R << endl;

		cout << " " << endl;

		if (A == 90.0 || B == 90.0 || C == 90.0)
		{
			cout << "The triangle is a RIGHT triangle" << endl;
		}
		if (A < 90.0 && B < 90.0 && C < 90.0)
		{
			cout << "The triangle is an ACUTE triangle" << endl;
		}
		if (A > 90.0 || B > 90.0 || C > 90.0)
		{
			cout << "The triangle is an OBTUSE triangle" << endl;
		}
		cout <<" "<<endl;
		cout << "Would you like to calculate again?(Input (1) if yes) : ";
		cin >> Ans;
		cout << " " << endl;
		if (Ans != 1)
			option1 = false;
		else if (Ans == 1)
			option1 = true;
	}

	while (option1);


	system("pause");
	return 0;
}