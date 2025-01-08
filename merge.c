#include<stdio.h>
#include<stdlib.h>
void merge_array(int arr1[],int arr2[],int arr3[],int s1,int s2)
{
int i=0, j=0, k=0;
while(i<s1&&j<s2)
{
if(arr1[i]<arr2[j])
{
arr3[k++]=arr1[i++];
}
else
{
arr3[k++]=arr2[j++];
}
}
while(i<s1)
{
arr3[k++]=arr1[i++];
}
while(j<s2)
{
arr3[k++]=arr2[j++];
}
}
int main()
{
int s1,s2,i,j;
printf("enter the size of 1st array");
scanf("%d",&s1);
int *arr1=(int *)malloc (s1 * sizeof(int));
printf("enter the elements in 1st array:");
for(i=0;i<s1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the size of 2nd array");
scanf("%d",&s2);
int *arr2=(int *)malloc(s2 * sizeof(int));
printf("enter the elements in 2nd array:");
for(j=0;j<s2;j++)
{
scanf("%d",&arr2[j]);
}
int *arr3=(int *)malloc(s1 * sizeof(int));
merge_array(arr1,arr2,arr3,s1,s2);
printf("mereged array:");
for(i=0;i<s1+s2;i++)
{
printf("%d", arr3[i]);
}
free(arr1);
free(arr2);
free(arr3);
return 0;
}
