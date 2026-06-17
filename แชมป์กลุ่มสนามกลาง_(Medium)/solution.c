#include <stdio.h>

int main()
{
    int best_team = 1;
    int best_points = -1;
    int best_gd = -1000;
    int best_gf = -1;

    for (int i = 1; i <= 4; i++) {
        int w, d, l, gf, ga;
        scanf("%d %d %d %d %d", &w, &d, &l, &gf, &ga);
        (void)l;

        int points = w * 3 + d;
        int gd = gf - ga;

        if (points > best_points ||
            (points == best_points && gd > best_gd) ||
            (points == best_points && gd == best_gd && gf > best_gf)) {
            best_team = i;
            best_points = points;
            best_gd = gd;
            best_gf = gf;
        }
    }

    printf("Team %d\n", best_team);
    printf("Points: %d\n", best_points);
    printf("GD: %d", best_gd);

    return 0;
}
