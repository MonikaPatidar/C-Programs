int main(){

   int i, j, count, temp, number[5];
    printf("Enter 5 Elements");
   for(i=0;i<5;i++)
      scanf("%d",&number[i]);

   for(i=0;i<5;i++){
      for(j=i+1;j<5;j++){
         if(number[i]>number[j]){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<5;i++)
      printf(" %d",number[i]);

   return 0;
}
