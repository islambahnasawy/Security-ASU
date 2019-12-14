/*
 * ExtendedEuclid.cpp
 *
 *  Created on: Jan 28, 2019
 *      Author: Islam El-Bahnasawy
 */



#include<iostream>
#include<stdio.h>
#include"math.h"
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;
typedef long long ll;


int main() {


	int i;
	ll input[2];
	for (i = 0; i < 2; i++) {
		cin >> input[i];
	}
ll M = input[0];
ll N = input[1];


		/*if (M == 0){
		cout<< "IMPOSSIBLE";
		return 0;
		}*/


		while (N<0){
			N = N+M;
		}
		/*if(M != 0 && M!=1){
		N = N%M;
		}*/

ll A1 = 1;
ll A2 = 0;
ll A3 = M;
ll B1 = 0;
ll B2 = 1;
ll B3 = N;
ll Q;
ll T1, T2, T3;
ll add_inverse = 0;

//cout<<M<<" Mflag"<<endl;
//cout<<N<<" Nflag"<<endl;
//cout<<B3<<" B3flag"<<endl;



	while (B3 > 1) {
			Q = (A3/B3);
			/*T1 = A1 - (Q*B1);
			T2 = A2 - (Q*B2);
			T3 = A3 - (Q*B3);

			A1 = B1;
			A2 = B2;
			A3 = B3;
			//cout<<B3<<" flag";
			B1 = T1;
			B2 = T2;
			B3 = T3;
			//cout<<Q<<" "<<A1<<" "<<A2<<" "<<A3<<" "<<B1<<" "<<B2<<" "<<B3<<" "<<endl;*/


		T1 = B1;
		T2 = B2;
		T3 = B3;

		B1 = A1 - (Q*T1);
		B2 = A2 - (Q*T2);
		B3 = A3 - (Q*T3);
		A1 = T1;
		A2 = T2;
		A3 = T3;
		//cout<<B3<<" flag";

		}


	if(__gcd(M,N) != 1){
		cout<< "IMPOSSIBLE";

	}
	else{
		if (B3 == 1){
			while (B2<0){
				B2 = B2+M;
			}
			B2 = B2%M;
			if (B2 == 0){
				add_inverse = 0;
			}
			else{
			add_inverse = (M - B2) % M;
			}
			cout<< add_inverse<<" ";
			cout<< B2;
		}
		else{
				cout<< "IMPOSSIBLE";
		}
	}
}
