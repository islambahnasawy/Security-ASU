/*
 * hill.cpp
 *
 *  Created on: Dec 19, 2018
 *      Author: Islam El-Bahnasawy
 */


#include<iostream>
#include<stdio.h>
#include <string>
#include <cstdlib>
#include<math.h>

using namespace std;


int main() {

	unsigned long i, j, k;
		    string msg;
		    unsigned long long k_len, matrix_size, m_len;

		    //cout<<"\nEnter key length: ";
		        cin>>k_len;
		        matrix_size=pow(k_len,0.5);

		        unsigned long long encrypt[matrix_size][1], key[matrix_size][matrix_size];
		//string enc_msg;
			//cout<<"Enter your key matrix : ";

		/*if (k_len == 9){
		    for(i = 0; i < matrix_size; i++)
		        for(j = 0; j < matrix_size; j++) {
		            cin>>key[i][j];
		        }
		}
		else if (k_len == 4){
		    for(i = 0; i < matrix_size; i++)
		        for(j = 0; j < matrix_size; j++) {
		            cin>>key[i][j];
		        }
		}*/

		        for(i = 0; i < matrix_size; i++)
		        		        for(j = 0; j < matrix_size; j++) {
		        		            cin>>key[i][j];
		        		        }
		    //cout<<"\nEnter your letter string: ";
		//getline(cin,msg);
		cin>>msg;


			m_len = msg.size();

			while (m_len % matrix_size){
				msg = msg + "X";
				m_len = msg.size();
			}

			//cout<<msg;
			unsigned long long mes[(msg.size()/matrix_size)][matrix_size];

			unsigned long long m=0;
		   for(i=0; i<(msg.size()/matrix_size);i++){
			   for(j=0; j<matrix_size;j++){
		    	mes[i][j] = msg[m] - 65;
		    	m++;
			   }
		    }


		   for(i = 0; i < (msg.size()/matrix_size); i++){
		   	      for(j = 0; j < matrix_size; j++){
		   	    	encrypt[i][j] = 0;
		   	          for(k=0; k < matrix_size; k++){
		   	        	//cout<<"key: "<<key[j][k]<<" ";cout<<"mes: "<<mes[i][k]<<" ";
		   	               encrypt[i][j] = encrypt[i][j] + key[j][k] * mes[i][k];
		   	          }
		   	       encrypt[i][j] = encrypt[i][j] % 26;
		   	    cout<<(char)(encrypt[i][j]+65);
		   	      }
		   }




	/*
		   cout<<endl<<"key: ";
		   	   for(i = 0; i < matrix_size; i++)
		   	  	    	        for(j = 0; j < matrix_size; j++) {
		   	  	    	            cout<<key[i][j]<<" ";
		   	  	    	        }

		   	  	    cout<<endl<<"message size: "<<msg.size()<<endl;
		   	  	    cout<<"Entered msg: "<<endl;
		   	  	    //for(unsigned i=0; i<msg.size();i++){
		   	  	    	//    	cout<<mes[i][0]<<" ";
		   	  	    	  //  }
		   		   for(i=0; i<(msg.size()/matrix_size);i++){
		   			   for(j=0; j<matrix_size;j++){
		   				cout<<mes[i][j]<<" ";
	//3 10 20 20 9 17 9 4 17
	 * ATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACKATTACK
		   			   }
		   		    }
		   	  	    cout<<endl;
		   	  	    cout<<"ASCII of encrypted msg: "<<endl;
		   	  	    for(i = 0; i < matrix_size; i++)
		   	  	   	   	    for(j = 0; j < 1; j++) {
		   	  	   	   	    	//encrypt[i][j] = encrypt[i][j] % 26;
		   	  	   	   	    	cout<<encrypt[i][j]<<endl;
		   	  	   	   	    }
		   	  	    cout<<"Letters of encrypted msg: "<<endl;
		   	  	    for(i = 0; i < matrix_size; i++)
		   	  	    	   	   	    for(j = 0; j < 1; j++) {
		   	  	    	   	   	    	encrypt[i][j] = encrypt[i][j] + 65;

		   	  	    	   	   	    	cout<<(char)encrypt[i][j]<<endl;
		   	  	    	   	   	    }
	*/





	}

		/*int ke = 4;
	int i,j,k,x;

	long long msg[3][2] = {{'S','H'}, {'O','R'}, {'T','X'}};
	long long key[2][2] = {{7,8},{11,11}};
	string encrypt;

			for(i = 0, x=0; i < 3; i++){
		   	      for(j = 0; j < 2; j++){
		   	    	  int mo = 0;
		   	          for(k=0; k < 2; k++){
		   	              mo = mo + key[i][k] * (msg[j][k]-65);

		   	          }
		   	       encrypt[x] = mo %26;
		   	    cout<<">>>>>>"<<encrypt<<endl;
		   	    x++;
		   	      }
		   }



	}*/
