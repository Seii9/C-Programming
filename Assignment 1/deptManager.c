#include "deptManager.h"
#include <stdio.h>

void deptAddAndTest(){
  
  printf("%s\n", "Please enter the number of departments in the company");
  scanf("%d\n",deptCount);

  char deptName[deptCount];
  j=0;
  while(j<deptCount){

    printf("%s", "Please enter department name: ");
    gets((char)(deptName));

      if((int)strlen(deptName)==7){
      deptName[j]=deptName;
      j++;
    }else{
      printf("%s\n", "Invalid department length");
    }
  }

}
