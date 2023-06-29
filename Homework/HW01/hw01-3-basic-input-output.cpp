/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>

int main()  {
    char Name[50];
    char LastName[50];
    printf ("Enter Your First Name : ");
    scanf ("%s", Name);
    printf ("Enter your Last Name : ");
    scanf ("%s", LastName);
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand",Name,LastName);
    return 0;
}
