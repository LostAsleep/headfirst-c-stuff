/*
 * Program to evaluate face values.
 * This code is released under the Vegas Public License.
 * (c)2014, The College Blackjack Team.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
        char card_name[3];
        puts("Enter the card name: ");
        scanf("%2s", card_name);
        int val = 0;

        switch(card_name[0]) {
        case 'K':
        case 'k':
        case 'Q':
        case 'q':
        case 'J':
        case 'j':
                val = 10;
                break;
        case 'A':
        case 'a':
                val = 11;
                break;
        default:
                val = atoi(card_name);
        }

        printf("The card value is: %i\n", val);
        // Check if the value is 3 to 6
        if ((val > 2) && (val < 7)) {
                puts("Count has gone up");
        // Otherwise check if the card was 10, J, Q, K
        } else if (val == 10) {
                puts("Count has gone down");
        }
        return 0;
}
