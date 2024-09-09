#include <stdio.h>
#include <string.h>
#define DEM 30
#define SIZE 100

// making a functiontion will recive data from the user at the same time its gonna write them in csv file.

int write_to_csv(
    int num,
    char names[][SIZE],
    char types [][SIZE],
    int HP[]
    
){
 // tell you implemation of this function
 FILE *poi;
 

 poi = fopen("list.csv","a");
 // error check while opening that file list.csv
        if(poi == NULL){
            printf("couldn't open the file, Hint: Maybe the file name is not correct or missing");
            return 1;
        }
fprintf(poi,"NAMES  TYPES   HP\n\n\n\n");
 //wrinting info line by line we use for loop

        for (int i = 0; i < num; i++) {  // Change `i <= num` to `i < num`
        fprintf(poi, "%s,%s,%d\n", names[i], types[i], HP[i]);
    }

 fclose(poi);
 return 0;



}
    
    
