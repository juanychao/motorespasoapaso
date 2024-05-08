#include "pasoapaso.h"
#include "MKL25Z4.h"
int pines [4] = {0, 1, 2, 3};
int secuencianormal [4] [4] = {{1, 0, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 0},
                               {0, 0, 1, 1}
};

int pasocompleto [4] [4] = {{0, 0, 0, 1},
                            {1, 0, 0, 0},
                            {0, 1, 0, 0},
                            {0, 0, 1, 0}
};

int mediopaso [4] [8] = {{0, 0, 0, 1},
                         {1, 0, 0, 1},
                         {1, 0, 0, 0},
                         {1, 1, 0, 0},
                         {0, 1, 0, 0},
                         {0, 1, 1, 0},
                         {0, 0, 1, 0},
                         {0, 0, 1, 1}
};
void  secuencianormal (int pasos){
for(int i=0; i<pasos; i++)^{
    int retro = i%4;
    for(int j=0; j<4; j++){
        PTA-> PSOR|=(secuencianormal [j][resto]<<pines[j]);
    }
  }
}
void pasocompleto (int pasos){
for(int i=0; i<pasos; i++)^{
    int retro = i%4;
    for(int j=0; j<4; j++){
        PTA-> PSOR|=(pasocompleto [j][resto]<<pines[j]);
    }
  }
}
void Mediopaso (int pasos){
for(int i=0; i<pasos; i++)^{
    int retro = i%4;
    for(int j=0; j<4; j++){
        PTA-> PSOR|=(mediopaso [j][resto]<<pines[j]);
    }
  }
}    
