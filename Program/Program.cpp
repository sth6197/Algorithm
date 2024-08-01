#include <iostream>

using namespace std;

#define SIZE 6
#define INF 10000000

class Graph
{
private:
    int weight[SIZE][SIZE] = 
    {
      { 0, 2, 5, 3, INF, INF },
      { 2, 0, 7, INF, INF, 9 },
      { 5, 7, 0, 1, 5, 2 },
      { 3, INF, 1, 0, 7, INF },
      { INF, INF, 2, 7, 0, 2 },
      { INF, 9, 5, INF, 2, 0 } 
    };

    int distance[SIZE];
    bool visited[SIZE];


public:
    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = 0;
        }
    }
    
    int SmallNode()
    {
        int min = INF;
        int minval = 0;

        for (int i = 0; i < SIZE; i++)
        {
            if (distance[i] < min && visited[i] == false)
            {
                min = distance[i];
                minval = i;
            }
        }
        return minval;
    }

    void Dijkstra(int start)
    {
        for (int i = 0; i < SIZE; i++)
        {
            distance[i] = weight[start][i];
        }

        // 방문처리
        visited[start] = true;
        
        for (int i = 0; i < SIZE - 1; i++)
        {
           i = SmallNode();
        }

        // 방문처리
        visited[start] = true;

        for (int i = 0; i < SIZE; i++)
        {
            

        }

    }

};

int main()
{
#pragma region 다익스트라 알고리즘
    // 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
    // 알고리즘입니다.

    // 1. distance 배열에 weight[시작점 노드]의 값들로 초기화합니다.

    // 2. 시작점을 방문 처리합니다.

    // 3. distance 배열에서 최소 비용 노드를 찾고 방문 처리합니다.
    //    단, 이미 방문한 노드는 제외합니다.

    // 4. 최소 비용 노드를 거쳐갈 지 고민해서 distance 배열을 갱신합니다.
    //    단, 이미 방문한 노드는 제외합니다.

    // 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

    // 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를 방문하고,
    // 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.

    Graph graph;
    
    graph.Dijkstra(1);


#pragma endregion




    return 0;
}