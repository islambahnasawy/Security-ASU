/*
 * PerBox.cpp
 *
 *  Created on: Dec 24, 2018
 *      Author: Islam El-Bahnasawy
 */



#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <cstdlib>


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
string Bin2dec(string sBinary)
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
			rest = rest + "10";
		}
		else if (!tmp.compare("1011"))
		{
			rest = rest + "11";
		}
		else if (!tmp.compare("1100"))
		{
			rest = rest + "12";
		}
		else if (!tmp.compare("1101"))
		{
			rest = rest + "13";
		}
		else if (!tmp.compare("1110"))
		{
			rest = rest + "14";
		}
		else if (!tmp.compare("1111"))
		{
			rest = rest + "15";
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

	int s1[4][16]=
	    {
	        14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
	        0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,
	        4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,
	        15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13
	    };

	    int s2[4][16]=
	    {
	        15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,
	        3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,
	        0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,
	        13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9
	    };

	    int s3[4][16]=
	    {
	        10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,
	        13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,
	        13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,
	        1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12
	    };

	    int s4[4][16]=
	    {
	        7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,
	        13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,
	        10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,
	        3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14
	    };

	    int s5[4][16]=
	    {
	        2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,
	        14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,
	        4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,
	        11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3
	    };

	    int s6[4][16]=
	    {
	        12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,
	        10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,
	        9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,
	        4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13
	    };

	    int s7[4][16]=
	    {
	        4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,
	        13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,
	        1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,
	        6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12
	    };

	    int s8[4][16]=
	    {
	        13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,
	        1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,
	        7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,
	        2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11
	    };

	string str_box = "";

        getline(cin, str_box);

        string bin_msg = Hex2bin (str_box);


//cout<<bin_msg<<endl;

int pbox[48];
int ii;

		for (ii =0; ii< 48; ii++){

				pbox[ii] = (int) bin_msg[ii] - 48;
		}

string s_row, s_col= "";
string encrypted = "";
		for (ii =0; ii< 48; ii+=6){
			s_row = "00";
			s_row = s_row + to_string(pbox[ii]) + to_string(pbox[ii+5]);
			s_col = to_string(pbox[ii+1]) + to_string(pbox[ii+2]) + to_string(pbox[ii+3]) + to_string(pbox[ii+4]);
			string temp1 = Bin2dec(s_row);
			int row = stoi(temp1);
			string temp2 = Bin2dec(s_col);
			int col = stoi(temp2);

			if (ii == 0){
				string ss = to_string(s1[row][col]);
				if(ss == "10"){
					ss = "A";
				}
				if(ss == "11"){
					ss = "B";
				}

				if(ss == "12"){
					ss = "C";
				}
				if(ss == "13"){
					ss = "D";
				}
				if(ss == "14"){
					ss = "E";
				}
				if(ss == "15"){
					ss = "F";
				}
				encrypted = encrypted + ss;
			}
			if (ii == 6){
							string ss = to_string(s2[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}
			if (ii == 12){
							string ss = to_string(s3[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}
			if (ii == 18){
							string ss = to_string(s4[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}

			if (ii == 24){
							string ss = to_string(s5[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}
			if (ii == 30){
							string ss = to_string(s6[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}
			if (ii == 36){
							string ss = to_string(s7[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}
			if (ii == 42){
							string ss = to_string(s8[row][col]);
							if(ss == "10"){
								ss = "A";
							}
							if(ss == "11"){
								ss = "B";
							}

							if(ss == "12"){
								ss = "C";
							}
							if(ss == "13"){
								ss = "D";
							}
							if(ss == "14"){
								ss = "E";
							}
							if(ss == "15"){
								ss = "F";
							}
							encrypted = encrypted + ss;
						}



			//cout<<s_row<<" -- "<<s_col<<endl;
		}

cout<<encrypted;

return 0;
	}
