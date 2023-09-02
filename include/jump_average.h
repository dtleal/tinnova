#ifndef _JUMP_AVERAGE_H
#define _JUMP_AVERAGE_H  1

#include "module_version.h"

#define APP_NAME    "calc-jump-average"

void input_jumps(float jumps[], int num_jumps);
float calculate_average(float jumps[], int num_jumps);

#endif