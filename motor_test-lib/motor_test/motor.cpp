#include "motor.h"
int MLP = 10
int MLN = 9
int MRP = 8
int MRN = 7
int sensor_value[8];
int sensor_value_Digital[8];
void motor(int L,int R) {
if(L>0){
    analogWrite(MLP,L)
    analogWrite(MLN,0)
}
if(L<0){
    analogWrite(MLP,0)
    analogWrite(MLN,L*(-1))
}
if(R>0){
    analogWrite(MRP,L)
    analogWrite(MRN,0)
}
if(R<0){
    analogWrite(MRP,0)
    analogWrite(MRN,L*(-1))
}
}
