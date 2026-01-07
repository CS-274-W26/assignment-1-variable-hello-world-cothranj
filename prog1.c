#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>
// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	srand(time(NULL));
	int myrand = rand()%10;

	if (myrand <= 4) {printf("Eat more beef, kick less cats\n");}
	else if (myrand <= 9 ) {printf("FRODO LIVES\n");}
	else {printf("Larn is the best roguelike\n");}

	printf("The random number was: %d\n", myrand);
	return 0;
}
