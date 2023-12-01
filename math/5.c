#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");

    if (gnuplotPipe == NULL) {
        fprintf(stderr, "Error opening Gnuplot.\n");
        return 1;
    }

    fprintf(gnuplotPipe, "set title 'Runner''s Position vs. Time'\n");
    fprintf(gnuplotPipe, "set xlabel 'Time (s)'\n");
    fprintf(gnuplotPipe, "set ylabel 'Position (yards)'\n");
    fprintf(gnuplotPipe, "plot [0:10] 20 + 4 * x with lines\n");
    fflush(gnuplotPipe);

    printf("Press Enter to exit...\n");
    getchar();

    pclose(gnuplotPipe);
    return 0;
}
