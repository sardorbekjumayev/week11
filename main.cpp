#include <iostream>
#include <vector>

using namespace std;


    //problem 1

/*

void inputMatrix(int N, int M) {

    int matrix[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix is stored internally" << endl;

}

int main() {
    int N, M;
    cin >> N >> M;

    inputMatrix(N, M);

    return 0;
}

*/


    //problem2

/*

void inputMatrix(int N, int M) {

    int matrix[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
}


void displayMatrix(int N, int M) {
    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    inputMatrix(N, M);
    displayMatrix(N, M);


    return 0;
}

*/


    //problem3

/*

void sumMatrix(int N, int M) {

    int matrix[N][M];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += matrix[i][j];
        }
    }

    cout << sum << endl;

}

int main() {
    int N, M;
    cin >> N >> M;

    sumMatrix(N, M);

    return 0;
}

*/


    //problem4

/*
void maxMatrix(int N, int M) {
    int matrix[N][M];

    // Matritsani foydalanuvchidan olish
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    // Har bir qatordagi maksimumni topish
    for (int i = 0; i < N; i++) {
        int maxElement = matrix[i][0];
        for (int j = 1; j < M; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
        cout << maxElement << endl;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    maxMatrix(N, M);

    return 0;
}

*/

    //problem5

/*
void inputMatrix(int N, int M) {
    int matrix[N][M];

    // Matritsani kiritish
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] + matrix[i+1][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    inputMatrix(N, M);

    return 0;
}

*/


    //problem6

/*

void diagonalsMatrix(int N) {
    int matrix[N][N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < N; i++) {
        sum += matrix[i][i];
    }

    cout << sum << endl;
}

int main() {
    int N, M;
    cin >> N;

    diagonalsMatrix(N);

    return 0;
}

*/


    //problem7


/*

void swapMatrix(int N, int M) {

    int matrix[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


}

int main() {
    int N, M;
    cin >> N >> M;

    swapMatrix(N, M);

    return 0;
}

*/



    //problem8


/*
void inputMatrix(int N, int M) {

    int matrix1[N][M], matrix2[N][M];

    cout << "Enter 1 matrix elements" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter 2 matrix elements" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix2[i][j];
        }
    }



    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }


}

int main() {
    int N, M;
    cin >> N >> M;

    inputMatrix(N, M);

    return 0;
}

*/


    //problem9
/*
int main() {
    int n, m, p;

    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    cin >> m >> p;
    int B[m][p];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];


    int C[n][p] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

*/


    //problem 10
/*
int main() {
    int n;
    cin >> n;

    int A[n][n], B[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = B[i][j];
            B[i][j] = B[i][n - 1 - j];
            B[i][n - 1 - j] = temp;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << B[i][j];
        }
        cout << endl;
    }

    return 0;
}
*/

    //problem 11

/*
int main() {
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    cout << max;
    return 0;
}

*/

    //problem12
/*
int main() {
    int n, x, count = 0;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (v[i] == x)
            count++;
    }

    cout << count;
    return 0;
}
*/

        //problem13
/*
int main() {
    int n, x;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (v[i] != x)
            cout << v[i] << " ";
    }

    return 0;
}

*/

    //problem14
/*
int main() {
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = n-1; i >= 0; i--)
        cout << v[i] << " ";

    return 0;
}

*/

    //problem15


int main() {
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << v[0] << " ";

    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
            cout << v[i] << " ";
        }
    }

    return 0;
}
