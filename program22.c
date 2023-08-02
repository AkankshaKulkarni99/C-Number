// question = Accept one number from user and display factors   // divide houn =0 yenarey factors ino % iCnt

#include<stdio.h>                                    //for printf and scanf function

void DisplayFactors(int iNo)                        //fun naw should be proper name
{
    int iCnt = 0;

    for (iCnt = 1;  iCnt <= iNo; iCnt++)           
    {
        if((iNo % iCnt) == 0)                   // // coommon baher kadhla
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


        /*
        iNo = 8;


        iNo % 1 == 0
        iNo % 2 == 0
        iNo % 3 == 0
        iNo % 4 == 0
        iNo % 5 == 0
        iNo % 6 == 0
        iNo % 7 == 0
        iNo % 8 == 0



        */