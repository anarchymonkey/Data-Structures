#include <stdio.h>

int main()
{
  int r,c,i,j,k;
  scanf("%d",&r);
  scanf("%d",&c);
  int a[r][c];
  
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  
  int sr=0,sc=0,er=r-1,ec=c-1;
  while(sr<=er&&sc<=ec)
  {
    for(j=sc;j<=ec;++j)
    {
      printf("%d\n",a[sr][j]);
    }
    sr++;
    for(j=sr;j<=er;++j)
    {
      printf("%d\n",a[j][ec]);
    }
    ec--;
	if(sc<er)
	{
	    for(j=ec;j>=sc;--j)
	    {
	      printf("%d\n",a[er][j]);
	    }
	    er--;
	}
	if(sc<ec)
	{
	    for(j=er;j>=sr;--j)
	    {
	      printf("%d\n",a[j][sc]);
	    }
	    sc++;
	}
  }
  
  return 0;
}