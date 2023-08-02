 // question = Accept one number from user and display factors

#include<stdio.h>                                    //for printf and scanf function

void DisplayFactors(int iNo)                        //fun naw should be proper name
{
    int iCnt = 0;

        //1         //2      //3
    for (iCnt = 1;  iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);   //4
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