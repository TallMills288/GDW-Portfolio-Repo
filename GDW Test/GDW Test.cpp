#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file;
    file.open("leaderboard.csv");

    std::string name = "";
    int roundCount = 0;
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int diff = 0;

    //Test data
    name = "TestUser", roundCount = 3, seconds = 108;

    if (seconds > 60)
    {
        diff = seconds - (seconds % 60);
        minutes = diff / 60;
        seconds = seconds % 60;
    }

    if (minutes > 60)
    {
        diff = minutes - (minutes % 60);
        hours = diff / 60;
        minutes = minutes % 60;
    }

    file << "Name: " << name << ", Round Count: " << roundCount << ", Time: " << hours << ":" << minutes << ":" << seconds << std::endl;
}