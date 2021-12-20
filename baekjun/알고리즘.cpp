#include<stdio.h>


int size[10];
int num;
char list[10][10][5];
int result[10];

int getResult();

int main() {
  
    int i=0;
    int k = 0;
    
 
    scanf_s("%d", &num);
   
    while (1) {
        scanf_s("%d", &size[i]);
        for (int a = 0; a < size[i]; a++) {
            for (k = 0; k < 4; k++) {

                scanf_s("%d", &list[i][a][k]);
            }
        }
       
        i++;
        if (i == num)break;
    }
    getResult();
    for (i = 1; i <= num; i++) {
        printf("#%d %d\n", i,result[i-1]);
  }
    
    return 0;
}
int getResult() {
    int j = 1;
    for (int i = 0; i < num; i++)
    {
        for (j = 0; j < size[i]; j++) {
            for (int a = j + 1; a < size[i]; a++)
            {
                for (int m = j + 2; m < size[i]; m++) {
                    if ((list[i][j][0] == list[i][a][0] && list[i][a][0] == list[i][m][0]) || (list[i][j][0] != list[i][a][0] && list[i][a][0] != list[i][m][0])) {
                        if ((list[i][j][1] == list[i][a][1] && list[i][a][1] == list[i][m][1]) || (list[i][j][1] != list[i][a][1] && list[i][a][1] != list[i][m][1])) {
                            if ((list[i][j][2] == list[i][a][2] && list[i][a][2] == list[i][m][2]) || (list[i][j][2] != list[i][a][2] && list[i][a][2] != list[i][m][2])) {
                                if ((list[i][j][3] == list[i][a][3] && list[i][a][3] == list[i][m][3]) || (list[i][j][3] != list[i][a][3] && list[i][a][3] != list[i][m][3])) {
                                    result[i] += 1;
                                }

                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}