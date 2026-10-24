#include "dw.h"

void sum_matrix_rows(const int matrix[][], int rows, int row_sums[]) {
    for (int r = 0; r < rows; r++) {
        int total = 0
        for (int c = 0; c < matrix_cols; c++) {
            total += matrix[r][c];
        }
        row_sums[r] = total;

}
