//This programme is used for settingmaps automatically

#include <stdio.h>
#include <stdlib.h>

int main(void){
  FILE *fp = NULL;
  int block,lenX,LenY;
  int buf;
  
  fp ＝ fopen("settingmap.txt","w+");

  print("please input: blocks-x-y:")
  scanf("%d-%d-%d",&block,&lenX,&LenY);

  do{

  }while(buf==10086);

  fclose(fp); 
  return 0;
}
