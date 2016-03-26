#include <stdio.h>
#include <string.h>

#define BLACK 0
#define WHITE 1

struct animal {
	int color;
	char name[25];
};

/* XXX:Combine with typedef! */
typedef struct {
	int color;
	int speed;
} car_t;

void cat(void)
{
	struct animal cat;
	cat.color = BLACK;
	strcpy(cat.name, "oliver");

	printf("Cat:\n");

	if(cat.color == BLACK) {
		printf("color is black\n");
	} else {
		printf("color is white\n");
	}

	printf("name is %s\n", cat.name);
}

void car(void)
{
	/* C99 structure initialization  */
	car_t porsche = {
		.color = WHITE,
		.speed = 250
	};	

	/* XXX: Pointer! */
	car_t *car_ptr = &porsche;

	printf("\nCar:\n");

	if(car_ptr->color == BLACK) {
		printf("color is black\n");
	} else {
		printf("color is white\n");
	}

	printf("speed = %dkm/hr\n", car_ptr->speed);

}

int main(void)
{
	cat();
	car();

	return 0;
}
