#include <stdio.h>

int segundos(int ho, int mi, int se) {
		int soma;
		soma=(se + (mi * 60) + (ho * 3600));
		return soma;
	}

int main () {

	int ho, mi, se;

	printf("Digite as horas, os minutos e os segundos: \n");
	scanf("%d%", &ho);
	scanf("%d", &mi);
	scanf("%d", &se);

	printf("O total de segundos e: %d",segundos(ho, mi, se));
}
