#include "bot.hpp"

void DiscordBot::onMessage(Message message)
{
    if (message.content == "hello")
        this->sendMessage(message.channelID, "Bonjour");
}

void DiscordBot::onReady(Ready state)
{
    std::cout << state.user.username << " is ready for your service!" << std::endl;
}
