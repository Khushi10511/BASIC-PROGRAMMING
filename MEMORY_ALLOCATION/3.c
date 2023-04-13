#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

struct book{
    char title[25]; 
    char author[25];
    char publication[25]; 
    float price;
};

int main(){
    struct book *b; 
    int i,n, sl=1; 
    char auth[25];

    printf("\nEnter number of books:"); 
    scanf("%d",&n);

    b=(struct book *)malloc(n*sizeof(struct book)); 
    
    for(i=0; i<n; i++){

        printf("\nEnter book-%d data:\n", i+1); 

        printf("\nTitle: ");
        scanf("%s",b[i].title); 

        printf("\nAuthor: "); 
        scanf("%s",b[i].author);  

        printf("\nPublication: "); 
        scanf("%s",b[i].publication); 

        printf("\nPrice: "); 
        scanf("%f", &b[i].price);
    }

    printf("\nEnter the author's name:"); 
    scanf("%s",&auth);
    printf("\nThe books information of author %s are\n", auth); 
    printf("\nSl.No.\tTitle\t\tPublication\tPrice\n"); 
    printf("\n====\t\t===\t\t========\t\t===");
    
    for(i=0; i<n; i++){
        if(strcmp(b[i].author, auth)==0){
            printf("\n%d\t%s\t\t%s\t\t%f", sl++, b[i].title, b[i].publication, b[i].price);
        }
    }
    return 0;
}