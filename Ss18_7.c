#include<stdio.h>
#include<string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};

void nhapSinhVien(struct SinhVien sinhvien[]);

void inSinhVien(struct SinhVien sinhvien[]);

void xoaSinhVien(struct SinhVien sinhvien[], int *n, char ten[]);

int main(){
    struct SinhVien sinhVien[5];
    int n = 5;
    char ten[50];

    nhapSinhVien(sinhVien);

    inSinhVien(sinhVien);

    printf("\nNhap ten sinh vien can xoa: ");
    scanf("%s", ten);

    xoaSinhVien(sinhVien, &n, ten);

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    inSinhVien(sinhVien);

    return 0;
}
void nhapSinhVien(struct SinhVien sinhvien[]){
    for (int i = 0; i < 5; i++) {
        printf("\nMoi ban nhap vao thong tin sinh vien thu %d:\n",i + 1);
        printf("Moi ban nhap vao id: ");
        scanf("%d", &sinhvien[i].id);
        printf("Moi ban nhap ten: ");
        scanf("%s", sinhvien[i].name);
        printf("Moi ban nhap vao tuoi: ");
        scanf("%d", &sinhvien[i].age);
        printf("Moi ban nhap vao so dien thoai: ");
        scanf("%s", sinhvien[i].phoneNumber);
    }
}

void inSinhVien(struct SinhVien sinhvien[]){
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++){
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sinhvien[i].id);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
    }
}

void xoaSinhVien(struct SinhVien sinhvien[], int *n, char ten[]){
    int found = 0;
    for (int i = 0; i < *n; i++){
        if (strcmp(sinhvien[i].name, ten) == 0){
            for (int j = i; j < *n - 1; j++){
                sinhvien[j] = sinhvien[j + 1];
            }
            (*n)--;
            found = 1;
            break;
        }
    }

    if (found == 0){
        printf("Sinh vien %s khong ton tai\n", ten);
    } else {
        printf("Sinh vien %s da duoc xoa\n", ten);
    }
}


