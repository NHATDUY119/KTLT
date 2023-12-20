hy#include<stdio.h>
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

void WriteFile(char *FileName)
FILE *f:
int ni
SinhVien sv
f=fopen(FileName,"ab");
printf("Nhap vao so luong sinh vien ");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("Sinh viên thu i\n",i);
fflush(stdin);
intf(" - MSSV: ");
gets(sv.Ma);
printf(" - Ho ten: ");
gets (sv.HoTen);
fwrite(&sv,sizeof(sv),1,f);
fclose(f);
printf("Bam phim bat ky de tiep tuc");
getch()


void ReadFile(char *FileName)
{
}
FILE *f;
SinhVien sv;
f=fopen(FileName,"rb");
printf(" MSSV | Họ và ten\n");
fread(&sv, sizeof(sv),1, f);
while (!feof(f))
{
}
printf("%s %s\n", sv. Ma, sv.HoTen);
fread(&sv,sizeof(sv),1,f);
fclose(f);
printf("Bam phim bat ky de tiep tuc!!!");
getch();


void Search(char *FileName)
{
char MSSV[10];
FILE *f;
int Found=0;
SinhVien sv;
fflush(stdin);
printf("Ma so sinh vien can tim: ");
gets (MSSV);
f=fopen(FileName,"rb");
while (!feof(f) && Found==0)
}
fread(&sv, sizeof(sv),1,f);
if (strcmp(sv. Ma, MSSV)==0)
Found=1;
fclose(f);
if (Found == 1)
(
printf("Tim thay SV co ma %s. Ho ten la: %s", sv. Ma, sv.HoTen);
}
else
{
H
}
printf("Tim khong thay sinh vien co ma %s",MSSV);
printf("\nBam phim bat ky de tiep tuc!!!");
getch();


#include<stdio.h>
#include<conio.h>
#include<string.h>
int fibonacci(int n) {
if (n < 0) {
return -1;
} else if (n == 0 || n == 1) {
return n;
} else {
return fibonacci(n - 1) + fibonacci(n - 2);
int main() {
int i;
printf("10 so dau tien cua day so Fibonacci: \n");
for (i = 0; i < 10; i++) {
printf("%d" fibonacci(i));





#include<stdio.h>
#include<conio.h>
#include<string.h>
long tinhGiaithua(int n) {
if (n > 0),(
return-n * tinhGiaithua(n - 1);
} else {
return 1;
int main()
int n;
printf("\n Nhap so nguyen duong n: );
scanf("%d",&n);
printf "Giai thua cua d la: %d\n"
100021
n, tinhGiaithua(n));
