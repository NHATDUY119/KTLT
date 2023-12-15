#include "stdio.h"
#include "stdlib.h"
I
int main()
(int
int m=3;
a[3][3]={{1,2,3},{4,5,6},{7,8,9)};
FILE *fp;
char path [50];
printf("\nNhap dưỡng dan: ");
fflush(stdin);
gets (path);
fp=fopen(path,"wt");
if(fp==NULL)
}
else
{
}
printf("\nLoi mo file");
exit(0);
fprintf(fp,"So dong, cot là %d\n",m);
for (int i=0; i<m; i++)
for (int j 0; j<n; j++)// ghi dong
(
fprintf(fp,"%3d", a[i][j]);
fprintf(fp,"\n");
fclose(fp);
