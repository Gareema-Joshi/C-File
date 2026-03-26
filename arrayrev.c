#include <stdio.h>
#include<string.h>
int main()
{
 int arr[5]={10,20,3,45,59};
 int n=sizeof(arr)/sizeof(arr[0]);
 int sum=0;
 for(int i=0;i<n;i++)
 {
   sum+=arr[i];
 }
 printf("Sum : %d",sum);

 int arr2[5]={10,15,55,88,78};
 int pro=1;
 int n2=sizeof(arr2)/sizeof(arr2[0]);
 for(int i=0;i<n2;i++)
 {
   if(arr[i]%2==0)
   {
     pro*=arr2[i];
   }
 }
 printf("\nProduct : %d",pro);
 printf("\nSum of digit of element:");
 int sum2=0;
 for(int i=0;i<n;i++)
 {
   sum2=0;
   while(arr[i]!=0)
   {
     int mod=arr[i]%10;
     sum2+=mod;
     arr[i]=arr[i]/10;
   }
   printf("\n%d",sum2);
 }
 printf("\nSum of prime digit of element:");
 int arr3[5]={10,50,59,89,45};
 for(int i=0;i<5;i++)
 {
   int found=0;
   int sum3=0;
   if(arr3[i] <= 1)
           found = 1;

   for(int j=2;j<arr3[i];j++)
   {
     if(arr3[i]%j==0)
     {
       found=1;
       break;
     }
   }
   if(found==0)
   {
     while(arr3[i]!=0)
     {
       int mod=arr3[i]%10;
       sum3+=mod;
      arr3[i]/=10;
     }
    printf("\n%d",sum3);
   }
 }
 printf("\nProduct of prime digit of element:");
 int arr4[5]={10,50,59,89,45};
 for(int i=0;i<5;i++)
 {
   int found=0;
   int pro3=1;
   if(arr4[i] <= 1)
           found = 1;

   for(int j=2;j<arr4[i];j++)
   {
     if(arr4[i]%j==0)
     {
       found=1;
       break;
     }
   }
   if(found==0)
   {
     while(arr4[i]!=0)
     {
       int mod=arr4[i]%10;
       pro3*=mod;
       arr4[i]/=10;
     }
     printf("\n%d",pro3);
   }
}
 printf("\nName with even count:");
 char arr5[5][20]={"Shavni","Aarya","Meera","Siya","Shivanya"};
 for (int i=0;i<5;i++)
 {
   if (strlen(arr5[i])%2==0)
   {
     printf("\n%s",arr5[i]);


   }
 }
 printf("\nName starting with vowel:");
 for(int i=0;i<n;i++)
 {
   if(arr5[i][0]=='a'||arr5[i][0]=='e'||arr5[i][0]=='i'||arr5[i][0]=='o',arr5[i][0]=='u'||arr5[i][0]=='A'
   ||arr5[i][0]=='E'||arr5[i][0]=='I'||arr5[i][0]=='O'||arr5[i][0]=='U')
   {
     printf("\n%s",arr5[i]);
   }
 }
}
