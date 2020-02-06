#include "depManager.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void depTestandAdd(char* ptrDepNameArry[], int depCount) {

    int index=0;
    char *depNameInput=(char *) malloc(sizeof(char)*8);

            while (index < depCount) {
                    printf("%s\n", "Enter Department Name: ");
                    scanf("%s", depNameInput);
                    if (strlen(depNameInput) == 7) {
                        ptrDepNameArry[index]=depNameInput;
                        printf("%s", ptrDepNameArry[index]);
                        index++;
                    } else {
                        printf("Invalid length of DepName");
                    }
                }


}
