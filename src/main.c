//============================================================================
// Name        : FirstCpp.cpp
// Author      : Adri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include "unordered_map.h"
int main(){
	printf("Start the program\n");

	size_t size = 7;
	unordered_map_t* test_hash_table = new_unordered_map(size);

	//int expected_key = 1;
	int expected_value =1;
	int* actual_value_pointer ;

	unordered_map_insert(test_hash_table,1200,0);
	unordered_map_insert(test_hash_table,2400,1);
	unordered_map_insert(test_hash_table,4800,2);
	unordered_map_insert(test_hash_table,9600,3);
	unordered_map_insert(test_hash_table,19200,4);
	unordered_map_insert(test_hash_table,57600,5);
	unordered_map_insert(test_hash_table,115200,6);

	actual_value_pointer = unordered_map_find(test_hash_table,19200);

	if(actual_value_pointer==NULL){
		printf("Value Not found\n");
	}else{
		printf("Actual value [%d] and expected value [%d]\n",*actual_value_pointer,expected_value);
	}

	delete_map(test_hash_table);

	printf("Success");
}
