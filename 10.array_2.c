#include <stdio.h>

#define H 5
#define W 5

int main()
{
    int image[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            image[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    } 

    int image_temp[2][2] = { {1, 2},
                             {3, 4}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", image_temp[i][j]);
        }
        printf("\n");
    } 
    
    return 0;   
}