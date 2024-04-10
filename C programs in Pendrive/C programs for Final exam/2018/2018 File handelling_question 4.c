#include <stdio.h>
int main( void )
{
    FILE *fptr;
    fptr = fopen( "attendance.dat", "w" );
    
    if( fptr == NULL )
    {
        printf( "The file annot be opened" );
        return -1;        
    }  

    char number[ 10 ];
    char name[ 10 ];
    char num[ 10 ];
    int status[ 7 ] = { 0 }, i, j, count[ 2 ] = { 0 };

    for( i = 0; i < 2; i++ )
    { 
        printf( "Enter employee number : " );
        scanf( "%s", number );
        
        printf( "Enter employee name : " );
        scanf( "%s", name );
        
        for( j = 0; j < 7; j++ )
        {
            printf( "Enter employee status for day %d : ", j + 1 );
            scanf( "%d", &status[ i ] );
        }
        
        fprintf( fptr, "%s    %s    %d %d %d %d %d %d %d\n", number, name, &status[ 0 ], &status[ 1 ], &status[ 2 ], &status[ 3 ], &status[ 4 ], &status[ 5 ], &status[ 6 ] );
    }
    fclose( ( fptr ) );
    
    
    

    fptr = fopen( "attendance.dat", "r" );
    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return -1;
    }

    printf( "Enter the employee number : " );
    scanf( "%s", num );

    for( i = 0; i < 2; i++ )
    { 
        fscanf( fptr, "%s ", name );

        if( num == number )
        {
            for( j = 0; j < 7; j++ )
            {
                fscanf( fptr, "%d", &status[ j ] );
                if( status[ j ] == 1 )
                { 
                    count[ i ] +=1;
                }
            }
            printf( "Number of days attended : %d\n", count[ i ] );
        }
    }
    fclose( ( fptr ) );
    return 0;
}
