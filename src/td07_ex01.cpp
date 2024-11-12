#include <iostream>
#include <vector>

struct Position {
    int x {};
    int y {};

    void display() const;
};

enum class Direction { Up, Down, Forward, Backward };

struct Move {
    Direction direction {};
    int distance {};
};

void Position::display() const
{
    std::cout << "Position : (" << x << ", " << y << ")" << std::endl;
};

void moveSubmarine(Position& position, Move const& move)
{
    switch (move.direction) {
        case Direction::Up:
            position.y += move.distance;
            break;
        case Direction::Down:
            position.y -= move.distance;
            break;
        case Direction::Forward:
            position.x += move.distance;
            break;
        case Direction::Backward:
            position.x -= move.distance;
            break;
        default:
            break;
    }
};

int main()
{
    std::vector<Move> moves = {
        {Direction::Forward, 10},
        {Direction::Down, 5},
        {Direction::Backward, 3},
        {Direction::Up, 2},
        {Direction::Forward, 5},
        {Direction::Down, 1},
        {Direction::Backward, 2},
        {Direction::Forward, 3},
        {Direction::Down, 1},
        {Direction::Up, 3},
        {Direction::Forward, 1},
        {Direction::Down, 5},
        {Direction::Backward, 2},
        {Direction::Forward, 6}
    };

    Position position {.x = 0, .y = 0};

    for (Move const& move : moves)
    {
        moveSubmarine(position, move);
        position.display();
    }
};