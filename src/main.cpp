#include "common.hpp"
#include "bot.hpp"
#include "logger.hpp"
#include "util.hpp"

int main()
{
    using namespace speed_demon;

    logger::info("MAIN", "Checking config.json");

    if (!util::does_file_exist("./config.json"))
    {
        logger::error("MAIN", "No config.json present, committing return 1;");

        return 1;
    }

    logger::info("MAIN", "Config present, reading...");

    config = util::read_file("./config.json");

    discord_bot client(config["token"], SleepyDiscord::USER_CONTROLED_THREADS);
    client.run();

    return 0;
}
