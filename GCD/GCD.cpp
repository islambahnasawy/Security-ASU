/*
 * GCD.cpp
 *
 *  Created on: Jan 24, 2019
 *      Author: Islam El-Bahnasawy
 */


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <cstdlib>
#include <algorithm>


using namespace std;


int main() {


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int i;
	long long input[2];
	for(i = 0; i < 2; i++) {
					cin>>input[i];
				}

long long a = input[0];
long long b = input[1];
//long long max, min;

		if (a<0){
			a = -a;
		}

		if (b<0){
			b = -b;
		}

//		if (a>b){
//			max = a;
//			min = b;
//		}
//		else {
//			max = b;
//			min = a;
//		}

		//long long gcd;

		if(a == 0){
			cout<< b;
		}

		else if(b == 0){
			cout<< a;
		}

		else{
		long long temp = 1;

		while (temp != 0){

			temp = a%b;
			a = b;
			b = temp;
		}

		cout<<a;
		}

		 //cout<< __gcd(a, b);
}
