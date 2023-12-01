#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    double slope = 5.0;
    double intercept = 20.0;

    // Calculate the linear function and plot it
    fprintf(gnuplotPipe, "set xrange [-10:10]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [0:50]\n");   // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 5\n");         // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 5\n");         // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");

    for (double x = -10; x <= 10; x += 0.1) {
        double y = slope * x + intercept;
        fprintf(gnuplotPipe, "%lf %lf\n", x, y);
    }

    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
