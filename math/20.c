#include <stdio.h>
#include <stdlib.h>

int main() {
    double initial_height = 500.0;
    double g = 9.81; // Acceleration due to gravity (m/s^2)
    double time_step = 0.1; // Step size in seconds
    double current_height = initial_height;
    double time = 0.0;

    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    fprintf(gnuplotPipe, "set xrange [0:10]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [0:550]\n"); // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 1\n"); // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 50\n"); // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");

    while (time <= 10.0) {
        fprintf(gnuplotPipe, "%lf %lf\n", time, current_height);
        current_height -= 0.5 * g * time_step * time_step; // Update the height
        time += time_step; // Increment time
    }

    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
