#include <stdbool.h>

bool ft_strcmp(char *s1, char *s2)
{
        for (int i = 0; s1[i] != '\0'; i++) {
                if (s1[i] != s2[i])
                        return false;
        }
        return true;
}
