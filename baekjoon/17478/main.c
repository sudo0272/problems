#include <stdio.h>

void printStringWithUnderscores(unsigned times, char* string) {
  unsigned i;

  for (i = 0; i < times; i ++) {
    printf("____");
  }

  printf("%s\n", string);
}

void response(unsigned current, unsigned max) {
  static char *dialogs[] = {
    "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.",
    "\"재귀함수가 뭔가요?\"",
    "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.",
    "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.",
    "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"",
    "라고 답변하였지."
  };

  unsigned i;

  for (i = (current ? 1 : 0); i <= 1; i ++) {
    printStringWithUnderscores(current, dialogs[i]);
  }

  if (current == max) {
    printStringWithUnderscores(current, "\"재귀함수는 자기 자신을 호출하는 함수라네\"");
  } else {
    for (i = 2; i <= 4; i ++) {
      printStringWithUnderscores(current, dialogs[i]);
    }

    response(current + 1, max);
  }

  printStringWithUnderscores(current, dialogs[5]);
}

int main() {
  unsigned N;

  scanf("%u", &N);

  response(0, N);

  return 0;
}

