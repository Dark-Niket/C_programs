
    #include <stdio.h>
    
    #define MAX_ROWS 50
    #define MAX_COLS 50
    
    int main(void) {
        int matrix[MAX_ROWS][MAX_COLS];
        int rows, cols;
    
        // 1. Ask user for dimensions
        printf("Enter number of rows (max %d): ", MAX_ROWS);
        scanf("%d", &rows);
    
        printf("Enter number of columns (max %d): ", MAX_COLS);
        scanf("%d", &cols);
    
        // 2. Validate input size
        if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
            printf("Invalid dimensions!\n");
            return 1;
        }

        // 3. Take elements using nested loops
        printf("\nEnter %d elements:\n", rows * cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // 4. Print the 2D array as a table/grid
        printf("\nThe 2D array is:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d\t", matrix[i][j]); // '\t' adds a tab space
            }
            printf("\n"); // moves to the next line for each row
        }

        // 5. Find the transpose
        int c=1,d=1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // A[i][j] must equal A[j][i]
                if (matrix[i][j] != matrix[j][i]) {
                    c = 0;
                }
                // A[i][j] must equal -A[j][i] (also ensures diagonal elements A[i][i] == 0)
                if (matrix[i][j] != -matrix[j][i]) {
                    d = 0;
                }
            }
        }
    
        printf("\n");
        if (c==1 && d==1) {
            printf("It is both symmetric and skew-symmetric (zero matrix).\n");
        } else if (c==1) {
            printf("It is a symmetric matrix.\n");
        } else if (d==1) {
            printf("It is a skew-symmetric matrix.\n");
        } else {
            printf("It is neither symmetric nor skew-symmetric.\n");
        }
    
        return 0;
    }