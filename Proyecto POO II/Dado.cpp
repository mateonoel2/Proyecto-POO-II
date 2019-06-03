#include "Dado.h"
#include<stdlib.h>
#include<time.h>

int lanzar(){
    srand(time(NULL))
    return 1 + rand()%5;
}   
