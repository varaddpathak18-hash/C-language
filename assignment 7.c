#include <stdio.h>

int main() {
    int n, i;
    int id[50];
    char type[50][20];
    float dist[50], thresh[50];
    int safe = 0, warning = 0, critical = 0;
    int min_index = 0;

    printf("Enter number of sensors: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nSensor %d:\n", i + 1);
        printf("Enter Sensor ID (number): ");
        scanf("%d", &id[i]);
        printf("Enter Sensor Type: ");
        scanf("%s", type[i]);
        printf("Enter Measured Distance (cm): ");
        scanf("%f", &dist[i]);
        printf("Enter Safety Threshold (cm): ");
        scanf("%f", &thresh[i]);
    }

    printf("\n--- Sensor Status ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Type: %s | Distance: %.1f cm | Threshold: %.1f cm | ",
               id[i], type[i], dist[i], thresh[i]);

        if (dist[i] <= thresh[i]) {
            printf("Risk: Critical\n");
            critical++;
        } else if (dist[i] <= thresh[i] + 30) {
            printf("Risk: Warning\n");
            warning++;
        } else {
            printf("Risk: Safe\n");
            safe++;
        }

        if (dist[i] < dist[min_index]) {
            min_index = i;
        }
    }

    printf("\n--- Category Count ---\n");
    printf("Safe: %d\n", safe);
    printf("Warning: %d\n", warning);
    printf("Critical: %d\n", critical);

    printf("\n--- Nearest Obstacle ---\n");
    printf("Sensor ID: %d | Type: %s | Distance: %.1f cm\n",
           id[min_index], type[min_index], dist[min_index]);

    return 0;
}
