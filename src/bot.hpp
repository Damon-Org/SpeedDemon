#pragma once
#include "common.hpp"
#include "sleepy_discord/sleepy_discord.h"

class DiscordBot : public DiscordClient
{
    public:
        using DiscordClient::DiscordClient;

        void onMessage(Message message) override;
        void onReady(Ready state) override;
    private:
};
