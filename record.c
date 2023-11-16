#include"header.h"

extern int player;
extern int arr[3][3];

void record()
{
    int pos;
    
    printf("\n\n\t\t PLAYER %d Enter your choice: ",player);
    scanf("%d",&pos);

    if(pos>0 && pos<10)
    {
        if(arr[(pos-1)/3][(pos-1)%3]==0)
        {
            if(player==1)
            {
                arr[(pos-1)/3][(pos-1)%3]=1;
                player=2;
            }
            else if (player==2)
            {
                arr[(pos-1)/3][(pos-1)%3]=2;
                player=1;
            }
        }
        else
        {
            printf("\n\n\t\t PLEASE ENTER CORRECT POSITION\n");
            sleep(1);
        }
        
    }
    else
    {
        printf("\n\n\t\t PLEASE ENTER CORRECT POSITION\n");
        sleep(1);
    }
    
}