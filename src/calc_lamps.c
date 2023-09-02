/********************************************************************
# Description: Calcula a quantidade de lampadas necessarias por comodo
#
# Author: Diego
# Created at: Sáb  2 Set 2023 00:54:10 -03
# Project: Tinnova
#
#********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "calc_lamps.h"

#define LAMP_WAT 60.0

/* Calculate room's area */
#define CALCULATE_AREA(width, length) ((width) * (length))

/* Function to calculate the number of lamps required */
float calculate_required_lamps(int type, float area) {
    float watts_room_required = 0.0F;
    float watts_per_m2[] = {12, 15, 18, 20, 22};
    
    if (type >= 0 && type <= 4) {
        watts_room_required = watts_per_m2[type] * area;
        return ceil(watts_room_required / LAMP_WAT);
    }

    return 0;
}

/* Main function */
int main(int argc, char **argv) {
    struct room_st room;
    
    printf("Initing %s build: %d revision: %d", APP_NAME, BUILD, REVISION);

    while (1) {
        printf("\n\nEnter the room type (-1 to exit): ");
        scanf("%d", &room.type);
        
        /*TODO: implementar tratamento para teclas especiais, como CTRL+C */

        if (room.type == -1) {
            break;
        }
        
        printf("Enter the room width (meters): ");
        scanf("%f", &room.width);
        
        printf("Enter the room length (meters): ");
        scanf("%f", &room.length);
        
        float area = CALCULATE_AREA(room.width, room.length);

        if (area <= 0){
            printf("Area cannot be 0\n");
            continue;
        }

        float lamps = calculate_required_lamps(room.type, area);
        
        if (lamps > 0) {
            printf("Number of lamps required: %.0f\n", lamps);
        } else {
            printf("Error to calculate required lamps. Please, try again\n");
        }
    }
}
