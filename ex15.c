#include <stdio.h>

int main(int argc, char *argv[]) {
	//Create two arrays, one of ints, one of strings.
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
			"Alan", "Sam",
			"Tom", "Jack", "John"};
			
	//Get the number of entries.
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	//Print them all using array indexing.
	for(i = 0;i < count; i++) {
		printf("%s is %d years old.\n", names[i], ages[i]);
	}
	
	printf("---\n");
	
	//Set up pointers pointing to the start of the arrays.
	int *cur_age = ages;
	char **cur_name = names;
	
	//Print them all using pointers.
	for(i = 0; i < count; i++) {
		printf("%s is %d years old.\n", *(cur_name + i),
				*(cur_age + 1));
	}
	
	printf("---\n");
	
	//Print them all using pointers like arrays.
	for(i = 0; i < count; i++) {
		printf("%s is still %d years old!\n", cur_name[i],
				cur_age[i]);
	}
	
	printf("---\n");
	
	//Print them all using a ridiculous way.
	for(cur_name = names, cur_age = ages; 
			(cur_age - ages) < count;
			cur_name++, cur_age++) {
		printf("%s is STILL %d years old!\n",
				*cur_name, *cur_age);
	}
	
	return 0;
	
}
