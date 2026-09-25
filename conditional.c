/*#include<stdio.h>
void main()
{
    int age = 17;
    if (age >= 18)
    {
        printf("entry granted");
    }
    else
    {
        printf("Go back child");
    }
}
*/

/*#include<stdio.h>
void main()
{
    int marks = 85;
    printf("my marks is : %d\n", marks);
    if (marks >= 90)
    {
        printf("grade A");
    }
    else if (marks >= 70)
    {
        printf("Grade B");
    }
    else
    {
        printf("need to improve");
    }
}
    */

#include<stdio.h>
void main()
{
    int button = 4;
    printf("you pressed button %d\n", button);
    switch (button)
    {
        case 1:
        printf("Youtube");
        break;

        case 2:
        printf("facebook");
        break;
        case 3:
        printf("instagram");
        break;
        default:
        printf("it is invalid button");
    }
}