#ifndef HADI_H_INCLUDED
#define HADI_H_INCLUDED
int length(char s[])
{
    int coun=0;
    int i;
    for(i=0; s[i] !='\0'; i++)
    {
        coun++;
    }
    return coun;
}


#endif // HADI_H_INCLUDED
