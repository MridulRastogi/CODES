#include<bits/stdc++.h>
using namespace std;

void search(int ROW,int COL,int mat[][COL], int fromRow, int toRow, int fromCol, int toCol, int key)
{
	int i = fromRow + (toRow-fromRow) /2;
	int j = fromCol + (toCol-fromCol) /2;
	if (mat[i][j] == key)
	      cout<<"Found "<<key<<" at "<<i<<" "<<j<<endl;
	else
	{
		if(i!=toRow || j!=fromCol)
            search(mat, fromRow, i, j, toCol, key);
        if (fromRow == toRow && fromCol + 1 == toCol)
		    if (mat[fromRow][toCol] == key)
                cout<<"Found "<<key<<" at "<<fromRow<<" "<<toCol<<endl;
		if (mat[i][j]<key)
			if (i + 1 <= toRow)
                search(mat, i + 1, toRow, fromCol, toCol, key);
        else
			if (j - 1 >= fromCol)
			    search(mat, fromRow, toRow, fromCol, j - 1, key);
	}
}

int main()
{
    int ROW = 4, COL = 4;
	int mat[ROW][COL] = { {10, 20, 30, 40},
	    				  {15, 25, 35, 45},
						  {27, 29, 37, 48},
						  {32, 33, 39, 50}};
	int key = 50;
	for (int i = 0; i < ROW; i++)
 	  for (int j = 0; j < COL; j++)
		search(ROW, COL, mat, 0, ROW-1, 0, COL-1, mat[i][j]);
	return 0;
}
