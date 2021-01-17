#include <bits/stdc++.h> 
using namespace std; 
int dx[6] = {0, 0, +1, 0, 0, -1}; 
int dy[6] = {0, +1, 0, 0, -1, 0}; 
int dz[6] = {+1, 0, 0, -1, 0, 0}; 
int tomato[101][101][101]; 
int n, m, h; 

struct ijk { int y; int x; int z; int day; }; 

int main() { 
    cin >> m >> n >> h; 
    queue<ijk> q; 
    int tomatoNot = 0; 
    for (int z = 0; z < h; z++) { 
        for (int y = 0; y < n; y++) { 
            for (int x = 0; x < m; x++) { 
                cin >> tomato[y][x][z]; 
                if (tomato[y][x][z] == 1) q.push({y, x, z, 0});  
                if (tomato[y][x][z] == 0) tomatoNot++; 
            } 
        } 
    } 
    int cantTomato = m * n * h - tomatoNot - q.size(); 
    int maxDay = 0; 
    while (!q.empty()) { 
        int y = q.front().y; 
        int x = q.front().x; 
        int z = q.front().z; 
        int day = q.front().day;
        q.pop(); 
        for (int i = 0; i < 6; i++) { 
            int ny = y + dy[i]; 
            int nx = x + dx[i]; 
            int nz = z + dz[i]; 
            if (ny >= 0 && ny < n && nx >= 0 && nx < m && nz >= 0 && nz < h) { 
                if (tomato[ny][nx][nz] == 0) { 
                    tomato[ny][nx][nz] = 1; 
                    q.push({ny, nx, nz, day + 1}); 
                } 
            } 
        } 
        maxDay = max(maxDay, day); 
    } 
    for (int z = 0; z < h; z++) { 
        for (int y = 0; y < n; y++) { 
            for (int x = 0; x < m; x++) { 
                if (tomato[y][x][z] == 0) { 
                    cout << "-1"; return 0; 
                } 
            } 
        } 
    } 
    cout << maxDay;
}
