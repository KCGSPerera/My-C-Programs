#include <stdio.h>
#include <math.h>
float findRadianValues (float angleInDegrees);
void printRaianValues (void);
int main (void)
{
printRaianValues ();
return 0 ;
}
float findRadianValues (float angleInDegrees)
{
return (M_PI / 180) * angleInDegrees ;
}
void printRaianValues (void)
{
int angle = 100 , i ;
printf("Angle(degrees)\tAngle(radians)\n");
for (i = 0 ; i < 6 ; i++)
{
printf("%d\t\t %.2f\n" , angle , findRadianValues (angle) );
angle += 20 ;
}
}
