#include "common.hpp"
#include "bot.hpp"

const char token[] = "NTY3NzM2ODE5MzA3NzczOTYy.XLX4HQ.uYpSWAJzZdSdDm7DJzyOB1mg4sU";

int main()
{
    std::cout << "Starting Discord bot" << std::endl;

    DiscordBot client(token, SleepyDiscord::USER_CONTROLED_THREADS);
    client.run();

    return 0;
}
