#include "Vector10.h"

Vector10::Vector10(){
    for(int ii=0; ii<10; ii++){
        arr[ii] = 0;
    }
}

Vector10::~Vector10(){
}

int Vector10::ValueAt(int index){
    return arr[index];
}