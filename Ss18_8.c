#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};

void nhapSinhVien(struct SinhVien sinhvien[], int n){
    for (int i = 0; i < n; i++) {
        printf("\nMoi ban nhap vao thong tin sinh vien thu %d:\n", i+1);
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

void inSinhVien(struct SinhVien sinhvien[], int n){
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("ID: %d\n", sinhvien[i].id);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
    }
}

void chenSinhVien(struct SinhVien sinhvien[], int *n, int viTri, struct SinhVien svMoi) {
    if (viTri < 1 || viTri > *n + 1) {
        printf("Vi tri khong hop le\n");
        return;
    }

    for (int i = *n; i >= viTri; i--) {
        sinhvien[i] = sinhvien[i - 1];
    }
    sinhvien[viTri - 1] = svMoi;
    (*n)++;
}

int main() {
    struct SinhVien sinhVien[6]; 
    int n = 5; 
    int viTri;
    struct SinhVien svMoi;

    nhapSinhVien(sinhVien, n);

    inSinhVien(sinhVien, n);

    printf("\nNhap vi tri muon chen: ", n + 1);
    scanf("%d", &viTri);

    printf("\nMoi ban nhap thong tin sinh vien can chen:\n");
    printf("Moi ban nhap vao id: ");
    scanf("%d", &svMoi.id);
    printf("Moi ban nhap ten: ");
    scanf("%s", svMoi.name);
    printf("Moi ban nhap vao tuoi: ");
    scanf("%d", &svMoi.age);
    printf("Moi ban nhap vao so dien thoai: ");
    scanf("%s", svMoi.phoneNumber);

    chenSinhVien(sinhVien, &n, viTri, svMoi);

    printf("\nDanh sach sinh vien sau khi chen:\n");
    inSinhVien(sinhVien, n);

    return 0;
}

