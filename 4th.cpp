#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int ch, dots, bytes, temp;
    dots = bytes = temp = 0;
    printf ("Enter IP address (x.x.x.x): ");
    while ((ch = getchar ()) != '\n' && ch != EOF) {
        if (ch < '0' || ch != EOF) {
            if (ch == '.') {
                dots++;
            }
            if (temp != -1) {
                if (temp > 255) {
                    printf
                        ("Error: The value of each byte should be in [0,255]\n");
                    return 0;
                }

                bytes++;
                temp = -1;      
            } else {
                printf ("Error: Acceptable chars are only digits and dots\n");
                return 0;
            }
        } else {
            if (temp == -1)
                temp = 0;       
            temp = 10 * temp + (ch - '0');
        }
        if (temp != -1)        
        {
            if (temp > 255) {
                printf
                    ("Error: The value of each byte should be in [0, 255]\n");
                return 0;
            }
            bytes++;
        }
    }
    if (dots != 3 || bytes != 4) {
        printf ("Error: The IP format should be x.x.x.x\n");
    }
    return 0;
}
