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
#include <ctype.h>


main ()
{
    double x = 0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    

    printf ("Calculator console application \n\n");
    printf ("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b \n");

    while (true)
    {
        scanf ("%lf %c %lf", &x, &oper, &y);

        //int a = isalpha (x);

        printf (" ISDIGIT = %d \n", isdigit(x));

        if (oper == '/' && y == 0)
        {
            printf ("You attempted to divide by 0 \n");

            continue;
        }

        else if (isdigit (x) == 0)
        {
            printf ("You entered a letter \n");

            continue;
        }

        else 
        {
            result = calculate (x, oper, y);

            printf ("Result of %.3f %c %.3f is: %.3f \n", x, oper, y, result);
            printf ("Please enter another one: \n");
        }
    }

    return 0;
}