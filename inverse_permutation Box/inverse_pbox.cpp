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



int main() {


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	long size_box;
	string str_box = "";
			        cin>>size_box;
			        cin.ignore();
			        getline(cin, str_box);




long pbox[size_box];
long invbox[size_box];
long ii;

		for (ii =0; ii< size_box-1; ii++){
				int found = str_box.find(" ");

				pbox[ii] = stoi(str_box.substr(0,found));

				str_box = str_box.erase(0,++found);
		}
		pbox[ii] = stoi(str_box);

//---------------------------
//check if reversable
//---------------------------
		int check, flag = 0;
		for (int i = 0; i < size_box; i++) {
			check = 0;
		    for (int j = 0; j < size_box; j++) {

		      if (pbox[j] == i + 1) {
		    	  	  check ++;
		      }
		    }
		    if (check != 1){
		    	flag = 1;
		    	break;
		    }
		  }

//---------------------------
//inverse the permutation box
//---------------------------
		for (int i = 0; i < size_box; i++) {

		    // Loop to print position of element
		    // where we find an element
		    for (int j = 0; j < size_box; j++) {

		      // checking the element in increasing order
		      if (pbox[j] == i + 1) {

		        // print position of element where
		        // element is in inverse permutation
		    	  invbox[i] = j+1;
		        break;
		      }
		    }
		  }

		if (flag == 0){
			for (ii =0; ii< size_box; ii++){

				cout<<invbox[ii]<<" ";
			}
		}
		else if (flag == 1){
			cout<<"IMPOSSIBLE";
		}

		return 0;
}
