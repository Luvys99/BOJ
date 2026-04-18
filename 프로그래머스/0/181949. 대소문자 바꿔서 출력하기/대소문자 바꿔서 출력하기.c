#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    for(int i = 0; i < strlen(s1); i++)
    {
        if(s1[i] > 90)
        {
            s1[i] -= 32;
        }
        else
        {
            s1[i] += 32;
        }
    }
    
    printf("%s", s1);
    
    return 0;
}
