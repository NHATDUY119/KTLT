#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
char Ma[10];
char HoTen [40];
} SinhVien;
void ReadFile(char *FileName);
void WriteFile(char *FileName);
void Search(char *FileName);
int main()
int c;
for (;;)
printf("\n \t****
printf("\t 1. Nhap DSSV\n")
printf("\t 2. In DSSV\n");
printf("\t 3. Tim kiem n
printf("\t 4. Thoat\n");
printf("\t Ban chon 1, 2, 3, 4:
scanf("%d', &c);
fflush(stdin);
if (c==1)
WriteFile "SinhVien.txt");
else if (c==2)
ReadFile("SinhVien.txt");
else if (c==3)
Search("SinhVien.txt");
else break;
