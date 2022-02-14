#include<stdio.h>
int main()
{

  int myArray[10][10],i,j,row,col,k=1,Array[10][3];
   printf("Enter the number of the rows and columns");
   scanf("%d %d",&row,&col);



   printf("\nEnter the elements");
   for(i=0;i<row;i++)
    {
   for(j=0;j<col;j++)
    {
   scanf("%d/t",&myArray[i][j]);

     }
   }


  printf("The matrix is:\n");
  for(i=0;i<row;i++)
   {
  for(j=0;j<col;j++)
   {
  printf("%d\t",myArray[i][j]);

   }
   printf("\n");
  }

 
  Array[0][0]=row;
  Array[0][1]=col; 
  for(i=0;i<row;i++)
   {
  for(j=0;j<col;j++)
   {
  if(myArray[i][j]!=0)
   {
  Array[k][0]=i;
  Array[k][1]=j;
  Array[k][2]=myArray[i][j];

  k++;
}
}
   Array[0][2]=k-1;
}


  col = Array[0][2];

  printf("Sparse form:\n");
  for(i=0;i<=col;i++){
  printf("%d\t%d\t%d\t",Array[i][0],Array[i][1],Array[i][2]);
  printf("\n");
}

  return 0;
}
