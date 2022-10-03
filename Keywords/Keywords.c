#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



void error()
{
    printf("ERROR");
    exit(1);
}

void _auto()
{
    printf("auto - an 'automatic storage class' aka local variable (by default these are implicit)\n\n");
    auto int local = 5; // normally variable declarations like this are implicitly local
    return;
}

void _break()
{
    printf("break - stops execution of the most recent enclosing do, for, switch or while statement\n\n");
    
    do 
    {
        break;
        error();
    } while (true);

    for (;;) 
    {
        break;
        error();
    }

    switch (0)
    {
        default:
        break;
        error();
    }

    while (true)
    {
        break;
        error();
    }
    
    return;
}

void _case()
{
    printf("case - a conditional statement within a switch\n\n");

    switch (3)
    {
        case 0:
        case 1:
        case 2:
            error();
        case 3:
            break;
    }

    return;
}

void _char()
{
    printf("char - 8 bit data type to store integer value of an ascii character\n\n");
    char a = 'a';   // dec 97
    return;
}

void _const()
{
    printf("const - 'variable' with a fixed value\n\n");
    const int x = 22;   // opcodes have no concept of 'constant' values, I assume compiler detects if the 'constant' address space is written to
    return;
}

void _continue()
{
    printf("continue - skips to the next iteration of the most recent enclosing do, for or while loop\n\n");

    do 
    {
        continue;
    } while (false);

    for (int i = 0; i < 1; i++) 
    {
        continue;
    }

    while (false)
    {
        continue;
    }

    return;
}

void _default()
{
    printf("default - fallback statement within a switch\n\n");
    
    switch (0)
    {
        default:
            break;
    }

    return;
}

void _do()
{
    printf("do - begins a do-while loop\n\n");

    do
    {
        // empty loop
    } while (false);

    return;
}

void _double()
{
    printf("double - 64 bit data type to store floating point numbers\n\n");    
    double d = 5.1467249;   // named as such beacuse it is typically twice the bits as a float
    return;
}

void _else()
{
    printf("else - alternate code path for the most recent enclosing if statement\n\n");

    if (false)
    {

    } else
    {
        // 
    }

    return;
}

void _enum()
{
    printf("enum - a set of named integer constants\n\n");
    
    enum foods
    {
        burger, // 1
        hotdog, // 2
        pizza   // 3
    };

    enum foods fav = pizza;

    return;    
}

void _extern()
{
    printf("extern - specify variable or function with external linkage\n\n");
    // extern int e; // declaration reserves memory but the assignment happens elsewhere
    return;
}

void _float()
{
    printf("float - 32 bit data type to store floating point numbers\n\n");
    float f = 1.234;
    return;
}

void _for()
{
    printf("for - initiate a loop with the given expression acting as a counter\n\n");

    for (char byte = -128 ; byte < 127; byte++)
    {
        printf("%i\r", byte);
    }

    return;
}

void _goto()
{
    printf("goto - transfer control to a label\n\n");

    for (;;)
    {
        goto stop;  // equivelant to a jump instruction in assembly
    }

    stop: return;   // labels are only relevant when used with goto, instructions in a label will execute regardless if goto is used
}

void _if()
{
    printf("if - conditional branch (non-zero expression = true)\n\n");

    if (false)
    {

    }

    return;
}

void _xinline()
{
    int inline x()
    {
        return 5;       // inline can improve performance since jump instructions are removed, but it may increase the size of the program
    }

    printf("inline - signals the compiler to replace function calls with the instructions directly\n\n");
    int i = x();    // by default functions are called by reference, but an inline function calls by value (separate copies of the same instructions)
    return;
}

void _int()
{
    printf("int - data type to store integers\n\n");
    int i = 0xFFFFFFFF; // architecture dependent but normally uses 4 bytes for >= 32 bit systems
    return;
}

void _long()
{
    printf("long - data type to store bigger integers\n\n");
    long l = 0xFFFFFFFF;    // 'long' is a 'long int', this used to be twice the size of an int but often compiles into an int on 32 bit architectures
    long long ll = 0x01FFFFFFFF;    // 'long long' is twice the size of a 'long'
    return;
}

void _register()
{
    printf("register - hint the compiler to put a variable in a register\n\n");
    register int i = 5; // compiler may or may not store in a register, depends on optimisation
    return;
}

void _restrict()
{
    printf("restrict - signals that a pointer is the only reference to an object\n\n");
    int* restrict i;   // useful for compiler optimisations, may cause undefined behaviour if violated
    return;
}

void _return()
{
    printf("return - instructs the program to jump back to most recent function call\n\n");
    return; // likely compiles to 'leave' and 'ret' opcodes
}

void _short()
{
    printf("short - data type to store smaller integers\n\n");
    short int s = 6;    // shorts are typically half the size of an int
    return;
}

void _signed() 
{
    printf("signed - data type modifier that halfs the maximum range but allows negative numbers\n\n");
    signed int i = -5;  // int = [0, 2^32 - 1]  // signed int = [-2^31, 2^31 - 1]
    return;
}

void _sizeof()
{
    printf("sizeof - operator that returns the amount of bytes an object uses\n\n");
    int i = sizeof (char);
    return; 
}

void _static()
{
    printf("static - data type modifier to create a global variable\n\n");
    static int i = 64;
    return;
}

void _struct()
{
    printf("struct - custom grouping of data types\n\n");
    struct Keywords // enclosed variables are templates for a 'Keywords' object
    {
        int a;
        int b;
        char c;
    };
    return;   
}

void _switch()
{
    printf("switch - simplifies multiple if statements\n\n");
    int x = 1;
    switch (x)
    {
        case 1:
            break;
        default:
            error();
    }
    return;
}

void _typedef()
{
    printf("typedef - creates an alias for a type\n\n");
    typedef unsigned char bit;  // by convention uppercase signifies a typedef
    bit b = 5;
    return;
}

void _union()
{
    printf("union - stores different data types in the same memory location\n\n");
    union Number    // useful for limited memory
    {
        short x;
        int y;
        long long z;    // union will reserve space for the largest type 
    };
    return;
}

void _unsigned()
{
    printf("unsigned - data type modifier to interpret values as a non-negative number\n\n");
    unsigned int i = -1; // program will store -1 (0xffffffff)
    return;
}

void _void() 
{
    printf("void - function returns no value or declare 'universal' type for pointers\n\n");
    void* voidValue;    // points to an address but compiler acts as if the value has no type (weakly/loosely typed)
    return;
}

void _volatile()
{
    printf("volatile - type qualifier preventing optimisations by compiler\n\n");
    // used in low level code when a memory location can be modified by hardware
    return;
}

void _while()
{
    printf("while - loop that repeats so long as given expression is true\n\n");

    while (true)
    {
        return;
    }

    return;
}

int main() 
{
    _auto();
    _break();
    _case();
    _char();
    _const();
    _continue();
    _default();
    _do();
    _double();
    _else();
    _enum();
    _extern();
    _float();
    _for();
    _goto();
    _if();
    _xinline();
    _int();
    _long();
    _register();
    _restrict();
    _return();
    _short();
    _signed();
    _sizeof();
    _static();
    _struct();
    _switch();
    _typedef();
    _union();
    _unsigned();
    _void();
    _volatile();
    _while();
    return 0;
}

/* keywords
    auto
    break
    case
    char
    const
    continue
    default
    do
    double
    else
    enum

    extern
    float
    for
    goto
    if
    inline 1, a
    int
    long
    register
    restrict 1, a
    return

    short
    signed
    sizeof
    static
    struct
    switch
    typedef
    union
    unsigned
    void
    volatile

    while
_Alignas 2, a
_Alignof 2, a
_Atomic 2, b
_Bool 1, a
_Complex 1, b
_Generic 2, a
_Imaginary 1, b
_Noreturn 2, a
_Static_assert 2, a
_Thread_local 2, b
*/