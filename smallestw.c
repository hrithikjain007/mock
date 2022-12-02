 #include<stdio.h>
 #include<string.h>
 void main()
 {
    char s[100],t[20];;
     int l,wl=0,sw,pos,i,j;
   printf("\n enter the sentence \n");
   scanf("%[^\n]",s);
   l= strlen(s);  
   for(i=0;i<=l;i++)
   {
           printf("\n 1111111111\n");
        
     if((s[i]!=' ')&&(s[i]!='\0'))
      {
         printf("\n 222222222\n");
         wl++;
         
          continue;
       }
        if(wl<sw||sw==0)
       {
               printf("\n 33333333333\n");
          sw=wl;
          pos=i-sw;
         // pos=i;
        // printf("i=%d wl=%d",i,sw);
         
       }
       wl=0;
   }    
        
          for(i=0;i<sw;i++)
          
          t[i]=s[pos+i];
         t[i]='\0';
         printf("\n smallest string is   %s \n",t);
         
 }
