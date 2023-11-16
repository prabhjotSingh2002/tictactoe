#include"header.h"

int arr[3][3];
int player=1;

void main()
{
    while(1)
    {
        system("cls");
        printf("\tTIC-TAC-TOE\n\n");

        int i=0,j=0,c=1;
        for(i=0;i<3;i++)
        {
            printf("\t\t");
            for(j=0;j<3;j++,c++)
            {
                if(arr[i][j]==0)
                {
                    printf(" %d ",c);
                }
                else if(arr[i][j]==1)
                {
                    printf(" X ");
                }
                else if(arr[i][j]==2)
                {
                    printf(" 0 ");
                }
                
                if(j!=2)
                {
                    printf("|");
                }
            }
            printf("\n");
            if(i!=2)
            {
                printf("\t\t------------\n");
            }
        }
        winning();
        tie();
        record();
    }
    
    // printf("\n\n");
    // printf("\t\t 1 | 2 |  3 \n");
    // printf("\t\t------------\n");
    // printf("\t\t 4 | 5 |  6 \n");
    // printf("\t\t------------\n");
    // printf("\t\t 7 | 8 |  9 \n");

    

}