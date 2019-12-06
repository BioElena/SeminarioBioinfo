#include<iostream>
#include<fstream>


using namespace std;

int main (void){
ifstream aminoacidFile;
aminoacidFile.open("AminoacidFile.txt");
char temporal;
string aminochain,final;
while (!aminoacidFile.eof())
{
	aminoacidFile >> temporal;
	switch (temporal)
	{
	case 'L':
		final = "Leu";
		break;
	case 'A':
		final = "Ala";
		break;
	case 'G':
		final = "Gly";
		break;
	case 'I':
		final = "Ile";
		break;
	case 'P':
		final = "Pro";
		break;
	case 'V':
		final = "Val";
		break;
	case 'F':
		final = "Phe";
		break;
	case 'W':
		final = "Trp";
		break;
	case 'Y':
		final = "Tyr";
		break;
	case 'D':
		final = "Asp";
		break;
	case 'E':
		final = "Glu";
		break;
	case 'R':
		final = "Arg";
		break;
	case 'H':
		final = "His";
		break;
	case 'K':
		final = "Lys";
		break;
	case 'S':
		final = "Ser";
		break;
	case 'T':
		final = "Thr";
		break;
	case 'C':
		final = "Cys";
		break;
	case 'M':
		final = "Met";
		break;
	case 'N':
		final = "Asn";
		break;
	case 'Q':
		final = "Gln";
		break;
	case '*':
		final = "*";
		break;
	case '+':
		final = "+";
		break;
	case '-':
		final = "-";
		break;
	case '1':
		final = "1\n";
		break;
	case '2':
		final = "2\n";
		break;
	case '3':
		final = "3\n";
		break;
	case '.':
			final = "------------------------\n";
			break;
	default:
		final = "";
		break;
	}
	aminochain += final;
	aminochain += " ";
}
cout << aminochain;




}
