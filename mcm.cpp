#include <stdio.h> 
#include<limits.h> 
#define INFY 999999999 long int m[20][20]; int s[20][20]; 
int p[20],i,j,n; 
 
void print_optimal(int i,int j)//for parenthesis algorithm 
{ 
    if (i == j)         printf(" A%d ",i); 
    else        { 
          printf("( ");           print_optimal(i, s[i][j]);           print_optimal(s[i][j] + 1, j); 
          printf(" )"); 
       } 
} 
 
void matmultiply(void)//filling the M table  
{ long int q; int k; for(i=n;i>0;i--) 
 { 
   for(j=i;j<=n;j++) 
    {      if(i==j)        m[i][j]=0; 
     else 
       { 
        for(k=i;k<j;k++) 
        { 
         q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];          if(q<m[i][j]) 
          { 
            m[i][j]=q;             s[i][j]=k; 
          } 
         } 

        } 
      } 
 } 
} 
 
int MatrixChainOrder(int p[], int i, int j)//to filter the minimum multiplication out of diffrent values of k 
{ 
    if(i == j)         return 0;     int k; 
    int min = INT_MAX;     int count; 
  
    for (k = i; k <j; k++) 
    { 
        count = MatrixChainOrder(p, i, k) +                 MatrixChainOrder(p, k+1, j) +                 p[i-1]*p[k]*p[j]; 
  
        if (count < min)             min = count; 
    } 
  
    // Return minimum count 
    return min; 
} 
 
int main() 
{     int k;     printf("Enter the no. of matrices: "); 
    scanf("%d",&n);         for(i=1;i<=n;i++) 
            for(j=i+1;j<=n;j++) 
                { 
                 m[i][i]=0;                  m[i][j]=INFY;//initializing elements with some fixed large value                  s[i][j]=0; 
                } 
     
    printf("\nEnter the dimensions: \n"); 
     
    for(k=0;k<=n;k++) 
    { 
     printf("P%d: ",k); 
     scanf("%d",&p[k]); 
    } 
     
    matmultiply(); 
     
    printf("\nCost Matrix M:\n");     for(i=1;i<=n;i++)      for(j=i;j<=n;j++) 
      printf("m[%d][%d]: %ld\n",i,j,m[i][j]); 
         
    i=1,j=n;     printf("\nMultiplication Sequence : ");     print_optimal(i,j); 
    printf("\nMinimum number of multiplications is : %d ",MatrixChainOrder(p, 1, n)); 
 
} 
 
 