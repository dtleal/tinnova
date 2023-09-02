#ifndef _CALC_LAMPS_H
#define _CALC_LAMPS_H  1

#include "module_version.h"

#define APP_NAME    "calc-room-lamps"

float calculate_required_lamps(int type, float area);

/* Structure to represent room data */
struct room_st {
    int type;
    float width;
    float length;
};

#endif