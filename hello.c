/*#include<stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}
*/

/*#include<stdio.h>
void main()
{
    char name[20];
    char branch[20];
    printf("enter your name");
    scanf("%s",name);

    printf("enter your branch");
    scanf("%s",branch);

    printf("\nName = %s", name);
    printf("\nBranch = %s", branch);
}
    */

    /*#include<stdio.h>
    void main()

    {
        char city[20];
        char hobby[20];
        printf("enter your city");
        scanf("%s",city);

        printf("enter your hobby");
        scanf("%s",hobby);

        printf("\nCity = %s", city);
        printf("\nHobby = %s", hobby);
    }
        */

/*#include<stdio.h>
void main()
{
    int a, b, s;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    s = a+b;
    printf("sum + %d", s);

}
*/

#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the values of a & b");
    scanf("%d%d", &a, &b);

    c= a;
    a= b;
    b= c;

    printf("\nAfter swapping");
    printf("\nA= %d B= %d",a,b);
}