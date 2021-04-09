#include "bot.hpp"
#include "logger.hpp"

namespace speed_demon
{
    void discord_bot::onMessage(Message message)
    {
        if (message.content == "hello")
            this->sendMessage(message.channelID, "Bonjour");
    }

    void discord_bot::onReady(Ready state)
    {
        logger::verbose("BOT", "Bot is ready to serve.");
    }
}
