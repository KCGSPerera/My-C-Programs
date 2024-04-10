#include <stdio.h>
int main( void )
{
    FILE *fptr;
  
    int mark1, mark2, mark3, mark4, mark5, i, count = 0, maxCount = 0;
    char name[ 20 ];
    char high[ 20 ];

    fptr = fopen( "marks.txt", "w" );
    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return -1; 
    }

    for( i = 0; i < 5; i++ )
    {
        printf( "Enter name : " );
        scanf( "%s", name );

        printf( "Enter marks for 5 subjects : " );
        scanf( "%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5 );
        
        fprintf( fptr, "%s    %d    %d    %d    %d    %d\n", name, mark1, mark2, mark3, mark4, mark5 );
    }
    fclose( fptr );

    fptr = fopen( "marks.txt", "r" );
    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return -1;
    }

    printf( "Name    Number of passed subjects\n" );
    fscanf( fptr, "%s    %d    %d    %d    %d    %d\n", name, &mark1, &mark2, &mark3, &mark4, &mark5 );
    while( !feof( fptr ) )
    {
        if( mark1 >= 45 )
            count++;  
        if( mark2 >= 45 )
            count++; 
        if( mark3 >= 45 )
            count++;
        if( mark4 >= 45 )
            count++;
        if( mark5 >= 45 )
            count++; 

        printf( "%s    %d\n", name, count );
		if( count >= maxCount )
        {
        	maxCount = count;
        	high[20] = name[20];
    	}  
		count = 0;                   
        fscanf( fptr, "%s    %d    %d    %d    %d    %d\n", name, &mark1, &mark2, &mark3, &mark4, &mark5 );
        
    }
    if( mark1 >= 45 )
        count++;  
    if( mark2 >= 45 )
        count++; 
    if( mark3 >= 45 )
        count++;
    if( mark4 >= 45 )
        count++;
    if( mark5 >= 45 )
        count++; 
        
    if( count >= maxCount )
    {
    	maxCount = count;
    	high[20] = name[20];
	}

    printf( "%s    %d\n", name, count );
    printf( "Highest number of sunjects passed\n" );
    printf( "Student name : %s\n", high ); // what is the error with this statement, why it doesn't exist?
    printf( "Number of subjects : %d\n", maxCount );
    
    fclose( fptr );
    return 0;
}
