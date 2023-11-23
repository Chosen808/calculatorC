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

#include "calculator.h"
#include <stdio.h>

double calculate (double x, char oper, double y)
{
    calculator_t a, b, c;
    a.x = x , b.oper = oper, c.y = y;

    switch (b.oper)
    {
        case '+':
            return a.x + c.y;

        case '-':
            return a.x - c.y;

        case '*':
            return a.x * c.y;

        case '/':
            return a.x / c.y;

        default:
            return 0.0;
    }
}

