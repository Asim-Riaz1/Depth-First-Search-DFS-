# Graph DFS Traversal (C++)

## Overview
This project demonstrates **Graph representation using adjacency lists** and implements **Depth First Search (DFS) traversal** in C++.

The graph is undirected and uses recursion to perform traversal.

## Features
- Graph representation using adjacency list.
- DFS traversal using recursion.
- Visited node tracking using boolean vector array.

## Data Structure Used

### Graph Class
Stores:
- `V` → Number of vertices.
- `l` → Array of adjacency lists using `list<int>`.

### Node Class
Note: The `Node` class is declared but not used in this implementation.

## Functions

### Graph(int V)
Constructor that:
- Initializes number of vertices.
- Allocates memory for adjacency list array dynamically.

### addEdge(int u, int v)
Adds an undirected edge between:
- Vertex `u` and vertex `v`.

Both directions are added to maintain undirected graph representation.

### dfsHelper(int u, vector<bool> &vis)
Recursive helper function that:
- Prints current node.
- Marks node as visited.
- Recursively visits all adjacent unvisited nodes.

### dfs()
Starts DFS traversal:
- Sets source vertex as 0.
- Initializes visited array.
- Calls recursive DFS helper function.

## How to Compile and Run

### Compile
```bash
g++ main.cpp -o dfs
Run
./dfs
Example Graph

Edges added in main():
0 — 1
1 — 2
1 — 3
2 — 4

DFS Traversal Output Example
0 1 2 4 3

Concepts Covered
Graph Data Structures
Adjacency List Representation
Depth First Search Algorithm
Recursion
Dynamic Memory Allocation

Possible Improvements
Add iterative DFS using stack.
Allow user input for graph construction.
Support directed and weighted graphs.

Author
Created for learning Data Structures and Algorithms in C++.
