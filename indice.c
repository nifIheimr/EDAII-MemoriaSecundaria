#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "indice.h"
#include "dispersion.h"


int generaIndice(char *ficheroDatos, char *ficheroIndice) {
	FILE *pDataFile;  //alumnos.dat
	FILE *pIndexFile;  //alumnos.idx

	tipoIndice idx;
	tipoAlumno a;

	int nReg = 0;

	if((pDataFile = fopen(ficheroDatos, "r")) == NULL) { return -2; }
	if((pIndexFile = fopen(ficheroIndice, "ab")) == NULL) { return -3; }

	while(fread(&a, sizeof(tipoAlumno), 1 , pDataFile)) {
		nReg++;

		strcpy(idx->dni, a.dni);
		idx->NRR = nReg;

		fwrite(idx, sizeof(tipoIndice), 1, pIndexFile) 
	}

	return nReg;
} 

int busquedaIndice(char *dni, char *fDatos, char *fIndice, tipoAlumno *alumno) {
	FILE *pDataFile;  //alumnos.dat
	FILE *pIndexFile;  //alumnos.idx

	tipoIndice idx;
	tipoAlumno a;

	int nReg = 0;

	if((pDataFile = fopen(ficheroDatos, "r")) == NULL) { return -2; }
	if((pIndexFile = fopen(ficheroIndice, "r")) == NULL) { return -3; }

	while(fread(&idx, sizeof(tipoIndice), 1 , pIndexFile)) {
	    if(!strcmp(dni, idx.dni)) { //Devuelve 0 si los strings son
	      return nReg;
	    }

	    nReg++;
  }

  return -1;
}