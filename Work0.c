#include <stdio.h>
#include <stdlib.h>

//Jackson Morgan Work 0

int mult(){
  int i = 1;
  int s = 0;
  while(i < 100){
    if( (i % 5) == 0){
      s += i;
    }
    else{
      if((i % 3) == 0){
	s += i;
      }
    }
    i ++;
  }
  return s;
}

int smallmult(){
  int ctr = 0;
  int terminate = 0;
  


}






int main(){
  printf("%d\n", mult());

}