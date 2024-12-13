#include<stdio.h>
int main(){
// int card_count = 11;
//   if (card_count > 10)
//   puts("The deck is hot. Increase bet.");



// }


/* Assume name shorter than 20 chars. */
// char ex[20];
// puts("Enter name: ");
// scanf("%s", ex);
// printf("Dear %s.\n\n\tYou're history.\n", ex);

// }


char suit;
printf("enter char h,d,s,c for cards\n");
scanf("%c",&suit);
    switch(suit) {
    case 'C':
    puts("Clubs");
    break;
    case 'D':
    puts("Diamonds");
    break;
    case 'H':
    puts("Hearts");
    break;
    default:
    puts("Spades");
    }
}