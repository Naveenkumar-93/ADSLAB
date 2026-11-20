#include<stdio.h>
#define MAX 20
int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front=-1,rear=-1;
//inser an element into queue
void enqueue(int vertex)
{
if(rear == MAX-1)
return;
if(front ==-1)
front=0;
queue[++rear]=vertex;
}
//Delete an element from queue
int dequeue()
{
int vertex=queue[front++];
if(front > rear)
{
front=rear=-1;
}
return vertex;
}
//Breadth First search
void BFS(int start,int n)
{
int i,current;
for(i=0;i<n;i++)
visited[start]=1;
enqueue(start);
printf("BFS traversal");
while(front !=-1)
{
current=dequeue();
printf("%d",current);
for(i=0;i<n;i++)
{
if(adj[current][i]==1 && visited[i] ==0)
{
visited[i]=1;
enqueue(i);
}
}
}
printf("\n");
}
int main()
{
int n,i,j,start;
printf("enter number of vertices\n");
scanf("%d",&n);

if(n<=0 || n>MAX)
{
printf("invalid number of vertices\n");
return 0;
}
printf("Enter adjacency matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}
}
printf("enter starting vertex (0 to %d): ", n - 1);
scanf("%d", &start);
if (start < 0 || start >= n) {
printf("invalid starting vertex\n");
return 0;
}
BFS(start, n);
return 0;
}




