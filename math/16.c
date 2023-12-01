#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    // Define the piecewise linear function
    fprintf(gnuplotPipe, "set xrange [0:10]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [0:100]\n"); // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 1\n"); // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 10\n"); // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");

    // Segment 1: Slope = 0 on the interval [0, 2]
    for (double x = 0; x <= 2; x += 0.1) {
        double y = 0 * x + 100;
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }

    // Segment 2: Slope = -8 on the interval [2, 4]
    for (double x = 2; x <= 4; x += 0.1) {
        double y = -8 * (x - 2) + 100; // Adjusted for continuity at x = 2
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }

    // Segment 3: Slope = -12 on the interval [4, 6]
    for (double x = 4; x <= 6; x += 0.1) {
        double y = -12 * (x - 4) + 84; // Adjusted for continuity at x = 4
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }

    // Segment 4: Slope = 5 on the interval [6, 8]
    for (double x = 6; x <= 8; x += 0.1) {
        double y = 5 * (x - 6) + 48; // Adjusted for continuity at x = 6
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }

    // Segment 5: Slope = -13 on the interval [8, 10]
    for (double x = 8; x <= 10; x += 0.1) {
        double y = -13 * (x - 8) + 22; // Adjusted for continuity at x = 8
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }

    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
