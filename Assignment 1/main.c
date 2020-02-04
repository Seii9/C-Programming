#include <stdio.h>
#include "helper.h"
#include "empManager.h"
#include "deptManager.h"
#include "assTable.h"

int main(){
  empTestandAdd();
  deptAddAndTest();
  initilaize2DArray(assTable,deptCount,empCount);
  // addEmployee(assTable, deptCount, empCount);
 return 0;
}
