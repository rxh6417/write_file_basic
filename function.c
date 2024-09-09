#include <stdio.h>
#include <string.h>
#define DEM 30
#define SIZE 100
#include "write.c"

int main(){
    char names[DEM][SIZE] = {0}; 
    char types[DEM][SIZE] = {0};
    int HP[SIZE] = {0}; 
    int num = 0;

    

    printf("How many demons you discoverd? store data 30/30 can't be bigger than that  ");
    scanf("%d",&num);
    if(num >= DEM || num <= 0 ){
        printf("Please input valid numbers of demons");
        return 1;

    }
    printf("\n");
    
    

printf("------ Writing information -----------\n\n\n");


    for(int i = 0; i < num; i++){
        printf("\n Name %d: ",i + 1);
        scanf("%s",names[i]);

        printf("\n types : ",i + 1);
        scanf("%s",types[i]);

        printf("\n HP : ",i + 1);
        scanf("%d",&HP[i]);
    }

write_to_csv(num,names,types,HP);


printf("\n\nAll information stored successfully\n\n");

// calling the function using the variables used








    return 0;
}