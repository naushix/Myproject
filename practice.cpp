#include <iostream>
using namespace std;
/*int main(){
    for(int i = 0; i < 5; i++){
        for(int n = 4 - i; n > 0; n--){
            cout << " ";
        }
        for(int j = 0; j < (2*i+1); j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}*/
/*int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
            cout << " ";
        }
        for(int n = 0; n < 2*i+1; n++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 0; i < 4; i++){
        for(int j = -1; j < i; j++){
            cout << " ";
        }
        for(int n = 7; n >= 2*i+1; n--){
            cout << "*";
        }
        cout << "\n";
    }
}*/
/*void transposeMatrix(int row, int cols, int matrix[3][4], int transmatrix[4][3]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            transmatrix[j][i] = matrix[i][j];
        }
    }
}
int main(){
    int matrix[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row = 3;
    int cols = 4;
    int transmatrix[4][3];

    transposeMatrix(row,cols,matrix,transmatrix);

    cout << "原始矩陣:\n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n轉置矩陣:\n";
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < row; j++){
            cout << transmatrix[i][j] << " ";
        }
        cout << "\n";
    }
}*/
/*int main(){
    int matrix[10] = {53,76,23,45,67,89,12,34,56,78};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(matrix[j] > matrix[j + 1]){
                int temp = matrix[j];
                matrix[j] = matrix[j + 1];
                matrix[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array:";
    for(int i = 0; i < 10; i++){
        cout << matrix[i] << " ";
    }
    cout << "\n";
    return 0;
}*/
/*int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= b){
        a <= c ? cout << "min:" << a : cout << "min:" << c;
    }
}*/
/*int main(){
    int a = 10 ,b = 10;
    if (a == 10 or b == 10){
        cout << "Nice \n";
    }
}*/
/*int main(){
    int a,b,c = 10;
    cout << a << "\n" << b << "\n" << c << "\n";
}*/
int main(){
    string str = "Hello World";
    std::cout << "Hello World" << endl;
    cout << str << endl;
    return 0;
}