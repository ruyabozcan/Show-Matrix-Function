#include <stdio.h>

int main(void) {
  void showMatrix(int[][3],int);
  
  int M[][3]={ 
            {1,2,3},
            {4,5,6},
            {7,8,0}
          };
  showMatrix(M, 3);
  return 0;
}
void showMatrix(int m[][3],int n){
   for(int i=0;i<n;i++){
     for(int j=0;j<3;j++)
        printf("%5d",m[i][j]);
     printf("\n");
   }
}