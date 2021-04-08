#pragma once
#include "common.hpp"

class DiscordBot : public DiscordClient
{
    public:
        using DiscordClient::DiscordClient;

        void onMessage(Message message) override;
        void onReady(Ready state) override;
    private:
};
