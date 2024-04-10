#include<stdio.h>
int main(void)
{
	int rainfall[3][4];
	int i, j;
	int maxRainfall[4] = {0};
	
	for(i = 0; i < 4; i++)
	{
		printf("\nDay %d\n\n",i + 1);
		for(j = 0; j < 3; j++)
		{
			printf("Enter rainfall of city %d : ", j + 1);
			scanf("%d", &rainfall[j][i]);
			
			if(maxRainfall[i] < rainfall[j][i])
			{
				maxRainfall[i] = rainfall[j][i];
				//j = cityNo;
			}	
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++)
		{
			printf("\nMaximum rainfall of Day %d : %d\n", i + 1,maxRainfall[i]);
		}
		
		return 0;	
}
