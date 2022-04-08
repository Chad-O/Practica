#include <stdio.h>
int main()
{
    char mat[8][8];
    for(int i  = 0; i < 8; ++i)
    {
        for(int j = 0 ; j < 8 ; ++j)
        {
            if((j+i)%2 == 0)
            {
                mat[i][j] = 'B';
            }else
            {
                mat[i][j] = 'R';
            }
        }
    }
    for(int i  = 0; i < 8; ++i)
    {
        for(int j = 0 ; j < 8 ; ++j)
        {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}