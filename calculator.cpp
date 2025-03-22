#include<stdio.h>
#include<math.h>
void menu()
{
    printf("\n");
    printf("<-----------------------Welcome---------------------->\n");
    printf(" 1: Addition \n 2: Subtraction \n 3: Multiply \n 4: Division \n 5: Power \n 6: Modulus\n 7: Exit\n");
    printf("Enter your choice: ");
}
float division(float a,float b)
{
    if(a==0 || b==0)
    {
        fprintf(stderr,"Invliad Arguments.\n");
    }
    else{
        return a/b;
    }
}
int main()
{
    int c;
    float first_number,second_number,result;
    while(1)
    {
        menu();
        scanf("%d",&c);
        if(c==7)
        break;
        if(c>7 || c<1)
        {
            fprintf(stderr,"Invalid choice.\n");
        printf("Please chosse a correct choice.\n");
        continue;
        }
        printf("Please enter the first number: ");
        scanf("%f",&first_number);
        printf("Please enter the second number: ");
        scanf("%f",&second_number);
        switch (c)
        {
        case 1:
            /* Addition */
            result=first_number+second_number;
            break;
        case 2:
            /* Subtraction */
            result=first_number-second_number;
            break;
        case 3:
            /* Multiply */
            result=first_number*second_number;
            break;
        case 4:
            /* Division */
            result=division(first_number,second_number);
            break;
        case 5:
            /* Power */
            result=pow(first_number,second_number);
            break;
        case 6:
            /* Modulus */
            result=(int)first_number%(int)second_number;
            break;
        }
        if(!isnan(result))
        {
            printf("The result is: %2f\n",result);
        }
    }
        
}