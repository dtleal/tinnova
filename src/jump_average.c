/********************************************************************
# Description: Calcula a media dos saltos de um atleta
#
# Author: Diego
# Created at: Sáb  2 Set 2023 14:38:37 -03
# Project: Tinnova
#
#********************************************************************/

#include <stdio.h>
#include <string.h>

#include "jump_average.h"

/* Get jumps */
void input_jumps(float jumps[], int num_jumps) {
    for (int i = 0; i < num_jumps; i++) {
        printf("Enter the distance for jump %d: ", i + 1);
        scanf("%f", &jumps[i]);
    }
}

/* Calculate average */
float calculate_average(float jumps[], int num_jumps) {
    float best_jump = jumps[0];
    float worst_jump = jumps[0];
    float average = 0;

    /* Find best and worst jumps */
    for (int i = 0; i < num_jumps; i++) {
        if (jumps[i] > best_jump)
            best_jump = jumps[i];
        if (jumps[i] < worst_jump)
            worst_jump = jumps[i];
    }

    /* Calculate average */
    for (int i = 0; i < num_jumps; i++) {
        if (jumps[i] != best_jump && jumps[i] != worst_jump)
            average += jumps[i];
    }

    return average / 3;
}

/* Main function */
int main(int argc, char **argv) {
    char athlete_name[100];
    float jumps[5];

    printf("Initing %s build: %d revision: %d", APP_NAME, BUILD, REVISION);

    while (1) {
        printf("\n\nAthlete (type exit to finish): ");
        scanf("%s", athlete_name);

        /* Quit program */
        if (strcmp(athlete_name, "exit") == 0) {
            break;
        }

        /* Get jumps */
        input_jumps(jumps, 5);

        /* Calculate average */
        float average = calculate_average(jumps, 5);
        printf("Final result for %s: %.2f meters\n", athlete_name, average);
    }

    return 0;
}
