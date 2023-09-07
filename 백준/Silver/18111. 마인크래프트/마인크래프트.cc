#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, B;
    int map[500][500];
    int LessTime = 2'147'438'648;
    int TopHeight;

    cin >> N >> M >> B;
    for(int i = 0; i < N; i++){
        for( int j = 0; j < M; j++)
            cin >> map[i][j];
    }
    
    for(int h = 0; h <= 256; h++){
        int build = 0;
        int remove = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                int height = map[i][j] - h;
                if(height > 0)
                    remove += height;
                else if(height < 0)
                    build -= height;
            }
        }
        if(remove + B >= build){
            int time = remove * 2 + build;
            if(LessTime >= time){
                LessTime = time;
                TopHeight = h;
            }
        }
    }

    cout << LessTime << ' ' << TopHeight << '\n';

    return 0;
}