#include <stdio.h>

void GetMatrix( int **value, int *row, int *col ) {
    printf( "How many row, col ? " ) ;
    scanf( "%d %d", row, col ) ;
    *value = new int[ *row * *col ] ;

    for (int i = 0 ; i < *row ; i++ ) {

        for (int j = 0; j < *col ; j++) {
            //printf( "value[%d][%d] = ", i, j ) ;
            scanf("%d", &(*value)[ i * *col + j ]) ;
        }
        
    }
    
}
void PrintMatrix( int **value, int row, int col ) {
    printf( "Matrix (2x3): \n" ) ;
    for (int i = 0 ; i < row ; i++ ) {

        for ( int j = 0; j < col ; j++ ) {
            printf("%d ", (*value)[ i * col + j ]) ;
        }
        printf( "\n" );
        
    }
}

int main() {
    int *data, m = 3, n = 3 ;
    data = new int[ m * n ] ;
    GetMatrix( &data, &m, &n ) ;
    PrintMatrix( &data, m, n ) ;
    return 0 ;
}//end function
