//INPUT- 4 10 20 20 30 20
//OUTPUT - The number of times the key element is repeated is 2
#include<stdio.h>
int main(){
 int n,flag=0,i,key,a[10],c=0;
 printf("Enter size of the array, array elemnts and the key");
 scanf("%d",&n);
 //printf("Enter array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 //printf("Enter an integer value : ");
 scanf("%d",&key);
 
 for(i=0;i<n;i++)
 {
 if(key==a[i]) 
 {
 //flag=1;
 c++;
 } 
 }
 printf("The number of times the key element is repeated is %d",c);
 
 return(0);
}


