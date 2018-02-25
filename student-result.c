#include <stdio.h>
int main()
{
    int maths, hindi, english, gujarati, sanskrit = 0;
    float per;

    printf("Enter the maths subject marks: ");
    scanf("%d", &maths);
    if (maths > 100)
    {
        printf("Invalid entered marks");
        return 0;
    }
    printf("Enter the hindi subject marks: ");
    scanf("%d", &hindi);
    if (hindi > 100)
    {
        printf("Invalid entered marks");
        return 0;
    }
    printf("Enter the english subject marks: ");
    scanf("%d", &english);
    if (english > 100)
    {
        printf("Invalid entered marks");
        return 0;
    }
    printf("Enter the gujarati subject marks: ");
    scanf("%d", &gujarati);
    if (gujarati > 100)
    {
        printf("Invalid entered marks");
        return 0;
    }
    printf("Enter the sanskrit subject marks: ");
    scanf("%d", &sanskrit);
    if (sanskrit > 100)
    {
        printf("Invalid entered marks");
        return 0;
    }

    per = (maths + hindi + english + gujarati + sanskrit) / 5.0;

    printf("Percentage = %.2f\n", per);

    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80)
    {
        printf("Grade B");
    }
    else if (per >= 70)
    {
        printf("Grade C");
    }
    else if (per >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("You are failed, Don't show result to parent!");
    }
    return 0;
}
