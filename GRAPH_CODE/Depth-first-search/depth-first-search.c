#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    struct node *next;
    int vertex;
} node;
node *adj[13];
int visited[13];

void addEdge(int v, int w)
{
    node *q;

    q = (node *)malloc(sizeof(node));
    q->vertex = w;
    q->next = NULL;

    q->next = adj[v];
    adj[v] = q;
}
void depthFirstSearch(int i)
{
    node *p = adj[i];
    visited[i] = 1;
    while (p != NULL)
    {
        i = p->vertex;
        if (!visited[i])
        {
            depthFirstSearch(i);
        }
        p = p->next;
    }
}
int main(void)
{
    int vertices = 5;

    // Graf'a kenar ekleme
    addEdge(0, 1);
    addEdge(1, 0);
    addEdge(0, 4);
    addEdge(4, 0);
    addEdge(1, 2);
    addEdge(2, 1);
    addEdge(1, 3);
    addEdge(3, 1);
    addEdge(1, 4);
    addEdge(4, 1);
    addEdge(2, 3);
    addEdge(3, 2);
    addEdge(3, 4);
    addEdge(4, 3);

    // addEdge fonksiyonunun test edilmesi
    memset(visited, 0, sizeof(visited));

    // Örneğin, 0 numaralı düğümden başlayarak depthFirstSearch'ı çağırabiliriz
    depthFirstSearch(0);

    // Ziyaret edilen düğümleri yazdırmak için visited dizisini kontrol edebiliriz
    for (int i = 0; i < 13; i++)
    {
        if (visited[i])
        {
            printf("Node %d ziyaret edildi.\n", i);
        }
        else
        {
            printf("Node %d ziyaret edilmedi.\n", i);
        }
    }

    printf("\n");

    return 0;
}