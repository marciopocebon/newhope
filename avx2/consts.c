#include <stdint.h>
#include "params.h"

uint8_t mask1[32] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
uint32_t vrshiftsx8[8] = {24,25,26,27,28,29,30,31};
uint16_t mask255[16] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
uint16_t q16x[16] = {PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q};

double q8[4] = {PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q};
uint32_t q8x[8] = {PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q, PARAM_Q};
uint32_t v1x8[8] = {1,1,1,1,1,1,1,1};
uint32_t v3x8[8] = {3,3,3,3,3,3,3,3};
uint32_t v2730x8[8] = {2730,2730,2730,2730,2730,2730,2730,2730};


double qinv16[4] = {.00008137358613394092,.00008137358613394092,.00008137358613394092,.00008137358613394092};
double neg2[4] = {1.,-1.,1.,-1.};
double neg4[4] = {1.,1.,-1.,-1.};

