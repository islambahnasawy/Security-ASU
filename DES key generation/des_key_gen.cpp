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

	int PC1[56] {57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36, 63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4};
	int PC2[48] {14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10, 23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2, 41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32};
	int Rotations[16] {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

		string k_in = "";
        getline(cin, k_in);

        string bin_k = Hex2bin (k_in);
        int k_64[64];


				for (long i= 0; i<64; i++){
					k_64[i] = (int) bin_k[i] - 48;
				}

//-------------------
//PC1 box
//-------------------

        int pc1_56[56];
        long x;

        		for (long i =0; i< 56; i++){
        			x = PC1[i] - 1;

        			pc1_56[i] = k_64[x];
        		}

        int Ci[28];

        for (long i =0; i< 28; i++){

        	Ci[i] = pc1_56[i];
        }
        int Di[28];

        for (long i =0, j =28 ; i< 28; i++){
        	Di[i] = pc1_56[j];
        	j++;
        }

        int shifted_C[28];
        int shifted_D[28];
        int n;

        for(int iii = 0; iii<16;iii++){

        		n = Rotations[iii];
				for (long i =0; i< 28-n; i++){

					shifted_C[i] = Ci[i+n];
				}
				for (long i= 28-n, j= 0; i< 28; i++){

							shifted_C[i] = Ci[j];
							j++;
						}


				for (long i =0; i< 28-n; i++){

							shifted_D[i] = Di[i+n];
						}
				for (long i= 28-n, j= 0; i< 28; i++){

							shifted_D[i] = Di[j];
							j++;
						}

				for (long i =0; i< 28; i++){

					Ci[i]=	shifted_C[i];
			        Di[i]=	shifted_D[i];
				        }

				int shifted[56];

				for (long i =0; i< 28; i++){

					shifted[i] = shifted_C[i];
				}
				for (long i =28, j= 0; i< 56; i++){

					 shifted[i] = shifted_D[j];
					 j++;
				}

				int pc2_48[48];

                		for (long i =0; i< 48; i++){
                			x = PC2[i] - 1;

                			pc2_48[i] = shifted[x];
                		}

                		string encrypted_bin = "";
                		string encrypted_hex = "";

                		for (long i= 0; i<48; i++){

                			encrypted_bin = encrypted_bin + to_string(pc2_48[i]);
                					 }
                		encrypted_hex = Bin2hex(encrypted_bin);

                		cout<<encrypted_hex<<endl;
        }


return 0;
	}
