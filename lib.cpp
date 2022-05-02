#include "lib.h"

float max(float num[], int dim){
    float x=0;
    for(int i=0; i<dim; i++){
        if(x<num[i]){
            x=num[i];
        }
    }
    return x;
}
