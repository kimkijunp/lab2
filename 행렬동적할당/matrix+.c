#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> addMatrices(vector<vector<int>>& matrix1, vector<vector<int>>& matrix2) {
    int rows = matrix1.size();
    int cols = matrix1[0].size();
		    		    
    vector<vector<int>> result(rows, vector<int>(cols, 0));
		   
    for (int i = 0; i < rows; i++) {
	for (int j = 0; j < cols; j++) {
             result[i][j] = matrix1[i][j] + matrix2[i][j];
	}
    }
			    	
    return result;
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix1(rows, vector<int>(cols));
    vector<vector<int>> matrix2(rows, vector<int>(cols));

    cout << "Enter elements for matrix 1:\n";
    for (int i = 0; i < rows; i++) {
	    for (int j = 0; j < cols; j++) {
		    cin >> matrix1[i][j];
	    }
    }

    cout << "Enter elements for matrix 2:\n";
    for (int i = 0; i < rows; i++) {
	    for (int j = 0; j < cols; j++) {
		    cin >> matrix2[i][j];
	    }
    }

    vector<vector<int>> result = addMatrices(matrix1, matrix2);

    cout << "Resultant matrix after addition:\n";
    for (int i = 0; i < rows; i++) {
	    for (int j = 0; j < cols; j++) {
		    cout << result[i][j] << " ";
	    }
	    cout << endl;
    }

    return 0;
}
