#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "int_sort.h"
#include "str_sort.h"
int main(){
	typedef struct emp_struct{
		char* name;
		int employee_no;
		float salary, tax_to_date;
	}Employee;
	Employee data[3];
	printf("Enter the emp data:\n 1.Name, \t 2. emp_no, \n 3.salary \t 4. tax_to_date\n");
	int i;
	for(i = 0; i < 3; i++){
		data[i].name = (char*) malloc(255);	
		scanf("%s%d%f%f", data[i].name, &data[i].employee_no, &data[i].salary, &data[i].tax_to_date);
	}
	for(i = 0; i < 3; i++)
		printf("%s, %d, %f, %f\n", data[i].name, data[i].employee_no, data[i].salary, data[i].tax_to_date);
	sort_string(data, 3);
	for(i = 0; i < 3; i++)
		printf("%s, %d, %f, %f\n", data[i].name, data[i].employee_no, data[i].salary, data[i].tax_to_date);
	
	return 0;
	
}
