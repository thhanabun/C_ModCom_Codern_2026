#include <stdio.h>

int main()
{
    int p, m;
    int goals[101] = {0};
    scanf("%d", &p);
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int player;
        scanf("%d", &player);
        goals[player]++;
    }

    int top = 1;
    int scorers = 0;

    for (int i = 1; i <= p; i++) {
        if (goals[i] > goals[top]) {
            top = i;
        }
        if (goals[i] > 0) {
            scorers++;
        }
    }

    printf("Top: %d\n", top);
    printf("Goals: %d\n", goals[top]);
    printf("Scorers: %d", scorers);

    return 0;
}
