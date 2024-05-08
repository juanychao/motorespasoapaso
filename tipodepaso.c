#include "TIPOPASO.h"
#include "MKL25Z4.h"
#include "ctype.h"
int pines[4] = {0,1,2,3};
int vectornormal[4][4] = { 
                            {0,0,0,1},
                            {0,0,1,0},
                            {0,1,0,0},
                            {1,0,0,0},
                };
int vectorcompleto[4][4] ={ 
                            {0,0,1,1},
                            {0,1,1,0},
                            {1,1,0,0},
                            {1,0,0,1},
                };
int vectormedio [4][8] =  { 
                    {0,0,0,1},
                    {0,0,1,1},
                    {0,0,1,0},
                    {0,1,1,0},
                    {0,1,0,0},
                    {1,1,0,0},
                    {1,0,0,0},
                    {1,0,0,1},
                };
void tipopaso(char tipo, int pasos){
    char tipo = toupper(tipo);
    if(tipo == 'C'){
        for(int i = 0; i < pasos; i++){
        int resto = i % 4;
        for(int j = 0; j < 4; j++ ){
            PTE -> PSOR|=(vectorcompleto [j][resto] << pines[j]); 
            }
        } 
    } else if (tipo == 'N'){
        for(int i = 0; i < pasos; i++){
        int resto = i % 4;
        for(int j = 0; j < 4; j++ ){
            PTE -> PSOR|=(vectornormal [j][resto] << pines[j]); 
            }
        }
    } else if (tipo == 'M'){
        for(int i = 0; i < pasos; i++){
        int resto = i % 8;
        for(int j = 0; j < 4; j++ ){
            PTE -> PSOR|=(vectormedio [j][resto] << pines[j]); 
            }
        }
    } 
}
