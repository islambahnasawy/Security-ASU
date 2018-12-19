/*
 * caesarcipher.c
 *
 *  Created on: Dec 18, 2018
 *      Author: Islam El-Bahnasawy
 */


#include <stdio.h>


void caesar (char p[], unsigned long long k){
	int i=0;
	int key = k % 26;
	while(p[i] != '\0'){
		if (p[i] >= 'A' && p[i] <= 'Z'){
		p[i] = (int)p[i] + key;
			if ((int)p[i] > 90){
				p[i] = ((int)p[i] - 90) + 64;
			}
		i++;
		}
	}
	puts(p);
	}


int main() {


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned long long ke;
	char x[1000000];
	scanf("%I64d\n", &ke);
	gets(x);

	//char x[] = {"HELLOWORLDZ"};

	caesar (x,ke);

return 0;
}
