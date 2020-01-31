#include "deptManager.h"
#include <stdio.h>

void deptAddAndTest(int deptNum){

  char* deptName;
  int j=0;
  while(j<empCount){

    printf("%s", "Please enter department name:");
    gets(deptName);

      if(strlen(deptName)=7){
      *dept[j]=deptName;
      j++;
    }else{
      printf("%s\n", "Invalid department length");
    }
  }

}
