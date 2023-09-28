#include <stdio.h>
#include <string.h>

typedef struct {
  int x;
  int y;
} Position;

Position find_last_position(int N, char swing[]) {
  int x = 0, y = 0;

  for (int i = 0; i < strlen(swing); i++) {
    switch(swing[i]) {
      case 'U':
        if (x > 0) x--;
        break;
      case 'D':
        if (x < N-1) x++;
        break;
      case 'L':
        if (y > 0) y--;
        break;
      case 'R':
        if (y < N-1) y++;
        break;
    }
  }
  Position pos = {x, y};

  return pos;
}

int main() {
  int N;
  char swing[51];
  
  scanf("%d", &N);
  scanf("%s", swing);

  Position lastPos = find_last_position(N, swing);

  printf("공의 마지막 위치: (%d, %d)\n", lastPos.x+1, lastPos.y+1);

  return 0;

}