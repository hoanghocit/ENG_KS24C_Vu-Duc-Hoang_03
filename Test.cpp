#include<stdio.h>
int main() {
    int arr[100], sophantu = 0, choice, giatri, vitri;

    do{
    printf("--MENU--\n");
    printf("1. Nhap So Phan Tu Va Gia Tri Cho Mang\n");
    printf("2. In Ra Gia Tri Cac Phan Tu Trong Mang Theo Dang (arr[0] = 1, arr[1] = 5)\n");
    printf("3. Dem So Luong Cac So Nguyen To Co Trong Mang\n");
    printf("4. Tim Gia Tri Nho Thu Hai Trong Mang\n");
    printf("5. Them Mot Phan Tu Vao Vi Tri Ngau Nhien Trong Mang, Phan Tu Moi Them Vao Mang Va Vi Tri Vao Phai Do Nguoi Dung Nhap Vao\n");
    printf("6. Xoa Phan Tu Tai Mot Vi Tri Cu The (Nguoi Dung Nhap Vi Tri)\n");
    printf("7. Sap Xep Mang Theo Thu Tu Giam Dan (Insertion Sort)\n");
    printf("8. Cho Nguoi Dung Nhap Vao Mot Phan Tu, Tim Kiem Xem Phan Tu Do Co Ton Tai Trong Mang Khong\n");
    printf("9. Xoa Toan Bo Phan Tu Trung Lap Trong Mang Va Hien Thi Toan Bo Phan Tu Doc Nhat Co O Trong Mang\n");
    printf("10. Dao Nguoc Thu Tu Cac Phan Tu Co Trong Mang\n");
    printf("11. Thoat\n");
    printf("Ban Hay Nhap Lua Chon: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
    printf("Ban Hay Nhap So Phan Tu Cua Mang: ");
    scanf("%d", &sophantu);
    for(int i = 0; i < sophantu; i++){
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
    }
    printf("\n");
    break;
    case 2:
    printf("Gia Tri Cua Cac Phan Tu Trong Mang La: \n");
    for(int i = 0; i < sophantu; i++){
    printf("arr[%d] = %d \n", i, arr[i]);
    }
    printf("\n");
    break;
    case 3: {
    if(sophantu == 0) {
    printf("So Phan Tu Trong Mang Khong Hop Le. \n");
    }else{
    printf("Cac Phan Tu La So Nguyen To: ");
    for(int i = 0; i < sophantu; i++){
    int soNguyenTo = 1;
    if(arr[i] <= 1){
    soNguyenTo = 0;
    }
    for(int j = 2; j * j <= arr[i]; j++){
    if(arr[i] % j == 0) {
    soNguyenTo = 0;
    break;
    }
    }
    if(soNguyenTo){
    printf("%d ", arr[i]);
    }
    }
    printf("\n");
    }
    break;
    }
    case 4:
    printf("Chuc Nang Dang Phat Trien");
    break;
    case 5:
    printf("Nhap Gia Tri Can Them: ");
    scanf("%d", &giatri);
    printf("Nhap Vi Tri Can Them: ");
    scanf("%d", &vitri);
    if (vitri < 0 || vitri > sophantu){
    printf("Vi Tri Khong Hop Le!\n");
    }else{
    for(int i = sophantu; i > vitri; i--){
    arr[i] = arr[i - 1];
    }
    arr[vitri] = giatri;
    sophantu++;
    printf("Phan Tu Moi Duoc Them Thanh Cong!");
    }
    printf("\n");
    break;
    case 6:
    printf("Nhap Vi Tri Can Xoa: ");
    scanf("%d", &vitri);
    if(vitri < 0 || vitri >= sophantu){
    printf("Vi Tri Khong Hop Le!\n");
    }else{
    for(int i = vitri; i < sophantu - 1; i++){
    arr[i] = arr[i + 1];
    }
    sophantu--;
    printf("Phan Tu Da Duoc Xoa!");
    }
    printf("\n");
    break;
    case 7:
    for(int i = 0; i < sophantu - 1; i++){
    for(int j = i + 1; j < sophantu; j++){
    if(arr[i] < arr[j]){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }
    }
    }
    printf("Mang Da Xep Xep Theo hu Tu Giam Dan.\n");
    printf("\n");
    break;
    case 8:
    printf("Ban Hay Nhap Gia Tri Can Tim: ");
    scanf("%d", &giatri);
    for(int i = 0; i < sophantu; i++){
    if(arr[i] == giatri){
    printf("Gia Tri %d Ton Tai Trong Mang.\n", giatri);
    }else{
    printf("Gia Tri %d Khong Ton Tai Trong Mang.\n", giatri);
    }
    }
    break;
    case 9:
    printf("Chuc Nang Dang Phat Trien");
    break;
    case 10:
    printf("Chuc Nang Dang Phat Trien");
    break;
    case 11:
    printf("Thoat Chuong Trinh!");
    break;
    default:
    printf("Lua Chon Khong Hop Le!\n");
    break;
    }
    }while(choice != 11);
return 0;
}
