# include <stdio.h> //printf
# include <cs50.h> // get

// For the program not to crash because the function was not defined yet
// C reads top to bottom.
code 
void meow(int n);

int main(void)
{
    meow(3);
}

// FUNCTIONS:

// def function meow:
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow!\n");
    }
}