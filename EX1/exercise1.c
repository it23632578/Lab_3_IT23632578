#include <stdio.h>

int main(void) {
    const double GRAVITY = 9.80;
    const double EFFICIENCY = 0.90;
    const double WATER_DENSITY = 1000.0;

    double height, flow, power;

    printf("Enter dam height (m): ");
    scanf("%lf", &height);

    printf("Enter water flow rate (m^3/s): ");
    scanf("%lf", &flow);

    power = EFFICIENCY * WATER_DENSITY
            * flow * GRAVITY * height / 1000000.0;

    printf("Predicted power generated: %.2f megawatts\n", power);

    return 0;
}
