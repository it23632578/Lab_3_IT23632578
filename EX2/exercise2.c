#include <stdio.h>

int main(void) {
    double speed_kmh, speed_ms, distance;
    double acceleration, time;

    printf("Enter takeoff speed (km/hr): ");
    scanf("%lf", &speed_kmh);

    printf("Enter catapult distance (meters): ");
    scanf("%lf", &distance);

    speed_ms = speed_kmh / 3.6;

    acceleration = (speed_ms * speed_ms) / (2.0 * distance);
    time = speed_ms / acceleration;

    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to takeoff: %.2f seconds\n", time);

    return 0;
}
