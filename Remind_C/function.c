#include <stdio.h>

void print_name();
int scan_number();

int main(void)
{

    print_name();
    int num = scan_number();
    printf("%d", num);

    

    return 0;
}



void print_name()
{
    printf("��õ���б�\n");
    printf("��ǻ�Ͱ��а� 18�й�\n");
    printf("��ſ�\n");

}

int scan_number()
{
    int number;
    printf("�й��� �Է��ϼ���: ");
    scanf("%d", &number);
    return number;
}