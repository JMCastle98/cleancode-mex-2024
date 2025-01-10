/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char * arrayOfStrings[] = {"Bosch", "Bangalore", "Mexico", "", "India"};
    
    
    if(sizeof(arrayOfStrings) != 0)
    {
        for(int i = 0; i < sizeof(arrayOfStrings)/sizeof(arrayOfStrings[0]); i++)
        {
            if('\0' != arrayOfStrings[i])
            {
                if('B' == arrayOfStrings[i][0])
                {
                    printf("%s\n", arrayOfStrings[i]);
                }
            }
            
        }
    }

    return 0;
}