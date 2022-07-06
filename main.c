#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    int Width;   /*declaring an integer variable.*/

    printf("Please give the Length and Width: "); /*info*/
    scanf("%d\n%d",&length,&Width); /*inputting*/
    int Perimeter=(length+Width)*2 ;
    printf("The value of Perimeter is :%d",Perimeter); /*printing the value of 2 expressions*/


    printf("Please give the Length and Width: "); /*info*/
    scanf("%d\n%d",&length,&Width); /*inputting*/
    printf("The value of Area is :%d",length*Width); /*printing the value of 2 expressions*/
    return 0;
}
