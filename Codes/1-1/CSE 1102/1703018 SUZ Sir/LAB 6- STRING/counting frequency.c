 #include<stdio.h>
 #include<string.h>
 int main()

 {
     char str1[100],str2[20],str3[30];
     int i=0,j=0,count=0;
     printf("Enter a text: ");
     gets(str1);
     printf("Enter a word to count: ");
     gets(str2);
     while(str1[i]!='\0'){
        while(str1[i]!=' ' && str1[i]!='\0')
            str3[j++]=str1[i++];
        str3[j]='\0';
        j=0;
        if((strcmp(str2,str3))==0)
            count++;
        if(str1[i]='\0')
            break;
        else
            i++;
        }
     printf("No. of words are: %d\n",count);
     return 0;

}

