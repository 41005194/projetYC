#include <stdio.h>

int main() {
	int nb_secret = 32;
	int nb_user;
	scanf("%d", &nb_user);
	if (nb_user > nb_secret) {
		printf("Trop grand !");
	} else if (nb_user < nb_secret) {
		printf("Trop petit !");
	} else {
		printf("Succès !");
	}
	return 0;
}
