#include <stdio.h>
#include <string.h>

int main() {

    char str[20];
    
    int count0=0,count1=0;
    printf("Enter a String:");
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++){
        
        if(str[i]=='0')count0++;
        else if(str[i]=='1') count1++;
        else break;
    
    }
    
    if(count0%2==0 && count1%2==0) printf("Accepted");
    else printf("Rejected");

    
  
  
  return 0;
}