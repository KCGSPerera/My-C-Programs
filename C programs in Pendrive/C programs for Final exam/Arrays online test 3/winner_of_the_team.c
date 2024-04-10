#include <stdio.h>
int main( void )
{
	int team1[ 3 ] = { 8, 3, 7 };
	int team2[ 3 ] = { 0 };
	int i, j = 0;
	int total1 = 0, total2 = 0;
	
	printf( "Team 2\n" );
	for( i = 0; i < 3; i++ )
	{
		printf( "Enter round %d score : ", i + 1 );
		scanf( "%d", &team2[ i ] );
	}
	
	if( team1[ j ] > team2[ j ] )
	{
		printf( "Winner for round 1 : Team 1\n" );
	}
	if( team1[ j ] < team2[ j ]  )
	{
		printf( "Winner for round 1 : Team 2\n" );
	}
	if(  team1[ j + 1 ] > team2[ j + 1 ] )
	{
		printf( "Winner for round 2 : Team 1\n" );
	}
	if(  team1[ j + 1 ] < team2[ j + 1 ] )
	{
		printf( "Winner for round 2 : Team 2\n" );
	}
	if(  team1[ j + 2 ] > team2[ j + 2 ] )
	{
		printf( "Winner for round 3 : Team 1\n" );
	}
	if(  team1[ j + 2 ] < team2[ j + 2 ] )
	{
		printf( "Winner for round 3 : Team 2\n" );
	}
	printf( "\n\n" );
	
	for( i = 0; i < 3; i++ )
	{
		total1 += team1[ i ];
		total2 += team2[ i ];
	}
	if( total1 > total2 )
	{
		printf( "Overall winner : team 1" );
	}
	else
	{
		printf( "Overall winner : team 2" );
	}
	return 0;
	
}
