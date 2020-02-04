#include "assTable.h"

void define2DArray(int *array, char deptCount, int empCount){

}

void addEmployee(int *array, size_t deptCount, size_t empCount) {
    int row, column;
    printf("%s", "Please enter Employee: ");

    scanf("%d",empIdInput);
    int countlen=0;
      while(empIdInput!=0){
        empId/10;
        countlen++;
        }
      if(countlen==5){
        row = empIdInput;

        printf("%s", "Please enter Department Name: ");

        scanf("%s\n", deptIdInput);
      }else{
      printf("%s\n", "Invalid employee ID length");
      }



              // *(array + empID * deptID + column) = 1; This will be used
              // once indexes within 1D arrays have been determined for
              // emp and dept inputs.

}