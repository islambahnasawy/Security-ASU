/*
 * vigenere.c
 *
 *  Created on: Dec 18, 2018
 *      Author: Islam El-Bahnasawy
 */


#include <stdio.h>
#include<string.h>



int main() {


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i,j;
	char KEY[10000];
	char p_text[10000];

	gets(KEY);
	gets(p_text);

	int klen = strlen(KEY);
	int plen = strlen(p_text);

	//generating new key
	char newKey[plen];
	for(i = 0, j = 0; i < plen; ++i, ++j){
	        if(j == klen)
	            j = 0;
	        newKey[i] = KEY[j];
	    }

	    newKey[i] = '\0';

	    // encryption vigenere
	    char vig[plen];
	    for(i = 0; i < plen; ++i){
	    	if (p_text[i] >= 'A' && p_text[i] <= 'Z'){
	    		vig[i] = ((p_text[i] + newKey[i]) % 26) + 65;
	    	}
	    }
	    	vig[i] = '\0';
	    	printf("Vigenere: ");
	    	puts(vig);


	    	// encryption vernam
	   // char ver[plen];
	    	char temp;
	    	printf("Vernam: ");
	    for(i = 0; i < plen; ++i){
	    	if (p_text[i] >= 'A' && p_text[i] <= 'Z'){
	    		temp = p_text[i] ^ newKey[i];
	    		if (temp < 16 ){
	    			printf("0");
	    		}

	    	printf("%X",temp);
	    	}
	    }
			//ver[i] = '\0';
			//puts(ver);


		if (klen == plen){
			printf("\nOne-Time Pad: YES");
		}
		else
			printf("\nOne-Time Pad: NO");


return 0;
}
