#include <gtest/gtest.h>
#include "dw.h"

TEST(SumMatrixRows, SumsThreeByFourMatrix) {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int row_sums[3] = {0};
    sum_matrix_rows(matrix, 3, row_sums);
    EXPECT_EQ(row_sums[0], 10);
    EXPECT_EQ(row_sums[1], 26);
    EXPECT_EQ(row_sums[2], 42);
}

TEST(SumMatrixRows, HandlesSingleRow) {
    int matrix[1][4] = {{0, 0, 0, 0}};
    int row_sums[1] = {-1};
    sum_matrix_rows(matrix, 1, row_sums);
    EXPECT_EQ(row_sums[0], 0);
}
