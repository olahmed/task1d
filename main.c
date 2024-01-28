/**
 ******************************************************************************
 * @file           : Application.c
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
int main()
{
    int a,b,x;
    printf("enter a =");
    scanf("%i", &a);
    printf("\n enter b =");
    scanf("%i", &b);
    printf("\n original values a=%i b=%i",a,b);
    a=b*a;
    b=a/b; //b=a
    a=a/b;
    printf("\n swapped values a=%i b=%i \n",a,b);
    return 0;
}
/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      28jan2024            first task d
*/
