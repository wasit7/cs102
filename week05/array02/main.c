#include <stdio.h>

int main(void)
{
    int n,i;
    int grade[5];//whatwill happend when n > 5
    int sum;
    printf("How many subjects did you take?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("For subject #%d, Please enter your grade :",i);
        scanf("%d",&grade[i]);
        if(grade[i]<0||4<grade[i]){
            printf("Error:invalid number!\n");
            i--;
        }
    }

    for(i=0;i<n;i++){
        printf("suject %d grade: %d\n",i, grade[i]);
        sum+=grade[i];
    }
    printf("Your GPA: %.2f\n", (float)sum/(float)n);
    return 0;
}

