#include<stdio.h>
#include<string.h>
#define success 1
#define failed 0
int E(),Edash(),T(),Tdash(),F();
const char *cursor;
char string[64];
int main() 
{
    puts("ENTER STRING");
    scanf("%s,string");
    cursor=string;
    puts(" ");
    puts("INPUT       ACTION");
    puts("------------------------------");
    if(E()&&*cursor=='\0')
    {
        puts("------------------------------");
        puts("string is successfully parsed\n");
        return 0;
    }
    else
    {
        puts("------------------------------");
        puts("error in the parser");
        return 1;
    }
}
int E()
{
    printf("%-16s E->TE'\n",cursor);
    if(T())
    {
        if(Edash())
        {
            return success;
        }
        else
        {
            return failed;
        }
    }
    else
    {
        return failed;
    }
}
int Edash()
{
    if(*cursor=='+')
    {
        printf("%-16s E'->+TE'\n",cursor);
        cursor++;
        if(T())
        {
            if(Edash())
            {
                return success;
            }
            else
            {
                return failed;
            }
        }
        else
        {
            return failed;
        }
    }
    else
    {
        printf("%-16s E'->$\n",cursor);
        return success;
    }
}
int T()
{
    printf("%-16s T->FT'\n",cursor);
    if(F())
    {
        if(Tdash())
        {
            return success;
        }
        else
        {
            return failed;
        }
    }
    else
    {
        return failed;
    }
}
int Tdash()
{
    if(*cursor=='*')
    {
        printf("%-16s T'->*FT'\n",cursor);
        cursor++;
        if(F())
        {
            if(Tdash())
            {
                return success;
            }
            else
            {
                return failed;
            }
        }
        else
        {
            return failed;
        }
    }
    else
    {
        printf("%-16s T'->$\n",cursor);
        return success;
    }
}
int F()
{
    if(*cursor=='(')
    {
        printf("%-16s F->(E)\n",cursor);
        if(E())
        {
            if(*cursor==')')
            {
                return success;
            }
            else
            {
                return failed;
            }
        }
        else
        {
            return failed;
        }
    }
    else if(*cursor=='i')
    {
        printf("%-16s F->i\n",cursor);
        cursor++;
        return success;
    }
    else 
    {
        return failed;
    }
}