#include <iostream>;
#include <string>;
#include <utility>;

using namespace std;

struct FloorDimenstions
{
    int length;
    int width;
    int height;

    FloorDimenstions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
};

class Robot
{
private:
    int id;
    pair<int, int> currentLocation;

public:
    Robot(int id, pair<int, int> startingLocation)
    {
        this->id = id;
        currentLocation = startingLocation;
    }

    const pair<int, int> &GetCurrentLocation() const
    {
        return currentLocation;
    }

    void Move(pair<int, int> newLocation)
    {
        // check if row and col out of bounds or any hurdles
        // how to check which floor the robot is on????
        currentLocation = newLocation;
    }
};

class Storage
{
private:
    int height;
    int shelfs;
    pair<int, int> currentLocation;
    int id;

public:
    Storage(int id, int height, int shelfs, pair<int, int> startingLocation)
    {
        this->id = id;
        this->height = height;
        this->shelfs = shelfs;
        this->currentLocation = startingLocation;
    }
};

class Floor
{
private:
    int floorNumber;
    FloorDimenstions dimensions;
    int numberOfRobots;
    vector<Robot> robots;
    int numberOfStorage;
    // vector<Storage> storages;
    // vector<vector<int>> grid;
    unordered_map<pair<int, int>, Storage> storage_map;
    unordered_map<pair<int, int>, Robot> robot_map;

public:
    Floor(int floorNumber, FloorDimenstions dimensions, int numberOfRobotts, int numberOfStorage)
    {
        this->floorNumber = floorNumber;
        this->dimensions = dimensions;
        this->numberOfRobots = numberOfRobots;
        this->numberOfStorage = numberOfStorage;
    }

    void AddStorage(Storage &storage, int pair<int, int> location)
    {

        storage_map[location] = storage;
    }

    void AddRobot(Robot &robot, pair<int, int> location)
    {

        robot_map[location] = robot;
    }

    Storage ReturnStorageAtALocation(pair<int, int> location)
    {
        return storage_map[location];
    }
    Robot ReturnRobotAtALocation(pair<int, int> location)
    {
        return robot_map[location];
    }

    int TotalNumberOfRobots()
    {
        return robot_map.size();
    }
};

class WareHouse
{

private:
    string address;
    int numberOfFloors

        public : WareHouse(string &address, int numberOfFloors)
    {
        this->numberOfFloors = numberOfFloor;
        this->address = address;
    }
};