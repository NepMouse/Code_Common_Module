#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void get_time(struct tm **lt);

void get_time(struct tm **lt)
{
    time_t t;
    time (&t);//获取Unix时间戳。
    *lt = localtime (&t);//转为时间结构。
    return;
}

int main(int argc, char **argv)
{
    struct tm *lt;
    get_time(&lt);//获取时间。
    printf ( "%d/%d/%d %d:%d:%d \n",lt->tm_year+1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);//输出结果
    return 0;
}
