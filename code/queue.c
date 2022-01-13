#include<stdio.h>
#include<stdlib.h>
#define MaxQueueSize 100

typedef struct
{
    int queue[MaxQueueSize];
    int front;
    int rear;
} QueueADT;

QueueADT CreatQueue()
{
    QueueADT NewQueue;
    NewQueue.front = -1;
    NewQueue.rear = -1;
    return NewQueue;
}

