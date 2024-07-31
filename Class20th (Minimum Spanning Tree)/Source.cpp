﻿#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 8

class Graph
{
private:
    class Edge
    {
    private:
        int x;
        int y;
        int distance;

    public:
        Edge(int x, int y, int distance)
        {
            this->x = x;
            this->y = y;
            this->distance = distance;
        }

        int& X()
        {
            return x;
        }

        int& Y()
        {
            return y;
        }

        int& Distance()
        {
            return distance;
        }

        bool operator < (Edge& edge)
        {
            return this->distance < edge.distance;
        }
    };

    vector<Edge> graph;

    int cost;
    int parent[SIZE];

public:
    Graph()
    {
        cost = 0;

        for (int i = 0; i < SIZE; i++)
        {
            parent[i] = i;
        }
    }

    void Insert(int x, int y, int distance)
    {
        graph.push_back(Edge(x, y, distance));
    }

    int Find(int x)
    {
        if (x == parent[x])
        {
            return x;
        }
        else
        {
            return parent[x] = Find(parent[x]);
        }
    }

    void Union(int x, int y)
    {
        x = Find(x);
        y = Find(y);

        if (x < y)
        {
            parent[y] = x;
        }
        else
        {
            parent[x] = y;
        }
    }

    bool Same(int x, int y)
    {
        return Find(x) == Find(y);
    }

    void Kruskal()
    {
        sort(graph.begin(), graph.end());

        for (int i = 0; i < graph.size(); i++)
        {
            if (Same(graph[i].X(), graph[i].Y()) == false)
            {
                cost += graph[i].Distance();
                Union(graph[i].X(), graph[i].Y());
            }
        }
        cout << "Graph 최소 비용 : " << cost << endl;
    }
};

int main()
{
#pragma region 신장 트리
    // 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는
    // 부분 그래프로, 그래프의 모든 정점을 최소 비용으로 연결하는 트리입니다.

    // 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개 입니다.

    // 최소 비용 신장 트리
    // 그래프의 간선들의 가중치 합이 최소인 신장 트리

    Graph edge;

    edge.Insert(1, 7, 10);
    edge.Insert(1, 4, 28);
    edge.Insert(1, 2, 66);
    edge.Insert(1, 5, 19);

    edge.Insert(2, 4, 25);
    edge.Insert(2, 5, 60);

    edge.Insert(3, 5, 21);
    edge.Insert(3, 6, 35);

    edge.Insert(4, 7, 15);

    edge.Insert(5, 6, 40);

    edge.Kruskal();
#pragma endregion






    return 0;
}