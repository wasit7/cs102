#include <stdio.h>

int main(void)
{
    int studentID;
    int year;
    float GPA;
    FILE * fp;
    int i;

    //to write
//    fp=fopen("myfile.txt","w+");

//    for(i=0;i<3;i++){
//        printf("Enter student ID:");
//        scanf("%d",&studentID);
//        printf("year:");
//        scanf("%d",&year);
//        printf("GPA:");
//        scanf("%f",&GPA);
//        printf("\n");
//        fprintf(fp,"%8d %4d %5.2f\n",studentID,year,GPA);
//    }
//    fclose(fp);

    //to read
    fp=fopen("myfile.txt","r");
    printf("studentID year GPA\n");
    for(i=0;i<3;i++){
        fscanf(fp,"%d%d%f",&studentID,&year,&GPA);
        printf("%8d %4d %5.2f\n",studentID,year,GPA);
    }
    fclose(fp);
    return 0;
}

