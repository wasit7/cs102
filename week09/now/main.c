#include <stdio.h>
#include <time.h>

void now(){
    time_t result;
    result = time(NULL);
    printf("%s %u secs since the Epoch\n", asctime(localtime(&result)), result);

}


int main(void)
{
    int i;
    now();
    sleep(3);
    printf("after for loop\n");
    now();
    return 0;
}

