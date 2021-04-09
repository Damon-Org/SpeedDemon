#pragma once
#include "common.hpp"

namespace speed_demon
{
    class discord_bot : public DiscordClient
    {
        public:
            using DiscordClient::DiscordClient;

            void onMessage(Message message) override;
            void onReady(Ready state) override;
        private:
    };
}
