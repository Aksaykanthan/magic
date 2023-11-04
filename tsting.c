#include <stdio.h>
int main()
{
  int list1[] = {1, 2, 5, 9,12};
  int list2[] = {3, 4, 8, 10,11};

  int size1 = sizeof(list1) / sizeof(list1[0]);
  int size2 = sizeof(list2) / sizeof(list2[0]);

  int newList[size1 + size2];
  int i=0,j=0,k=0;

  while (size1+size2 != i+j){
    if ((list1[i]<list2[j]) || (j==size1)){
      newList[k] = list1[i];
      i++;
    } else{
      newList[k] = list2[j];
      j++;
    }
  k++;
  }

for (int i = 0;i<size1+size2;i++){
  printf("%d ",newList[i]);
}
  printf("\n");

  return 0;
}