#include<stdio.h>
#include<string.h>

struct SinhVien{
	int id;
	char name[50];
	int age;
	char phoneNumber[50];
};

void nhapSinhVien(struct SinhVien sinhvien[]){
    for (int i = 0; i < 5; i++){
        printf("\nMoi ban nhap vao thong tin sinh vien thu %d:\n",i+1);
        printf("Moi ban nhap vao id: ");
        scanf("%d",&sinhvien[i].id);
        printf("Moi ban nhap ten: ");
        scanf("%s",sinhvien[i].name);
        printf("Moi ban nhap vao tuoi: ");
        scanf("%d",&sinhvien[i].age);
        printf("Moi ban nhap vao so dien thoai: ");
        scanf("%s",sinhvien[i].phoneNumber);
    }
}

void inSinhVien(struct SinhVien sinhvien[]){
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++){
        printf("Sinh vien thu %d:\n", i+1);
        printf("ID: %d\n",sinhvien[i].id);
        printf("Ten: %s\n",sinhvien[i].name);
        printf("Tuoi: %d\n",sinhvien[i].age);
        printf("So dien thoai: %s\n",sinhvien[i].phoneNumber);
    }
}

int main(){
	struct SinhVien sinhVien[5];
    nhapSinhVien(sinhVien);
    inSinhVien(sinhVien);
	return 0;
}

