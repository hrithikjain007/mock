
//insert element to an array 

#include<stdio.h>
#include<stdlib.h>
void insert(int *);
void main()
{
 int a[10],i,n,pos;
for(i=0;i<5;i++)
{
printf("\n enter the elements\n");
  scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
printf(" %d ",a[i]);


 int *p;
 void (*re)(int *p)=&insert;
     
 p=malloc(sizeof(int)*5);
   for(i=0;i<5;i++)
   p[i]=a[i];
 re(p);
 
}

  void insert(int *p)
 {
    int i,n,pos,*new;
     new=realloc(p,sizeof(int)*6);
     new[i]=p[i];
    
     printf("\n enter element to insert\n");
          scanf("%d",&n);
             printf("\n enter position to insert\n");
             scanf("%d",&pos);
 
              for(i=4;i>=pos;--i)
               {
                  new[i+1]=new[i];
                }
     
          new[pos]=n;


          for(i=0;i<6;i++)
           printf(" %d ",new[i]);
  
    
    
 
    
 
}
