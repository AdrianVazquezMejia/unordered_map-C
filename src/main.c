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

	size_t size = 10;
	unordered_map_t* test_hash_table = new_unordered_map(size);

	int expected_key = 1;
	int expected_value =1;
	int* actual_value_pointer ;

	//unordered_map_insert(test_hash_table,expected_key,expected_value);
	actual_value_pointer = unordered_map_find(test_hash_table,expected_key);

	if(actual_value_pointer==NULL){
		printf("Value Not found\n");
	}else{
		printf("Actual value [%d] and expected value [%d]\n",*actual_value_pointer,expected_value);
	}

	delete_map(test_hash_table);

	printf("Success");
}
