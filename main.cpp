#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>


//поле
struct Field {
    char field[10][10];
};


//заполнение поля точками, расстановка врагов
void point (Field& cell) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cell.field[i][j] = '.';
        }
    }
}

//расстановка врагов на поле
void charactersFieldEnemies (Field& cell)
{
    int i = 0;
    int enemies_total = 5;
    while (i < 5)
    {
        int x = std::rand()%10;
        int y = std::rand()%10;
        char cell_value = cell.field[x][y];

        if(cell_value == '.')
        {
            cell.field[x][y] = 'E';
            ++i;
        }
        else if (cell.field[x][y] == 'E')
        {
            continue;
        }
    }
}

//расстановка игрока на поле
void charactersFieldPlayer (Field& cell)
{
    bool player_exist = false;

    while (!player_exist)
    {
        int x = std::rand()%10;
        int y = std::rand()%10;
        char cell_value = cell.field[x][y];

        if (cell.field[x][y] == '.')
        {
            cell.field[x][y] = 'P';
            player_exist = true;
        }
        else
        {
            continue;
        }
    }
}

//вывод поля с персонажами в консоль
void print (Field& cell) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << cell.field[i][j] << " ";
        } std::cout << std::endl;
    }
}


int main() {
    std::srand(std::time(nullptr));

    Field cell;

    point(cell); //заполнение поля точками
    charactersFieldEnemies(cell);  //расстановка врагов
    charactersFieldPlayer(cell); //расстановка игрока
    print(cell); //вывод поля с персонажами

}