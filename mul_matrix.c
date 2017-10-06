#include <stdio.h>

int Display(int i, int j ,int r1,int r2, int r3, int r4,int r5,int r6,int c1, int c2,int c3,int c4,int c5, int c6,int a[10][10],int b[10][10],int c[10][10],int d[10][10],int e[10][10],int f[10][10]);
int mul(int i, int j ,int r1,int r2, int r3, int r4,int r5,int r6,int c1, int c2,int c3,int c4,int c5, int c6,int a[10][10],int b[10][10],int c[10][10],int d[10][10],int e[10][10],int f[10][10]);

int main()
{
    int a[10][10], b[10][10];
	int c[10][10], d[10][10];
	int e[10][10], f[10][10];



	int r1, c1, r2, c2;
	int r3, c3, r4, c4;
	int r5, c5, r6, c6;

	int i, j;


    printf("Enter rows and column for matrix1:");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for matrix2:");
    scanf("%d %d",&r2, &c2);

    // Column of first matrix should be equal to column of second matrix and
    while (c1 != r2)
    {
        printf("Error! column of matrix not equal to row of next matrix.\n\n");
		break;
    }

	printf("Enter rows and column for matrix3:");
    scanf("%d %d", &r3, &c3);

	while (c2 != r3)
    {
        printf("Error! column of matrix not equal to row of next matrix.\n\n");
		break;
    }

    printf("Enter rows and column for matrix4:");
    scanf("%d %d",&r4, &c4);

	while (c3 != r4)
    {
        printf("Error! column of matrix not equal to row of next matrix.\n\n");
		break;
    }

	printf("Enter rows and column for matrix5:");
    scanf("%d %d",&r5, &c5);
	
	while (c4 != r5)
    {
        printf("Error! column of matrix not equal to row of next matrix.\n\n");
		break;
    }


	printf("Enter rows and column for matrix6:");
    scanf("%d %d",&r6, &c6);

	while (c5 != r6)
    {
        printf("Error! column of matrix not equal to row of next matrix.\n\n");
		break;
    }

	
	
		// Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    
		
	
		// Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }

	
		// Storing elements of  matrix 3.
	printf("\nEnter elements of matrix 3:\n");
    for(i=0; i<r3; ++i)
        for(j=0; j<c3; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&c[i][j]);
        }
	
		// Storing elements of  matrix4
	printf("\nEnter elements of matrix 4:\n");
    for(i=0; i<r4; ++i)
        for(j=0; j<c4; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&d[i][j]);
        }
	
		// Storing elements of  matrix5
	printf("\nEnter elements of matrix 5:\n");
    for(i=0; i<r5; ++i)
        for(j=0; j<c5; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&e[i][j]);
        }
	
		// Storing elements of  matrix.6
	printf("\nEnter elements of matrix 6:\n");
    for(i=0; i<r6; ++i)
        for(j=0; j<c6; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&f[i][j]);
        }


		Display(i,j,r1,r2,r3,r4,r5,r6,c1,c2,c3,c4,c5,c6,a,b,c,d,e,f);
		mul(i, j ,r1,r2,r3, r4,r5,r6,c1,c2,c3,c4,c5,c6,a,b,c,d,e, f);

		return 0;
}
		/*--------------------------Displaying Matrix------------------*/
	//1
	
	int Display(int i, int j ,int r1,int r2, int r3, int r4,int r5,int r6,int c1, int c2,int c3,int c4,int c5, int c6,int a[10][10],int b[10][10],int c[10][10],int d[10][10],int e[10][10],int f[10][10])
	{
	printf("\nEntered Matrix1: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d    ",a[i][j]);
			if(j==c1-1)
			{
				printf("\n\n");
			}
		}
	}

	//2

	printf("\nEntered Matrix2: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d    ",b[i][j]);
			if(j==c2-1)
			{
				printf("\n\n");
			}
		}
	}

	//3

	printf("\nEntered Matrix3: \n");
	for(i=0;i<r3;i++)
	{
		for(j=0;j<c3;j++)
		{
			printf("%d    ",c[i][j]);
			if(j==c3-1)
			{
				printf("\n\n");
			}
		}
	}

	//4

	printf("\nEntered Matrix4: \n");
	for(i=0;i<r4;i++)
	{
		for(j=0;j<c4;j++)
		{
			printf("%d    ",d[i][j]);
			if(j==c4-1)
			{
				printf("\n\n");
			}
		}
	}

	//5

	printf("\nEntered Matrix5: \n");
	for(i=0;i<r5;i++)
	{
		for(j=0;j<c5;j++)
		{
			printf("%d    ",e[i][j]);
			if(j==c5-1)
			{
				printf("\n\n");
			}
		}
	}

	//6

	printf("\nEntered Matrix6: \n");
	for(i=0;i<r6;i++)
	{
		for(j=0;j<c6;j++)
		{
			printf("%d    ",f[i][j]);
			if(j==c6-1)
			{
				printf("\n\n");
			}
		}
	}

	return f[i][j];

	}

		/*----------------End!----------------*/

    
		
		
		// Initializing all elements of result matrix to 0
  	
		// Multiplying matrices a and b and
   	
		
	// storing result in result matrix
  
	int mul(int i, int j ,int r1,int r2, int r3, int r4,int r5,int r6,int c1, int c2,int c3,int c4,int c5, int c6,int a[10][10],int b[10][10],int c[10][10],int d[10][10],int e[10][10],int f[10][10])
	{
		int q1=0;
		int q2=0;
		int q3=0;
		int q4=0;
		int q5=0;
		int k=0;
		int result1[10][10];
		int result2[10][10];
		int result3[10][10];
		int result4[10][10];
		int result5[10][10];

		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			q1=0;
			for(k=0;k<c1;k++)
			{
				q1+=a[i][k]*b[k][j];
			
			}
			result1[i][j]=q1;
			
		}
	}

   for(i=0;i<r3;i++)
	{
		for(j=0;j<c4;j++)
		{
			q2=0;
			for(k=0;k<c3;k++)
			{
				q2+=c[i][k]*d[k][j];
			
			}
			result2[i][j]=q2;
			
		}
	}

   for(i=0;i<r5;i++)
	{
		for(j=0;j<c6;j++)
		{
			q3=0;
			for(k=0;k<c5;k++)
			{
				q3+=e[i][k]*f[k][j];
			
			}
			result3[i][j]=q3;
			
		}
	}



   for(i=0;i<r1;i++)
	{
		for(j=0;j<c4;j++)
		{
			q4=0;
			for(k=0;k<c2;k++)
			{
				q4+=q1*q2;
			
			}
			result4[i][j]=q4;
			
		}
	}

   for(i=0;i<r1;i++)
	{
		for(j=0;j<c6;j++)
		{
			q5=0;
			for(k=0;k<c4;k++)
			{
				q5+=q4*q3;
			
			}
			result5[i][j]=q5;
			
		}
	}


    
			
			
			
	// Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c6; ++j)
        {
            printf("%d  ", result5[i][j]);
            if(j == c6-1)
                printf("\n\n");
        }
    
		return result5[i][j];
		
	}
