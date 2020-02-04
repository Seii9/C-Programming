#include "empManager.h"
#include <stdio.h>


void empTestandAdd(){
  printf("%s\n", "Please enter the number of employees you would like to add");
  scanf("%d\n",empCount);

  int empId[empCount];

  while(empIndexCount<empCount){

    printf("%s", "Please Enter Employee ID: ");
    scanf("%d",empIdInput);
    int countlen=0;
      while(empIdInput!=0){
        empIdInput/10;
        countlen++;
        }
      if(countlen==5){
      empId[empIndexCount]= empIdInput;
      empIndexCount;
      }else{
      printf("%s\n", "Invalid employee ID length");
    }
  }
}
