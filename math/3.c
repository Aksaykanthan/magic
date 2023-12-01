#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");

    if (gnuplotPipe == NULL) {
        fprintf(stderr, "Error opening Gnuplot.\n");
        return 1;
    }

    fprintf(gnuplotPipe, "set title 'Runner''s Position vs. Time'\n");
    fprintf(gnuplotPipe, "set xlabel 'Time (t)'\n");
    fprintf(gnuplotPipe, "set ylabel 'Position'\n");
    fprintf(gnuplotPipe, "plot [0:20] -3 * x + 60 with lines\n");
    fflush(gnuplotPipe);

    printf("Press Enter to exit...\n");
    getchar();

    pclose(gnuplotPipe);
    return 0;
}

