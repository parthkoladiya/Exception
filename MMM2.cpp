#include <iostream.h>
#include<conio.h>
void main() 
{
    try 
    {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0)
        {
            throw "Division by zero is not allowed!";
        }

        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    } 
    catch (const char* errorMessage) 
    {
        cout << "Error: " << errorMessage << endl;
    }

    getch();
}
