#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int vertex;
} node;
node *adj[13];

void addEdge(int v, int w)
{
    node *q;

    q = (node *)malloc(sizeof(node));
    q->vertex = w;
    q->next = NULL;

    q->next = adj[v];
    adj[v] = q;
}

int main(void)
{
    int vertices = 5;

    // Graf'a kenar ekleme
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    // addEdge fonksiyonunun test edilmesi
    

    for (int i = 0; i < 4; i++)
    {
        printf("Vertex %d is connected to: ", i);
        node *temp = adj[i];
        while (temp != NULL)
        {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}