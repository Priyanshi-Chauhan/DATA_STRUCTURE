#include<iostream>
using namespace std;

bool ratinmaze(char maze[10][10],int soln[][10] , int i, int j, int m , int n){
if(i==m && j==n){
    soln[i][j]=1;
//print the path
for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        cout<<soln[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
return true;
}
//some conditions imposed on the problem
if(i>m || j>n){           //
     return false;
}
if(maze[i][j]=='X'){
    return false;
}
//assume solution exist through current cell
soln[i][j]=1;
// recursive case
bool rightsuccess = ratinmaze(maze,soln,i,j+1,m,n);
bool downsuccess = ratinmaze (maze,soln,i+1,j,m,n);

//backtracking
soln[i][j]=0;
if(rightsuccess || downsuccess ){
     return true;
}
return false;

}
int main() {
    char maze[10][10]=  {"0000",
                        "00X0",
                        "000X",
                        "0X00",};
   int soln[10][10] =  {0};
   int m =4;
   int n= 4;
   bool ans= ratinmaze(maze,soln,0,0,m-1,n-1);
   if(ans ==false ){
    cout<<"path doesn't exist!";
   }
   return 0;}

