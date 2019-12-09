

ALGORITHM OR THE PSEUDOCODE FOR THE DFS
  
1.Given a graph , visit any vertex of your own choice.
2.Push the vertex into the stack.
            Top=vertex;
3.Visit any adjacent vertex of the visited vertex (top of stack).
4.Push it into the stack.
            top=top+1;
5.Similarly repeat step 3 and 4 for the top of the stack until the vertex which has no unvisited adjacent vertex.
6.Pop the top of the stack when there is no adjacent unvisited vertex.
           top= top-1;
7.And backtrack to find the unvisited adjacent vertex of top.
8.If no adjacent unvisited vertex then pop top again.
9. Else visit the unvisited vertex of top and push it into the stack.
10.Repeat steps 7,8,9  untill the stack becomes empty .
11.The resultant tree so found is called spanning tree.And the dotted edges are called back edges.
