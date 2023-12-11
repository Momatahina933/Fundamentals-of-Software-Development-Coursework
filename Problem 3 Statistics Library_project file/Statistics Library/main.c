#include <stdio.h>
#include "stats.h"

int main() {
    double customerBasket[] = {22.3, 10.5, 60.5, 20.5, 22.5};
    int n = sizeof(customerBasket) / sizeof(customerBasket[0]);

    double meanValue = mean(customerBasket, n);
    double medianValue = median(customerBasket, n);
    double kurtosisValue = kurtosis(customerBasket, n);
    double stdDeviationValue = standardDeviation(customerBasket, n);

    printf("Mean: %.2f\n", meanValue);
    printf("Median: %.2f\n", medianValue);
    printf("Kurtosis: %.2f\n", kurtosisValue);
    printf("Standard Deviation: %.2f\n", stdDeviationValue);

    return 0;
}
