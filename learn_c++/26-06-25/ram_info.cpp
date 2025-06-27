#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream memInfo("/proc/meminfo");
    std::string line;

    long memTotal = 0;
    long memFree = 0;
    long memAvailable = 0;

    while (std::getline(memInfo, line))
    {
        if (line.find("MemTotal:") == 0)
        {
            sscanf(line.c_str(), "MemTotal: %ld kB", &memTotal);
        }
        else if (line.find("MemFree:") == 0)
        {
            sscanf(line.c_str(), "MemFree: %ld kB", &memFree);
        }
        else if (line.find("MemAvailable:") == 0)
        {
            sscanf(line.c_str(), "MemAvailable: %ld kB", &memAvailable);
        }

        // Stop early if all values are found
        if (memTotal && memFree && memAvailable)
            break;
    }

    std::cout << "RAM Total:    " << memTotal / 1024 << " MB" << std::endl;
    std::cout << "RAM Free:     " << memFree / 1024 << " MB" << std::endl;
    std::cout << "RAM Available:" << memAvailable / 1024 << " MB" << std::endl;

    return 0;
}
