#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;

    vector<vector<int> > seatingChart(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> seatingChart[i][j];
        }
    }

    int rowToReserve, colToReserve;
    cin >> rowToReserve >> colToReserve;
    rowToReserve -= 1;
    colToReserve -= 1;

    if (rowToReserve >= 0 && rowToReserve < rows && colToReserve >= 0 && colToReserve < cols && seatingChart[rowToReserve][colToReserve] == 0) {
        seatingChart[rowToReserve][colToReserve] = 1;  
    } else {
        cout << "Invalid reservation attempt! Either the seat is already reserved or out of bounds." << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << seatingChart[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}





