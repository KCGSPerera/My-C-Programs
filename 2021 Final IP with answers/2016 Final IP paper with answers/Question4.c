#include <stdio.h>
#include <string.h>
int getLength( char arr[] );
void reverseArr( char array1[], char array2[] );
 
int main( void )
{
              char nameArr[ 15 ] = { 0 };
              char reverseName[ 15 ] = { 0 };
              int length = 0, i;
 
              printf( "Enter Name : " );
              scanf( "%s", nameArr );
 
              length = getLength( nameArr );
              reverseArr(nameArr, reverseName );
              
              printf( "The lengt of the array : %d\n\n", length );
              printf( "Original Array :  %s \n", nameArr );
              printf( "Reverse array :   " );
              
              for( i = 0; i < length; i++ )
              {
                           printf( "%c", reverseName[ i ] );
    }
 
              return 0;
}
 
int getLength( char arr[ ] )
{
              return strlen( arr );
}
 
void reverseArr( char array1[], char array2[]  )
{
              int i, len = getLength(array1);
 
              for( i = 0; i < strlen( array1 ); ++i )
              {
                           array2[ i ] = array1[ strlen( array1 ) - ( 1 + i ) ];
              }
 
              return ;
}
 

