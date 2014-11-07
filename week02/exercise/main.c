#include <stdio.h>
#include <math.h>
int main(void)
{
//    int x=1, total=0, y;

//    while(x<=10){
//        y=x*x;
//        printf("%d\n",y);
//        total+=y;
//        ++x;
//    }
//    printf("Total is %d\n",total);



//    int i, sum=0;
//    for(i=0; i<10; i++){
//        switch(i){
//            case 0:
//            case 1:
//            case 2:
//            case 3:
//            case 5:
//                sum++;
//            case 4:
//                break;
//            default:
//                break;
//        }
//    }
//    printf("sum = %d\n", sum);



    float theta = 1.234f;
    float x = sin(theta)*sin(theta)+cos(theta)*cos(theta);
    printf("x = %5.3f\n", x);
    return 0;
}

