#include <stdio.h>
int main()
{
    float a[3][3], b[3][3];
    int i,j;
    printf("Enter 18 int/float:\n");
    for(i=0; i<3; i++){ //row
        for(j=0; j<3; j++){ //col
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0; i<3; i++){ //row
        for(j=0; j<3; j++){ //col
            scanf("%f",&b[i][j]);
        }
    }
    printf("\nSum:\n");
    for(i=0; i<3; i++){ //row
        for(j=0; j<3; j++){ //col
            printf("%.f ",a[i][j]+b[i][j]); // +
        }
        printf("\n");
    }
    printf("\nMultiplication:\n");
    for(i=0; i<3; i++){ //row
        for(j=0; j<3; j++){ //col
            printf("%.f ",a[i][j]*b[i][j]); // 
        }
        printf("\n");
    }
    printf("\nDividation:\n");
    for(i=0; i<3; i++){ //row
        for(j=0; j<3; j++){ //col
            printf("%.2f ",a[i][j]/b[i][j]);
        }
        printf("\n");
    }
    

}
