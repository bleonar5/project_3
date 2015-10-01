#include <stdio.h>
#include <stdlib.h>

typedef enum {
	PLUS
	MINUS
	MULT
	DIV
	MOD
	U_PLUS
	U_MIN
	PAREN
	INTEGER
	DOUBLE
} token_class;

typedef struct {
	int iV;
	double dV;
	token_class tc;
} token;