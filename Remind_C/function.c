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
    printf("가천대학교\n");
    printf("컴퓨터공학과 18학번\n");
    printf("김신우\n");

}

int scan_number()
{
    int number;
    printf("학번을 입력하세요: ");
    scanf("%d", &number);
    return number;
}