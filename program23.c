// question = Accept one number from user and display factors   // dilela num factor mhnun nko aahe // without = operator    

#include<stdio.h>                                    //for printf and scanf function

void DisplayFactors(int iNo)                        //fun naw should be proper name
{
    int iCnt = 0;

    for (iCnt = 1;  iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}   
int main()
{
    int iValue = 0;                               //ek int tayar krycha aahe with name value

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);                     // iValue {} chya aat madhe vary honar baher pdla ki new name.like iNo

    return 0;
}