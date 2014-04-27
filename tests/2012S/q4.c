#include <stdio.h>
#include <stdlib.h>

#define MAXNAME 24

struct giftcard {
	char name[MAXNAME];
	double balance;
};

/*
QUESTION A)
Write a function adjust_amount that takes a card and a charge and attempts to reduce the balance on the card by the amount charge */
/*If there is enough money on the card, the balance is reduced and the function returns 0 */
/*if there is not enough money on the card, the balance is reduced to 0 and the amount paid by the giftcard is returned*/

double adjust_amount(struct giftcard *giftcard, double charge) {

	if (charge <= giftcard->balance) {
		giftcard->balance -= charge;
		return 0;
	}

	else {
		double temp = giftcard->balance;
		giftcard->balance = 0;
		return temp;
	}
}

int main(void) {

	/*QUESTION B)
	Write C code that creates a struct to represent Karen's card with balance $3.98
	Then, call your adjust_amount function to charge $2.05 on her card
	*/

	struct giftcard *karens_card = malloc(sizeof(struct giftcard));
	karens_card->balance = 3.98;

	printf("Karen's balance before the charge is %f\n", karens_card->balance);

	adjust_amount(karens_card, 2.05);

	printf("Karen's balance after the charge is %f\n", karens_card->balance);

	return 0;
}
