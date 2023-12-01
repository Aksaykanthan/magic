#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    double slope = 3.0;
    double intercept = 35.0; // Adjusted to pass through (5, 50)

    // Calculate the linear function and plot it
    fprintf(gnuplotPipe, "set xrange [0:10]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [0:100]\n"); // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 10\n"); // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 10\n"); // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");
    
    for (double x = 0; x <= 10; x += 0.1) {
        double y = slope * x + intercept;
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }
    
    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
