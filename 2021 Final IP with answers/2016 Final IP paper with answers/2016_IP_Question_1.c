#include <stdio.h>
int calculateAssinmentMarks( int marks1, int marks2, int marks3 );
int calculatePracticalMarks( int prac1, int prac2 );
float calculateFinalMarks( int assinment, int practical, int theory );
char getGrade( float finalMarks );
void printStudent( char name[], int ID, float finalMarks, char grade );
int main( void )
{
    int mark1, mark2, mark3, pMark1, pMark2, tMark1, ID = 0, assMarks = 0, pracMarks = 0;
    float final = 0;
    char fGrade;
    char name[ 20 ];

    printf( "Enter student name : " );
    scanf( "%s", name );

    printf( "Enter student ID : " );
    scanf( "%d", &ID );

    
    printf( "Enter marks for assinment 1 : " );
    scanf( "%d", &mark1 ); 

    printf( "Enter marks for assinment 2 : " );
    scanf( "%d", &mark2 );    

    printf( "Enter marks for assinment 3 : " );
    scanf( "%d", &mark3 );  

    printf( "Enter marks for practical 1 : " );
    scanf( "%d", &pMark1 ); 

    printf( "Enter marks for practical 2 : " );
    scanf( "%d", &pMark2 );    

    printf( "Enter marks for theory : " );
    scanf( "%d", &tMark1 ); 

    assMarks = calculateAssinmentMarks( mark1, mark2, mark3 );
    pracMarks = calculatePracticalMarks( pMark1, pMark2 );
    final = calculateFinalMarks( assMarks, pracMarks, tMark1 );
    fGrade = getGrade( final );
    printStudent( name, ID, final, fGrade );
                         
    return 0;
}
int calculateAssinmentMarks( int marks1, int marks2, int marks3 )
{
    return ( marks1 + marks2 + marks3 );
}
int calculatePracticalMarks( int prac1, int prac2 )
{
    return ( prac1 + prac2 );
}
float calculateFinalMarks( int assinment, int practical, int theory )
{
    return ( ( ( assinment / 3.0 ) * 0.2 ) + ( ( practical / 2.0 ) * 0.3 ) + ( theory * 0.5 ) );
}
char getGrade( float finalMarks )
{
    if( finalMarks >= 85 )
        return 'A';
    else if( finalMarks >= 75 )
        return 'B';
    else if( finalMarks >= 65 )
        return 'C';
    else
        return 'X';
}
void printStudent( char name[], int ID, float finalMarks, char grade )
{
    printf( "Student Name : %s\n", name );
    printf( "Student ID : %d\n", ID );
    printf( "Final marks : %.2f\n", finalMarks );
    printf( "Final Grade : %c\n", grade );
    return;
}


