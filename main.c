#include <stdlib.h>
#include <stdio.h>
#include "scanner.h"
#include "parser.h"

int main(int argc, char *argv[]){
	FILE *fp;

	if(argc < 2) {
		printf("usage: ./calculator infile.txt");
		exit(1);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("Error: infile.txt does not exist.\n");
		exit(1);
	}



	parse(fp);

	exit(0);
}