#include <stdio.h>
#include <stdlib.h>
#include "my_strings.h"
#include "chess.h"

int main(int argc, char *argv[]){

	int aux;
	char *input;
	TABLE *table = create_table();
	read_table(stdin, table);
	print_fen(stdout, table);

	while(((input = my_get_line_valid(stdin, &aux)) != NULL) && move_piece(input, table));
	
	delete_table(&table);

	return 0;
}
