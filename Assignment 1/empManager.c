#include "empManager.h"
#include <stdio.h>

void empTestandAdd(int empCount){
  int empIDInput;
  int j=0;
  while(j<empCount){

    printf("%s", "Please Enter Employee ID: ");
    scanf("%d",empIdInput);
    int countlen=0;
      while(empIdInput!=0){
        empId/10;
        countlen++;
        }
      if(countlen==5){
      *empID[j]=empIdInput;
      empIndexCount++;
      j++;
    }else{
      printf("%s\n", "Invalid employee ID length");
    }
  }
}
