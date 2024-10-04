#include <iostream>
using namespace std;





int main()
{
	/*char znak;
	cout << "enter your znak" << endl;
	cin >> znak;
	int transformd_znak = (int)znak;
	cout << transformd_znak << endl;
	if (transformd_znak >= 32 && transformd_znak <= 47) {
		cout << "sumvol" << endl;
	}
	else if (transformd_znak >= 48 && transformd_znak <= 57) {
		cout << "number" << endl;
	}
	else if (transformd_znak >= 58 && transformd_znak <= 64)
	{
		cout << "sumvol" << endl;
	}
	else if (transformd_znak >= 65 && transformd_znak <= 90)
	{
		cout << "bukva" << endl;
	}
	else if (transformd_znak >= 91 && transformd_znak <= 96)
	{
		cout << "sumvol" << endl;
	}
	else if (transformd_znak >= 97 && transformd_znak <= 122)
	{
		cout << "bukva" << endl;
	}
	else if (transformd_znak >= 123 && transformd_znak <= 127)
	{
		cout << "sumvol" << endl;
	}*/





		/*double cost; 
		int operatorFrom, operatorTo;

	
		cout << "Enter the cost of the call (in UAH): ";
		cin >> cost;

	
		cout << "Choose the operator you are calling from:\n";
		cout << "1. Operator A\n";
		cout << "2. Operator B\n";
		cout << "3. Operator C\n";
		cin >> operatorFrom;


		cout << "Choose the operator you are calling to:\n";
		cout << "1. Operator A\n";
		cout << "2. Operator B\n";
		cout << "3. Operator C\n";
		cin >> operatorTo;

		double finalCost = 0.0;

		if (operatorFrom == 1) {
			if (operatorTo == 1) {
				finalCost = cost; 
			}
			else if (operatorTo == 2) {
				finalCost = cost * 1.2;
			}
			else if (operatorTo == 3) {
				finalCost = cost * 1.5; 
			}
		}
		else if (operatorFrom == 2) {
			if (operatorTo == 1) {
				finalCost = cost * 1.2;
			}
			else if (operatorTo == 2) {
				finalCost = cost; 
			}
			else if (operatorTo == 3) {
				finalCost = cost * 1.3; 
			}
		}
		else if (operatorFrom == 3) {
			if (operatorTo == 1) {
				finalCost = cost * 1.5; 
			}
			else if (operatorTo == 2) {
				finalCost = cost * 1.3; 
			}
			else if (operatorTo == 3) {
				finalCost = cost; 
			}
		}
		else {
			cout << "Invalid operator choice!" << endl;
			return 1; 
		}

		
		cout << "The cost of the call is: " << finalCost << " UAH" << endl;

		return 0;*/




	/* 1)  const int zarplata100z = 50; 
	const int shtraf = 20; 
	int dohid = 0;
	cout << "vedit bazanu dohid -->" << endl;
	cin >> dohid;
	int zapiznenia = 0;
	cout << "vedit kilkist zapiznen -->" << endl;
	cin >> zapiznenia;
	double totalshtraf = shtraf * zapiznenia; 
	double vsi = (dohid + totalshtraf );
	double radkiv = (vsi / zarplata100z * 100);
	cout << radkiv << endl;*/


	/*  2)   const int zarplata100z = 50;
	const int shtraf = 20;
	const int kilkist = 100;
	int dohid = 0;
	cout << "vedit bazanu dohid -->" << endl;
	cin >> dohid;
	int radkiv = 0;
	cout << "vedit kilkist radkiv -->" << endl;
	cin >> radkiv;
	double zarplata = ((radkiv / kilkist) * zarplata100z);
	double ostacha = (zarplata - dohid);
	if (ostacha > 0) {
		cout << ostacha / shtraf << endl;
		return 0;
	}
	else (ostacha < 0);
		cout << "vasia ne moge zapiznuvatus" << endl;
	*/




	/*3) 
	const int zarplata100z = 50;
	const int shtraf = 20;
	const int kilkist = 100;
	int shtrafu  = 0;
	cout << "vedit kilkist shtrafiv -->" << endl;
	cin >> shtrafu;
	int radkiv = 0;
	cout << "vedit kilkist radkiv" << endl;
	cin >> radkiv;
	double dohid = ((radkiv / kilkist) * zarplata100z);
	double zapiznenia = (shtrafu * shtraf);
	double zarplata = (dohid - zapiznenia);
	if (zarplata > 0); {
		cout << zarplata << endl;
		return 0;
	}*/
}
