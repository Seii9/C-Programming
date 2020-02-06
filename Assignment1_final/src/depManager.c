#include "depManager.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void depTestandAdd(char* ptrDepNameArry[], int depCount) {

    int index;
//    char *depNameInput;
            for(index=0;index<depCount;index++) {
            	char *depNameInput=(char *) malloc(sizeof(char)*8);
                    printf("Enter Department Name: ");
                    scanf("%s", depNameInput);
                    if (strlen(depNameInput) == 7) {
                        ptrDepNameArry[index]=depNameInput;
                        printf("%s", ptrDepNameArry[index]);
                    } else {
                        printf("Invalid length of DepName");
                    }
                }


}
