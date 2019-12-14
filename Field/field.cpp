/*
 * field.cpp
 *
 *  Created on: Jan 28, 2019
 *      Author: Islam El-Bahnasawy
 */


#include <stdio.h>
#include <cwchar>
#include <iostream>
#include <string>


using namespace std;


string Hex2bin (string sHex)
		{
			string sReturn = "";
			for (unsigned long i = 0; i < sHex.length (); ++i)
			{
				switch (sHex [i])
				{
					case '0': sReturn.append ("0000"); break;
					case '1': sReturn.append ("0001"); break;
					case '2': sReturn.append ("0010"); break;
					case '3': sReturn.append ("0011"); break;
					case '4': sReturn.append ("0100"); break;
					case '5': sReturn.append ("0101"); break;
					case '6': sReturn.append ("0110"); break;
					case '7': sReturn.append ("0111"); break;
					case '8': sReturn.append ("1000"); break;
					case '9': sReturn.append ("1001"); break;
					case 'A': sReturn.append ("1010"); break;
					case 'B': sReturn.append ("1011"); break;
					case 'C': sReturn.append ("1100"); break;
					case 'D': sReturn.append ("1101"); break;
					case 'E': sReturn.append ("1110"); break;
					case 'F': sReturn.append ("1111"); break;
				}
			}
			return sReturn;
		}

string Bin2hex(string sBinary)
{
	string rest= "",tmp= "0000";
	for (unsigned long i=0;i<sBinary.length();i+=4)
	{
		tmp = sBinary.substr(i,4);
		if (!tmp.compare("0000"))
		{
			rest = rest + "0";
		}
		else if (!tmp.compare("0001"))
		{
			rest = rest + "1";
		}
		else if (!tmp.compare("0010"))
		{
			rest = rest + "2";
		}
		else if (!tmp.compare("0011"))
		{
			rest = rest + "3";
		}
		else if (!tmp.compare("0100"))
		{
			rest = rest + "4";
		}
		else if (!tmp.compare("0101"))
		{
			rest = rest + "5";
		}
		else if (!tmp.compare("0110"))
		{
			rest = rest + "6";
		}
		else if (!tmp.compare("0111"))
		{
			rest = rest + "7";
		}
		else if (!tmp.compare("1000"))
		{
			rest = rest + "8";
		}
		else if (!tmp.compare("1001"))
		{
			rest = rest + "9";
		}
		else if (!tmp.compare("1010"))
		{
			rest = rest + "A";
		}
		else if (!tmp.compare("1011"))
		{
			rest = rest + "B";
		}
		else if (!tmp.compare("1100"))
		{
			rest = rest + "C";
		}
		else if (!tmp.compare("1101"))
		{
			rest = rest + "D";
		}
		else if (!tmp.compare("1110"))
		{
			rest = rest + "E";
		}
		else if (!tmp.compare("1111"))
		{
			rest = rest + "F";
		}
		else
		{
			continue;
		}
	}
	return rest;
}






int main() {


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int i;
	int j;
	string input[2];
	for(i = 0; i < 2; i++) {
					cin>>input[i];
				}
string a = input[0];
string b = input[1];

string a_bin = Hex2bin(a);
string b_bin = Hex2bin(b);



int a_bit[8];
int b_bit[8];
int add_op[8];


		for (i =0; i< 8; i++){

			a_bit[i] = (int) a_bin[i] - 48;
			b_bit[i] = (int) b_bin[i] - 48;
			add_op[i] = a_bit[i] ^ b_bit[i];
		}
		string add_bin = "";

		for (i =0; i< 8; i++){

			add_bin = add_bin + to_string(add_op[i]);
		}

		string add_hex = Bin2hex(add_bin);

string a0_bin = a_bin;
string a1_bin = "01010101";
string a2_bin;
string a3_bin;
string a4_bin;
string a5_bin;
string a6_bin;
string a7_bin;

int a0_bit[8];
int a1_bit[8];
int a2_bit[8];
int a3_bit[8];
int a4_bit[8];
int a5_bit[8];
int a6_bit[8];
int a7_bit[8];


int n_1b[8] = {0,0,0,1,1,0,1,1};

for (i = 0; i < 8; i++) {

		a0_bit[i] = (int) a_bin[i] - 48;
	}

//shift_left a1
	a1_bin = a_bin.substr(1, 7);
	a1_bin = a1_bin + "0";

	for (i = 0; i < 8; i++) {

		a1_bit[i] = (int) a1_bin[i] - 48;
	}

	if (a_bin[0] == '1') {
		a1_bin="";
		for (i = 0; i < 8; i++) {

			a1_bit[i] = a1_bit[i] ^ n_1b[i];
			a1_bin = a1_bin + to_string(a1_bit[i]);
		}
	}

//shift_left a2
	a2_bin = a1_bin.substr(1, 7);
	a2_bin = a2_bin + "0";
	//cout<<a2_bin<<endl;
	for (i = 0; i < 8; i++) {

		a2_bit[i] = (int) a2_bin[i] - 48;
	}

	if (a1_bin[0] == '1') {
		a2_bin="";
		for (i = 0; i < 8; i++) {

			a2_bit[i] = a2_bit[i] ^ n_1b[i];
			a2_bin = a2_bin + to_string(a2_bit[i]);
		}


	}
//shift_left a3
	a3_bin = a2_bin.substr(1, 7);
	a3_bin = a3_bin + "0";


	for (i = 0; i < 8; i++) {

		a3_bit[i] = (int) a3_bin[i] - 48;

	}

	if (a2_bin[0] == '1') {
		a3_bin="";
		for (i = 0; i < 8; i++) {

			a3_bit[i] = a3_bit[i] ^ n_1b[i];
			a3_bin = a3_bin + to_string(a3_bit[i]);
		}
	}

//shift_left a4
	a4_bin = a3_bin.substr(1, 7);
	a4_bin = a4_bin + "0";

	for (i = 0; i < 8; i++) {

		a4_bit[i] = (int) a4_bin[i] - 48;
	}

	if (a3_bin[0] == '1') {
		a4_bin="";
		for (i = 0; i < 8; i++) {

			a4_bit[i] = a4_bit[i] ^ n_1b[i];
			a4_bin = a4_bin + to_string(a4_bit[i]);
		}
	}

//shift_left a5
	a5_bin = a4_bin.substr(1, 7);
	a5_bin = a5_bin + "0";

	for (i = 0; i < 8; i++) {

		a5_bit[i] = (int) a5_bin[i] - 48;
	}

	if (a4_bin[0] == '1') {
		a5_bin="";
		for (i = 0; i < 8; i++) {

			a5_bit[i] = a5_bit[i] ^ n_1b[i];
			a5_bin = a5_bin + to_string(a5_bit[i]);
		}
	}

//shift_left a6
	a6_bin = a5_bin.substr(1, 7);
	a6_bin = a6_bin + "0";

	for (i = 0; i < 8; i++) {

		a6_bit[i] = (int) a6_bin[i] - 48;
	}

	if (a5_bin[0] == '1') {
		a6_bin="";
		for (i = 0; i < 8; i++) {

			a6_bit[i] = a6_bit[i] ^ n_1b[i];
			a6_bin = a6_bin + to_string(a6_bit[i]);
		}
	}

//shift_left a7
	a7_bin = a6_bin.substr(1, 7);
	a7_bin = a7_bin + "0";

	for (i = 0; i < 8; i++) {

		a7_bit[i] = (int) a7_bin[i] - 48;
	}

	if (a6_bin[0] == '1') {
		a7_bin="";
		for (i = 0; i < 8; i++) {

			a7_bit[i] = a7_bit[i] ^ n_1b[i];
			a7_bin = a7_bin + to_string(a7_bit[i]);
		}
	}
//sdgfhgjvhkbjlk

int mul_op[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };



		if (b_bit[0] == 1) {
			for (j = 0; j < 8; j++) {

				mul_op[j] = mul_op[j] ^ a7_bit[j];
			}
			//cout<<"lolo ";
		}
		if (b_bit[1] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a6_bit[j];
					}
					//cout<<"lolo ";
				}
		if (b_bit[2] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a5_bit[j];
					}
					//cout<<"lolo ";
				}
		if (b_bit[3] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a4_bit[j];
					}
					//cout<<"lolo ";
				}
		if (b_bit[4] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a3_bit[j];
					}
					//cout<<"lolo ";
				}
		if (b_bit[5] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a2_bit[j];
					}
					//cout<<"lolo ";
				}
		if (b_bit[6] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a1_bit[j];
					}
					//cout<<"lolo ";
				}
		if (b_bit[7] == 1) {
					for (j = 0; j < 8; j++) {

						mul_op[j] = mul_op[j] ^ a0_bit[j];
					}
					//cout<<"lolo ";
				}


string mul_bin = "";

			for (i =0; i< 8; i++){

				mul_bin = mul_bin + to_string(mul_op[i]);
			}

string mul_hex = Bin2hex(mul_bin);

		cout<<add_hex<< " "<<mul_hex;
		/*for (i = 0; i < 8; i++) {

			cout<<a0_bit[i];
		}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a1_bit[i];
				}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a2_bit[i];
				}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a3_bit[i];
				}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a4_bit[i];
				}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a5_bit[i];
				}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a6_bit[i];
				}
		cout<<endl;
		for (i = 0; i < 8; i++) {

					cout<<a7_bit[i];
				}*/

}

