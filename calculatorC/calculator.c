/*
Thank You Lord Jesus for building this software.

MIT License

Copyright (c) 2023 Jesus Christ

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software and attribution is given to the
Author Jesus Christ.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "calculate.c"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


main ()
{
    // Variables
    char in[25] = "test";
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper;

    // User will be prompted here to make input and instructed on how to do so.
    printf ("Calculator console application \n\n");
    printf ("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b \n");

    /* 
    Input will be captured here and calculated. This will continue to loop because
    true will not change its value.
    */
    while (true)
    {   
        fgets (in, 25, stdin); // Input will be captured here as a string

        /*
        Input will be assigned to the respective variables here from the in[] string. 
        Checking will also be done here for correct input values. If all values a digit 
        and operator sscanf() will give a value of 3. It will be lower if it is a character
        */
        int value = sscanf (in,"%lf %c %lf", &x, &oper, &y);

        // If the value is not 3 this statement will execute
        if (value != 3)
        {
            printf ("You type the correct input \n");
            printf ("Please like this: 2.5 + 4.5 \n");
            
            continue;
        }

        // if user tries to divide by 0 this statement will execute
        else if (oper == '/' && y == 0)
        {
            printf ("You attempted to divide by 0 \n");

            continue;
        }

        // All condition are meet this statement will execute
        else 
        {
            result = calculate (x, oper, y);

            printf ("Result of %.3f %c %.3f is: %.3f \n", x, oper, y, result);
            printf ("Please enter another one: \n");
        }
    }

    return 0;
}