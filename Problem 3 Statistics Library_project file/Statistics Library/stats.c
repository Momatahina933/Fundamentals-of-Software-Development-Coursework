#include <math.h>

//  calculate the mean of an array
double mean(const double arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

// calculate the median of an array
double median(double arr[], int n) {
    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

// calculate the kurtosis of an array
double kurtosis(double arr[], int n) {
    // kurtosis calculation
    // the formula for kurtosis here
    return 0;
}

// calculate the standard deviation of an array
double standardDeviation(double arr[], int n) {
    double meanValue = mean(arr, n);
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] - meanValue) * (arr[i] - meanValue);
    }
    return sqrt(sum / n);
}
