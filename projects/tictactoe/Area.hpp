#include <iostream>

class Area {
public:
    void check_off();
    Area() = default;
    int matrix[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    bool check_gameover;

private:
};

void Area::check_off()
{
    int f1 = 1;
    int f2 = 2;
    if (matrix[0][0] == f1 && matrix[1][1] == f1 && matrix[2][2] == f1)
        check_gameover = 1;
    if (matrix[0][0] == f2 && matrix[1][1] == f2 && matrix[2][2] == f2)
        check_gameover = 1;
    if (matrix[0][2] == f1 && matrix[1][1] == f1 && matrix[2][0] == f1)
        check_gameover = 1;
    if (matrix[0][2] == f2 && matrix[1][1] == f2 && matrix[2][0] == f2)
        check_gameover = 1;
    if (matrix[0][0] == f1 && matrix[0][1] == f1 && matrix[0][2] == f1)
        check_gameover = 1;
    if (matrix[0][0] == f2 && matrix[0][1] == f2 && matrix[0][2] == f2)
        check_gameover = 1;
    if (matrix[1][0] == f1 && matrix[0][1] == f1 && matrix[0][2] == f1)
        check_gameover = 1;
    if (matrix[1][0] == f2 && matrix[0][1] == f2 && matrix[0][2] == f2)
        check_gameover = 1;
    if (matrix[2][0] == f1 && matrix[2][1] == f1 && matrix[2][2] == f1)
        check_gameover = 1;
    if (matrix[2][0] == f2 && matrix[2][1] == f2 && matrix[2][2] == f2)
        check_gameover = 1;
    if (matrix[0][0] == f1 && matrix[1][0] == f1 && matrix[2][0] == f1)
        check_gameover = 1;
    if (matrix[0][0] == f2 && matrix[1][0] == f2 && matrix[2][0] == f2)
        check_gameover = 1;
    if (matrix[0][1] == f1 && matrix[1][1] == f1 && matrix[2][1] == f1)
        check_gameover = 1;
    if (matrix[0][1] == f2 && matrix[1][1] == f2 && matrix[2][1] == f2)
        check_gameover = 1;
    if (matrix[0][2] == f1 && matrix[1][2] == f1 && matrix[2][2] == f1)
        check_gameover = 1;
    if (matrix[0][2] == f2 && matrix[1][2] == f2 && matrix[2][2] == f2)
        check_gameover = 1;
    if (check_gameover)
        return;
    check_gameover = 0;
    std::cout << check_gameover << std::endl;
}

void print(std::ostream&, const Area&);
void read_pos_1(std::istream&, std::ostream&, unsigned&, unsigned&, Area&);
void read_pos_2(std::istream&, std::ostream&, unsigned&, unsigned&, Area&);

void print(std::ostream& os, const Area& area)
{
    system("clear");
    for (unsigned x = 0; x < 3; x++) {
        for (unsigned k = 0; k < 3; k++)
            os << area.matrix[x][k];
        os << std::endl;
    }
    os << std::endl;
}

void read_pos_1(
        std::istream& is,
        std::ostream& os,
        unsigned& p1,
        unsigned& p2,
        Area& area)
{
    os << ": ";
    while (is >> p1 >> p2) {
        if ((p1 < 4 && p2 < 4) && (area.matrix[p1 - 1][p2 - 1] == 0)) {
            area.matrix[p1 - 1][p2 - 1] = 1;
            break;
        } else
            os << "Repeat: ";
    }
}

void read_pos_2(
        std::istream& is,
        std::ostream& os,
        unsigned& p1,
        unsigned& p2,
        Area& area)
{
    os << ": ";
    while (is >> p1 >> p2) {
        if ((p1 < 4 && p2 < 4) && (area.matrix[p1 - 1][p2 - 1] == 0)) {
            area.matrix[p1 - 1][p2 - 1] = 2;
            break;
        } else
            os << "Repeat: ";
    }
}